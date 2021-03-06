// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RankList.proto
#include "RankList.pb.h"
#include "RankList.proto.fflua.h"
namespace Packet {
bool TopRankData_fflua_reg(lua_State* state)
{
//for decltype
	TopRankData* message(nullptr);
	message;
	ff::fflua_register_t<TopRankData, ctor()>(state, "TopRankData", "google::protobuf::Message")
		// required fixed64 playerguid = 1;
		.def(&TopRankData::playerguid, "playerguid")
		.def(&TopRankData::set_playerguid, "set_playerguid")
		// required string playername = 2;
		.def(&TopRankData::playername, "playername")
		.def<void (TopRankData::*)(const std::string&)>(&TopRankData::set_playername, "set_playername")
		// required int32 init_actor_id = 3;
		.def(&TopRankData::init_actor_id, "init_actor_id")
		.def(&TopRankData::set_init_actor_id, "set_init_actor_id")
		// required int32 level = 4;
		.def(&TopRankData::level, "level")
		.def(&TopRankData::set_level, "set_level")
		// repeated int32 value = 5;
		.def(&TopRankData::value_size, "value_size")
		.def<decltype(message->value(0)) (TopRankData::*)(int) const>(&TopRankData::value, "value")
		.def<void(TopRankData::*)(int, const decltype(message->value(0)))>(&TopRankData::set_value, "set_value")
		.def(&TopRankData::add_value, "add_value")
		.def(&TopRankData::ByteSize, "ByteSize")
		.def(&TopRankData::SetInitialized, "SetInitialized")
		;
	return true;
}
bool TopRankDataReq_fflua_reg(lua_State* state)
{
//for decltype
	TopRankDataReq* message(nullptr);
	message;
	ff::fflua_register_t<TopRankDataReq, ctor()>(state, "TopRankDataReq", "google::protobuf::Message")
		// required .Packet.RankGroup group = 1;
		.def(&TopRankDataReq::group, "group")
		.def(&TopRankDataReq::set_group, "set_group")
		// required int32 type = 2;
		.def(&TopRankDataReq::type, "type")
		.def(&TopRankDataReq::set_type, "set_type")
		.def(&TopRankDataReq::ByteSize, "ByteSize")
		.def(&TopRankDataReq::SetInitialized, "SetInitialized")
		;
	return true;
}
bool TopRankDataReply_fflua_reg(lua_State* state)
{
//for decltype
	TopRankDataReply* message(nullptr);
	message;
	ff::fflua_register_t<TopRankDataReply, ctor()>(state, "TopRankDataReply", "google::protobuf::Message")
		// repeated .Packet.TopRankData list = 1;
		.def(&TopRankDataReply::list_size, "list_size")
		.def<decltype(message->list(0)) (TopRankDataReply::*)(int) const>(&TopRankDataReply::list, "list")
		.def<decltype(message->mutable_list(0)) (TopRankDataReply::*)(int)>(&TopRankDataReply::mutable_list, "mutable_list")
		.def(&TopRankDataReply::add_list, "add_list")
		// required int32 refreshtime = 2;
		.def(&TopRankDataReply::refreshtime, "refreshtime")
		.def(&TopRankDataReply::set_refreshtime, "set_refreshtime")
		.def(&TopRankDataReply::ByteSize, "ByteSize")
		.def(&TopRankDataReply::SetInitialized, "SetInitialized")
		;
	return true;
}
bool RankList_fflua_regist_all(lua_State* state)
{
	TopRankData_fflua_reg(state);
	TopRankDataReq_fflua_reg(state);
	TopRankDataReply_fflua_reg(state);
	return true;
}
}
