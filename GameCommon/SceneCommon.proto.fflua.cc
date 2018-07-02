// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneCommon.proto
#include "SceneCommon.pb.h"
#include "SceneCommon.proto.fflua.h"
namespace Packet {
bool CommonRequest_fflua_reg(lua_State* state)
{
//for decltype
	CommonRequest* message(nullptr);
	message;
	ff::fflua_register_t<CommonRequest, ctor()>(state, "CommonRequest", "google::protobuf::Message")
		// required string request_name = 1;
		.def(&CommonRequest::request_name, "request_name")
		.def<void (CommonRequest::*)(const std::string&)>(&CommonRequest::set_request_name, "set_request_name")
		// repeated int32 int32_params = 2;
		.def(&CommonRequest::int32_params_size, "int32_params_size")
		.def<decltype(message->int32_params(0)) (CommonRequest::*)(int) const>(&CommonRequest::int32_params, "int32_params")
		.def<void(CommonRequest::*)(int, const decltype(message->int32_params(0)))>(&CommonRequest::set_int32_params, "set_int32_params")
		.def(&CommonRequest::add_int32_params, "add_int32_params")
		// repeated fixed64 int64_params = 3;
		.def(&CommonRequest::int64_params_size, "int64_params_size")
		.def<decltype(message->int64_params(0)) (CommonRequest::*)(int) const>(&CommonRequest::int64_params, "int64_params")
		.def<void(CommonRequest::*)(int, const decltype(message->int64_params(0)))>(&CommonRequest::set_int64_params, "set_int64_params")
		.def(&CommonRequest::add_int64_params, "add_int64_params")
		.def(&CommonRequest::ByteSize, "ByteSize")
		.def(&CommonRequest::SetInitialized, "SetInitialized")
		;
	return true;
}
bool CommonReply_fflua_reg(lua_State* state)
{
//for decltype
	CommonReply* message(nullptr);
	message;
	ff::fflua_register_t<CommonReply, ctor()>(state, "CommonReply", "google::protobuf::Message")
		// required string reply_name = 1;
		.def(&CommonReply::reply_name, "reply_name")
		.def<void (CommonReply::*)(const std::string&)>(&CommonReply::set_reply_name, "set_reply_name")
		// repeated int32 int32_params = 2;
		.def(&CommonReply::int32_params_size, "int32_params_size")
		.def<decltype(message->int32_params(0)) (CommonReply::*)(int) const>(&CommonReply::int32_params, "int32_params")
		.def<void(CommonReply::*)(int, const decltype(message->int32_params(0)))>(&CommonReply::set_int32_params, "set_int32_params")
		.def(&CommonReply::add_int32_params, "add_int32_params")
		// repeated fixed64 int64_params = 3;
		.def(&CommonReply::int64_params_size, "int64_params_size")
		.def<decltype(message->int64_params(0)) (CommonReply::*)(int) const>(&CommonReply::int64_params, "int64_params")
		.def<void(CommonReply::*)(int, const decltype(message->int64_params(0)))>(&CommonReply::set_int64_params, "set_int64_params")
		.def(&CommonReply::add_int64_params, "add_int64_params")
		// repeated string string_params = 4;
		.def(&CommonReply::string_params_size, "string_params_size")
		.def<const std::string& (CommonReply::*)(int) const>(&CommonReply::string_params, "string_params")
		.def<void (CommonReply::*)(int, const std::string&)>(&CommonReply::set_string_params, "set_string_params")
		.def<void (CommonReply::*)(const std::string&)>(&CommonReply::add_string_params, "add_string_params")
		.def(&CommonReply::ByteSize, "ByteSize")
		.def(&CommonReply::SetInitialized, "SetInitialized")
		;
	return true;
}
bool CommonResult_fflua_reg(lua_State* state)
{
//for decltype
	CommonResult* message(nullptr);
	message;
	ff::fflua_register_t<CommonResult, ctor()>(state, "CommonResult", "google::protobuf::Message")
		// required .Packet.ResultOption option = 1;
		.def(&CommonResult::option, "option")
		.def(&CommonResult::set_option, "set_option")
		// required .Packet.ResultCode code = 2;
		.def(&CommonResult::code, "code")
		.def(&CommonResult::set_code, "set_code")
		.def(&CommonResult::ByteSize, "ByteSize")
		.def(&CommonResult::SetInitialized, "SetInitialized")
		;
	return true;
}
bool SceneCommon_fflua_regist_all(lua_State* state)
{
	CommonRequest_fflua_reg(state);
	CommonReply_fflua_reg(state);
	CommonResult_fflua_reg(state);
	return true;
}
}
