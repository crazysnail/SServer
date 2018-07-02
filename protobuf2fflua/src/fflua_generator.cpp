// Ryan Wang @KOOGame
// protobuf���, �Զ�����һЩfflua��ע�����
#include "fflua_generator.h"
#include <google/protobuf/io/printer.h>
#include <google/protobuf/io/zero_copy_stream.h>
#include<google/protobuf/compiler/cpp/cpp_helpers.h>
#include <google/protobuf/stubs/strutil.h>

bool FFluaGenerator::Generate(const FileDescriptor* file, const string& parameter, compiler::GeneratorContext* generator_context, string* error) const
{
	vector<string> package_parts;
	SplitStringUsing(file->package(), ".", &package_parts);
	string enum_type_prefix;
	JoinStrings(package_parts, "::", &enum_type_prefix);
	auto header_file_name = file->name() + ".fflua.h";
	auto header_identifier = compiler::cpp::FilenameIdentifier(header_file_name);
	// Generate header.
	{
		scoped_ptr<io::ZeroCopyOutputStream> output(
			generator_context->Open(header_file_name));
		//generator_context->OpenForInsert()
		io::Printer printer(output.get(), '$');
		printer.Print(
			"// Generated by the protocol buffer compiler.  DO NOT EDIT!\n"
			"// source: $filename$\n"
			"\n"
			"#ifndef PROTOBUF_$filename_identifier$__INCLUDED\n"
			"#define PROTOBUF_$filename_identifier$__INCLUDED\n"
			"\n",
			"filename", file->name(),
			"filename_identifier", header_identifier);
		printer.Print(
			"#include <google/protobuf/stubs/common.h>\n"
			"\n");
		// Verify the protobuf library header version is compatible with the protoc
		// version before going any further.
		printer.Print(
			"#if GOOGLE_PROTOBUF_VERSION < $min_header_version$\n"
			"#error This file was generated by a newer version of protoc which is\n"
			"#error incompatible with your Protocol Buffer headers.  Please update\n"
			"#error your headers.\n"
			"#endif\n"
			"#if $protoc_version$ < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION\n"
			"#error This file was generated by an older version of protoc which is\n"
			"#error incompatible with your Protocol Buffer headers.  Please\n"
			"#error regenerate this file with a newer version of protoc.\n"
			"#endif\n"
			"\n",
			"min_header_version",
			SimpleItoa(google::protobuf::internal::kMinHeaderVersionForProtoc),
			"protoc_version", SimpleItoa(GOOGLE_PROTOBUF_VERSION));
		// include fflua
		printer.Print("#include<lua/fflua_register.h>\n\n");

		//file_dependency
		for (auto i = 0; i < file->dependency_count(); ++i) {
			auto dependency = file->dependency(i);
			if (dependency->dependency_count() > 0 || dependency->enum_type_count() > 0) {
				printer.Print("#include \"$dependency_name$.fflua.h\"\n", "dependency_name", dependency->name());
			}
		}
		//self proto dependecy
		printer.Print(
			"#include \"$proto_buf_file$.pb.h\"\n",
			"proto_buf_file", compiler::cpp::StripProto(file->name()));

		//fflua ret type ENUM specializtion
		printer.Print("namespace ff{\n");
		for (auto i = 0; i < file->enum_type_count(); ++i) {
			printer.Print("template<>\n"
				"struct basetype_ptr_traits_t<::$enum_type_prefix$::$enum_type_name$>\n"
				"{\n"
				"\ttypedef int32_t arg_type_t;\n"
				"};\n\n",
				"enum_type_name", file->enum_type(i)->name(),
				"enum_type_prefix", enum_type_prefix
			);
			printer.Print("template<>\n"
				"struct p_t<::$enum_type_prefix$::$enum_type_name$>\n"
				"{\n"
				"\tstatic ::$enum_type_prefix$::$enum_type_name$ r(int32_t a) { return (::$enum_type_prefix$::$enum_type_name$)a; }\n"
				"};\n",
				"enum_type_name", file->enum_type(i)->name(),
				"enum_type_prefix", enum_type_prefix
			);
		}
		for (auto i = 0; i < file->message_type_count(); ++i) {

			auto message_descriptor = file->message_type(i);
			printer.Print("//$name$\n", "name", message_descriptor->name());
			EnumTemplateSpecializtion(printer, message_descriptor, enum_type_prefix + "::" + message_descriptor->name());
		}
		printer.Print("}\n");



		/*		printer.Print("using namespace ff;\n\n");*/
				//printer.Print("using namespace google::protobuf;\n\n");


				//namespace start
		NamespaceOpen(printer, *file);

		// def message register
		if (file->message_type_count() > 0) {
			for (auto i = 0; i < file->message_type_count(); ++i) {
				auto message = file->message_type(i);
				//def function
				printer.Print("bool $message_name$_fflua_reg(lua_State* state);\n", "message_name", message->name());
			}
		}
		vector<string> file_name_parts;
		SplitStringUsing(file->name(), ".", &file_name_parts);
		printer.Print("bool $file_name$_fflua_regist_all(lua_State* state);\n",
			"file_name", *file_name_parts.begin());
		//namespace end
		NamespaceClose(printer, *file);

		//#endif
		printer.Print("#endif //PROTOBUF_$filename_identifier$__INCLUDED\n", "filename_identifier", header_identifier);
	}

	// Generate Source
	{
		scoped_ptr<io::ZeroCopyOutputStream> output(
			generator_context->Open(file->name() + ".fflua.cc"));
		io::Printer printer(output.get(), '$');
		printer.Print(
			"// Generated by the protocol buffer compiler.  DO NOT EDIT!\n"
			"// source: $filename$\n",
			"filename", file->name());
		printer.Print(
			"#include \"$proto_buf_file$.pb.h\"\n",
			"proto_buf_file", compiler::cpp::StripProto(file->name()));
		printer.Print(
			"#include \"$header$\"\n", "header", header_file_name);

		//namespace start
		NamespaceOpen(printer, *file);

		// def message register
		if (file->message_type_count() > 0) {
			for (auto i = 0; i < file->message_type_count(); ++i) {
				auto message = file->message_type(i);
				//def function
				printer.Print("bool $message_name$_fflua_reg(lua_State* state)\n{\n", "message_name", message->name());
				MessageFieldGen(printer, message);
				printer.Print("}\n");
			}
		}
		AllMessageFieldReg(printer, *file);
		//namespace end
		NamespaceClose(printer, *file);
	}


	//EnumForLuaGlobal
	{
		std::string path = "";// .. / .. / .. / Source / Server / bin / lua_script / ";
		static bool IsFirstLuaGlobal = true;
		if (IsFirstLuaGlobal) {
			scoped_ptr<io::ZeroCopyOutputStream> output(generator_context->Open(path+"global_enum.lua"));
			io::Printer printer(output.get(), '$');
			printer.Print("-- @@protoc_insertion_point(Anchor)");

			IsFirstLuaGlobal = false;
		}

		scoped_ptr<io::ZeroCopyOutputStream> output2(generator_context->OpenForInsert(path+"global_enum.lua", "Anchor"));
		io::Printer printer2(output2.get(), '$');

		EnumForLuaGlobal(printer2, *file);

	}

	return true;
}
void FFluaGenerator::EnumTemplateSpecializtion(io::Printer& printer, const Descriptor* message_descriptor, string prefix /*= ""*/) const
{
	for (auto i = 0; i < message_descriptor->enum_type_count(); ++i) {
		auto enum_descriptor = message_descriptor->enum_type(i);
		printer.Print("template<>\n"
			"struct basetype_ptr_traits_t<::$enum_type_prefix$::$enum_type_name$>\n"
			"{\n"
			"\ttypedef int32_t arg_type_t;\n"
			"};\n\n",
			"enum_type_name", enum_descriptor->name(),
			"enum_type_prefix", prefix
		);
		printer.Print("template<>\n"
			"struct p_t<::$enum_type_prefix$::$enum_type_name$>\n"
			"{\n"
			"\tstatic ::$enum_type_prefix$::$enum_type_name$ r(int32_t a) { return (::$enum_type_prefix$::$enum_type_name$)a; }\n"
			"};\n",
			"enum_type_name", enum_descriptor->name(),
			"enum_type_prefix", prefix
		);
	}
	for (auto i = 0; i < message_descriptor->nested_type_count(); ++i) {
		auto nested_message_descriptor = message_descriptor->nested_type(i);
		EnumTemplateSpecializtion(printer, nested_message_descriptor, prefix + "::" + nested_message_descriptor->name());
	}
}

