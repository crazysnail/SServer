// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: W2GMessage.proto
#include "W2GMessage.pb.h"
#include "W2GMessage.proto.fflua.h"
namespace Packet {
bool PostData_fflua_reg(lua_State* state)
{
//for decltype
	PostData* message(nullptr);
	message;
	ff::fflua_register_t<PostData, ctor()>(state, "PostData", "google::protobuf::Message")
		// required string key = 1;
		.def(&PostData::key, "key")
		.def<void (PostData::*)(const std::string&)>(&PostData::set_key, "set_key")
		// required string value = 2;
		.def(&PostData::value, "value")
		.def<void (PostData::*)(const std::string&)>(&PostData::set_value, "set_value")
		.def(&PostData::ByteSize, "ByteSize")
		.def(&PostData::SetInitialized, "SetInitialized")
		;
	return true;
}
bool HttpData_fflua_reg(lua_State* state)
{
//for decltype
	HttpData* message(nullptr);
	message;
	ff::fflua_register_t<HttpData, ctor()>(state, "HttpData", "google::protobuf::Message")
		// required string url = 1;
		.def(&HttpData::url, "url")
		.def<void (HttpData::*)(const std::string&)>(&HttpData::set_url, "set_url")
		// required bool head_length = 2;
		.def(&HttpData::head_length, "head_length")
		.def(&HttpData::set_head_length, "set_head_length")
		// required int32 length = 3;
		.def(&HttpData::length, "length")
		.def(&HttpData::set_length, "set_length")
		// repeated .Packet.PostData post = 4;
		.def(&HttpData::post_size, "post_size")
		.def<decltype(message->post(0)) (HttpData::*)(int) const>(&HttpData::post, "post")
		.def<decltype(message->mutable_post(0)) (HttpData::*)(int)>(&HttpData::mutable_post, "mutable_post")
		.def(&HttpData::add_post, "add_post")
		// required bool post_finish = 5;
		.def(&HttpData::post_finish, "post_finish")
		.def(&HttpData::set_post_finish, "set_post_finish")
		.def(&HttpData::ByteSize, "ByteSize")
		.def(&HttpData::SetInitialized, "SetInitialized")
		;
	return true;
}
bool W2GMessage_fflua_regist_all(lua_State* state)
{
	PostData_fflua_reg(state);
	HttpData_fflua_reg(state);
	return true;
}
}
