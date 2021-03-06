// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Server.proto
#include "Server.pb.h"
#include "Server.proto.fflua.h"
namespace Server {
bool IdentifyRequest_fflua_reg(lua_State* state)
{
//for decltype
	IdentifyRequest* message(nullptr);
	message;
	ff::fflua_register_t<IdentifyRequest, ctor()>(state, "IdentifyRequest", "google::protobuf::Message")
		// required string version = 1;
		.def(&IdentifyRequest::version, "version")
		.def<void (IdentifyRequest::*)(const std::string&)>(&IdentifyRequest::set_version, "set_version")
		// required string password = 2;
		.def(&IdentifyRequest::password, "password")
		.def<void (IdentifyRequest::*)(const std::string&)>(&IdentifyRequest::set_password, "set_password")
		// required int32 id = 3;
		.def(&IdentifyRequest::id, "id")
		.def(&IdentifyRequest::set_id, "set_id")
		// required .Server.ServerType type = 4;
		.def(&IdentifyRequest::type, "type")
		.def(&IdentifyRequest::set_type, "set_type")
		// optional string ip = 5;
		.def(&IdentifyRequest::ip, "ip")
		.def<void (IdentifyRequest::*)(const std::string&)>(&IdentifyRequest::set_ip, "set_ip")
		.def(&IdentifyRequest::has_ip, "has_ip")
		// optional int32 port = 6;
		.def(&IdentifyRequest::port, "port")
		.def(&IdentifyRequest::set_port, "set_port")
		.def(&IdentifyRequest::has_port, "has_port")
		.def(&IdentifyRequest::ByteSize, "ByteSize")
		.def(&IdentifyRequest::SetInitialized, "SetInitialized")
		;
	return true;
}
bool IdentifyReply_fflua_reg(lua_State* state)
{
//for decltype
	IdentifyReply* message(nullptr);
	message;
	ff::fflua_register_t<IdentifyReply, ctor()>(state, "IdentifyReply", "google::protobuf::Message")
		// required int32 result = 1;
		.def(&IdentifyReply::result, "result")
		.def(&IdentifyReply::set_result, "set_result")
		.def(&IdentifyReply::ByteSize, "ByteSize")
		.def(&IdentifyReply::SetInitialized, "SetInitialized")
		;
	return true;
}
bool Server_fflua_regist_all(lua_State* state)
{
	IdentifyRequest_fflua_reg(state);
	IdentifyReply_fflua_reg(state);
	return true;
}
}