void FFluaGenerator::EnumForLuaGlobal(io::Printer& printer, const FileDescriptor& file ) const
{
	for (auto i = 0; i < file.enum_type_count(); ++i)
	{

		auto enum_descriptor = file.enum_type(i);
		printer.Print("\n--$enuenum_type_name$ begin\n", "enuenum_type_name", enum_descriptor->name());
		for (auto k = 0; k < enum_descriptor->value_count(); ++k) {

			auto value_descriptor = enum_descriptor->value(k);

			int32 value = value_descriptor->number();
			char szBuffer[128] = { 0 };
			sprintf_s(szBuffer, "%d", value);

			printer.Print("$enum_type_name$_$enum_value_name$=$enum_value$;\n"
				, "enum_type_name"
				, enum_descriptor->name()
				, "enum_value_name"
				, value_descriptor->name()
				, "enum_value"
				, szBuffer
			);

		}	

		printer.Print("--$enuenum_type_name$ end\n\n", "enuenum_type_name", enum_descriptor->name());
	}
}

void FFluaGenerator::NamespaceOpen(io::Printer& printer, const FileDescriptor& file_descriptor) const 
{
	vector<string> package_parts;
	SplitStringUsing(file_descriptor.package(), ".", &package_parts);
	for (auto package_name : package_parts) {
		printer.Print("namespace $package_name$ {\n", "package_name", package_name);
	}
}

void FFluaGenerator::NamespaceClose(io::Printer& printer, const FileDescriptor& file_descriptor) const
{
	vector<string> package_parts;
	SplitStringUsing(file_descriptor.package(), ".", &package_parts);
	for (auto package_name : package_parts) {
		printer.Print("}\n");
	}
}

void FFluaGenerator::MessageFieldGen(io::Printer& printer, const Descriptor* descriptor) const 
{
	auto message_name = descriptor->name();
	printer.Print("//for decltype\n");
	printer.Print("\t$message_name$* message(nullptr);\n", "message_name", message_name);
	printer.Print("\tmessage;\n");
	if (descriptor->field_count() == 0) {
		printer.Print("\tff::fflua_register_t<$message_name$, ctor()>(state, \"$message_name$\", \"google::protobuf::Message\");\n",
			"message_name", message_name);
	} else{
		printer.Print("\tff::fflua_register_t<$message_name$, ctor()>(state, \"$message_name$\", \"google::protobuf::Message\")\n",
			"message_name", message_name);
		for (auto i = 0; i < descriptor->field_count(); ++i) {
			auto field = descriptor->field(i);
			string def = field->DebugString();
			printer.Print("\t\t// $def$\n",
				"def", def.substr(0, def.find_first_of('\n')));
			if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE) {//��Ϣ����
				if (field->is_required()) {
					//def getter
					printer.Print("\t\t.def(&$message_name$::$field_name$, \"$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
					//def setter
					printer.Print("\t\t.def(&$message_name$::mutable_$field_name$, \"mutable_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
				}
				if (field->is_optional()) {
					//def getter
					printer.Print("\t\t.def(&$message_name$::$field_name$, \"$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
					//def setter
					printer.Print("\t\t.def(&$message_name$::mutable_$field_name$, \"mutable_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
					//def has
					printer.Print("\t\t.def(&$message_name$::has_$field_name$, \"has_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
				}
				if (field->is_repeated()) {
					//def size getter
					printer.Print("\t\t.def(&$message_name$::$field_name$_size, \"$field_name$_size\")\n",
						"message_name", message_name, "field_name", field->name());
					//def index getter
					printer.Print("\t\t.def<decltype(message->$field_name$(0)) ($message_name$::*)(int) const>(&$message_name$::$field_name$, \"$field_name$\")\n",
						"message_name", message_name,"field_name", field->name(), "field_message_name", field->full_name());

					//def index setter
					printer.Print("\t\t.def<decltype(message->mutable_$field_name$(0)) ($message_name$::*)(int)>(&$message_name$::mutable_$field_name$, \"mutable_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name(), "field_message_name", field->full_name());
					//def add type setter
					printer.Print("\t\t.def(&$message_name$::add_$field_name$, \"add_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
				}
			}
			else {//��������
				if (field->is_required()) {
					//def getter
					printer.Print("\t\t.def(&$message_name$::$field_name$, \"$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
					//def setter
					if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING
						|| field->type() == google::protobuf::FieldDescriptor::Type::TYPE_BYTES) {
						printer.Print("\t\t.def<void ($message_name$::*)(const std::string&)>(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name,"field_name", field->name());
					}
					else {
						printer.Print("\t\t.def(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
				}
				if (field->is_optional()) {
					//def getter
					printer.Print("\t\t.def(&$message_name$::$field_name$, \"$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());

					//def setter
					if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
						printer.Print("\t\t.def<void ($message_name$::*)(const std::string&)>(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name,"field_name", field->name());
					}
					else {
						printer.Print("\t\t.def(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
					//def has 
					printer.Print("\t\t.def(&$message_name$::has_$field_name$, \"has_$field_name$\")\n",
						"message_name", message_name, "field_name", field->name());
				}
				if (field->is_repeated()) {
					//def size getter
					printer.Print("\t\t.def(&$message_name$::$field_name$_size, \"$field_name$_size\")\n",
						"message_name", message_name, "field_name", field->name());
					//def index getter
					if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
						printer.Print("\t\t.def<const std::string& ($message_name$::*)(int) const>(&$message_name$::$field_name$, \"$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
					else {
						printer.Print("\t\t.def<decltype(message->$field_name$(0)) ($message_name$::*)(int) const>(&$message_name$::$field_name$, \"$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}

					//def index setter
					if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
						printer.Print("\t\t.def<void ($message_name$::*)(int, const std::string&)>(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
					else if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_ENUM) {
						printer.Print("\t\t.def(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name(), "enum_name", field->enum_type()->name());
					}
					else {
						printer.Print("\t\t.def<void($message_name$::*)(int, const decltype(message->$field_name$(0)))>(&$message_name$::set_$field_name$, \"set_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
					//def add tyep setter
					if (field->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
						printer.Print("\t\t.def<void ($message_name$::*)(const std::string&)>(&$message_name$::add_$field_name$, \"add_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
					else {
						printer.Print("\t\t.def(&$message_name$::add_$field_name$, \"add_$field_name$\")\n",
							"message_name", message_name, "field_name", field->name());
					}
				}
			}
			if (i == descriptor->field_count() - 1) {
				printer.Print("\t\t.def(&$message_name$::ByteSize, \"ByteSize\")\n", "message_name", message_name);
				printer.Print("\t\t.def(&$message_name$::SetInitialized, \"SetInitialized\")\n","message_name", message_name);
				printer.Print("\t\t;\n");
			}
		}
	}
	printer.Print("\treturn true;\n");
}

void FFluaGenerator::AllMessageFieldReg(io::Printer& printer, const FileDescriptor& file_descriptor) const
{
	//regist all
	vector<string> file_name_parts;
	SplitStringUsing(file_descriptor.name(), ".", &file_name_parts);
	printer.Print("bool $file_name$_fflua_regist_all(lua_State* state)\n{\n",
		"file_name", *file_name_parts.begin());
	for (auto i = 0; i < file_descriptor.message_type_count(); ++i) {
		auto message_descriptor = file_descriptor.message_type(i);
		printer.Print("\t$message_name$_fflua_reg(state);\n", "message_name", message_descriptor->name());
	}
	printer.Print("\treturn true;\n"
		"}\n");
}
