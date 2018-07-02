// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GuildConfig.proto
#include "GuildConfig.pb.h"
#include "GuildConfig.proto.fflua.h"
namespace Config {
bool GuildBuildLevelConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildBuildLevelConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildBuildLevelConfig, ctor()>(state, "GuildBuildLevelConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildBuildLevelConfig::id, "id")
		.def(&GuildBuildLevelConfig::set_id, "set_id")
		// required int32 buildtype = 2;
		.def(&GuildBuildLevelConfig::buildtype, "buildtype")
		.def(&GuildBuildLevelConfig::set_buildtype, "set_buildtype")
		// required int32 buildlevel = 3;
		.def(&GuildBuildLevelConfig::buildlevel, "buildlevel")
		.def(&GuildBuildLevelConfig::set_buildlevel, "set_buildlevel")
		// required int32 cost = 4;
		.def(&GuildBuildLevelConfig::cost, "cost")
		.def(&GuildBuildLevelConfig::set_cost, "set_cost")
		// repeated int32 param = 5;
		.def(&GuildBuildLevelConfig::param_size, "param_size")
		.def<decltype(message->param(0)) (GuildBuildLevelConfig::*)(int) const>(&GuildBuildLevelConfig::param, "param")
		.def<void(GuildBuildLevelConfig::*)(int, const decltype(message->param(0)))>(&GuildBuildLevelConfig::set_param, "set_param")
		.def(&GuildBuildLevelConfig::add_param, "add_param")
		.def(&GuildBuildLevelConfig::ByteSize, "ByteSize")
		.def(&GuildBuildLevelConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildLevelFixConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildLevelFixConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildLevelFixConfig, ctor()>(state, "GuildLevelFixConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildLevelFixConfig::id, "id")
		.def(&GuildLevelFixConfig::set_id, "set_id")
		// required int32 battle = 2;
		.def(&GuildLevelFixConfig::battle, "battle")
		.def(&GuildLevelFixConfig::set_battle, "set_battle")
		// required int32 playergold = 3;
		.def(&GuildLevelFixConfig::playergold, "playergold")
		.def(&GuildLevelFixConfig::set_playergold, "set_playergold")
		.def(&GuildLevelFixConfig::ByteSize, "ByteSize")
		.def(&GuildLevelFixConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildPracticeConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildPracticeConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildPracticeConfig, ctor()>(state, "GuildPracticeConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildPracticeConfig::id, "id")
		.def(&GuildPracticeConfig::set_id, "set_id")
		// repeated int32 attribute = 2;
		.def(&GuildPracticeConfig::attribute_size, "attribute_size")
		.def<decltype(message->attribute(0)) (GuildPracticeConfig::*)(int) const>(&GuildPracticeConfig::attribute, "attribute")
		.def<void(GuildPracticeConfig::*)(int, const decltype(message->attribute(0)))>(&GuildPracticeConfig::set_attribute, "set_attribute")
		.def(&GuildPracticeConfig::add_attribute, "add_attribute")
		.def(&GuildPracticeConfig::ByteSize, "ByteSize")
		.def(&GuildPracticeConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildPracticeLevelConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildPracticeLevelConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildPracticeLevelConfig, ctor()>(state, "GuildPracticeLevelConfig", "google::protobuf::Message")
		// required int32 level = 1;
		.def(&GuildPracticeLevelConfig::level, "level")
		.def(&GuildPracticeLevelConfig::set_level, "set_level")
		// required int32 exp = 2;
		.def(&GuildPracticeLevelConfig::exp, "exp")
		.def(&GuildPracticeLevelConfig::set_exp, "set_exp")
		// required int32 playerlimit = 3;
		.def(&GuildPracticeLevelConfig::playerlimit, "playerlimit")
		.def(&GuildPracticeLevelConfig::set_playerlimit, "set_playerlimit")
		// required int32 guildlimit = 4;
		.def(&GuildPracticeLevelConfig::guildlimit, "guildlimit")
		.def(&GuildPracticeLevelConfig::set_guildlimit, "set_guildlimit")
		// required int32 contributionlimit = 5;
		.def(&GuildPracticeLevelConfig::contributionlimit, "contributionlimit")
		.def(&GuildPracticeLevelConfig::set_contributionlimit, "set_contributionlimit")
		.def(&GuildPracticeLevelConfig::ByteSize, "ByteSize")
		.def(&GuildPracticeLevelConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildCDKConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildCDKConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildCDKConfig, ctor()>(state, "GuildCDKConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildCDKConfig::id, "id")
		.def(&GuildCDKConfig::set_id, "set_id")
		// required int32 itemid = 2;
		.def(&GuildCDKConfig::itemid, "itemid")
		.def(&GuildCDKConfig::set_itemid, "set_itemid")
		// required int32 cost = 3;
		.def(&GuildCDKConfig::cost, "cost")
		.def(&GuildCDKConfig::set_cost, "set_cost")
		.def(&GuildCDKConfig::ByteSize, "ByteSize")
		.def(&GuildCDKConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildWetCopyConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildWetCopyConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildWetCopyConfig, ctor()>(state, "GuildWetCopyConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildWetCopyConfig::id, "id")
		.def(&GuildWetCopyConfig::set_id, "set_id")
		// required int32 coincost = 2;
		.def(&GuildWetCopyConfig::coincost, "coincost")
		.def(&GuildWetCopyConfig::set_coincost, "set_coincost")
		// required int32 sceneid = 3;
		.def(&GuildWetCopyConfig::sceneid, "sceneid")
		.def(&GuildWetCopyConfig::set_sceneid, "set_sceneid")
		// required int32 levellimit = 4;
		.def(&GuildWetCopyConfig::levellimit, "levellimit")
		.def(&GuildWetCopyConfig::set_levellimit, "set_levellimit")
		// required int32 guildlevellimit = 5;
		.def(&GuildWetCopyConfig::guildlevellimit, "guildlevellimit")
		.def(&GuildWetCopyConfig::set_guildlevellimit, "set_guildlevellimit")
		.def(&GuildWetCopyConfig::ByteSize, "ByteSize")
		.def(&GuildWetCopyConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildWetCopyStageConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildWetCopyStageConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildWetCopyStageConfig, ctor()>(state, "GuildWetCopyStageConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&GuildWetCopyStageConfig::id, "id")
		.def(&GuildWetCopyStageConfig::set_id, "set_id")
		// required int32 pro_stage = 2;
		.def(&GuildWetCopyStageConfig::pro_stage, "pro_stage")
		.def(&GuildWetCopyStageConfig::set_pro_stage, "set_pro_stage")
		// required int32 copy_id = 3;
		.def(&GuildWetCopyStageConfig::copy_id, "copy_id")
		.def(&GuildWetCopyStageConfig::set_copy_id, "set_copy_id")
		// required int32 monster_id = 4;
		.def(&GuildWetCopyStageConfig::monster_id, "monster_id")
		.def(&GuildWetCopyStageConfig::set_monster_id, "set_monster_id")
		// required int32 drop = 5;
		.def(&GuildWetCopyStageConfig::drop, "drop")
		.def(&GuildWetCopyStageConfig::set_drop, "set_drop")
		// required int32 boss_id = 6;
		.def(&GuildWetCopyStageConfig::boss_id, "boss_id")
		.def(&GuildWetCopyStageConfig::set_boss_id, "set_boss_id")
		.def(&GuildWetCopyStageConfig::ByteSize, "ByteSize")
		.def(&GuildWetCopyStageConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildPositionConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildPositionConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildPositionConfig, ctor()>(state, "GuildPositionConfig", "google::protobuf::Message")
		// required int32 guildposition = 1;
		.def(&GuildPositionConfig::guildposition, "guildposition")
		.def(&GuildPositionConfig::set_guildposition, "set_guildposition")
		// required int32 bonus = 2;
		.def(&GuildPositionConfig::bonus, "bonus")
		.def(&GuildPositionConfig::set_bonus, "set_bonus")
		.def(&GuildPositionConfig::ByteSize, "ByteSize")
		.def(&GuildPositionConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildDonateConfig_fflua_reg(lua_State* state)
{
//for decltype
	GuildDonateConfig* message(nullptr);
	message;
	ff::fflua_register_t<GuildDonateConfig, ctor()>(state, "GuildDonateConfig", "google::protobuf::Message")
		// required int32 type = 1;
		.def(&GuildDonateConfig::type, "type")
		.def(&GuildDonateConfig::set_type, "set_type")
		// required int32 cost = 2;
		.def(&GuildDonateConfig::cost, "cost")
		.def(&GuildDonateConfig::set_cost, "set_cost")
		// required int32 addmoney = 3;
		.def(&GuildDonateConfig::addmoney, "addmoney")
		.def(&GuildDonateConfig::set_addmoney, "set_addmoney")
		// required int32 addcontribute = 4;
		.def(&GuildDonateConfig::addcontribute, "addcontribute")
		.def(&GuildDonateConfig::set_addcontribute, "set_addcontribute")
		.def(&GuildDonateConfig::ByteSize, "ByteSize")
		.def(&GuildDonateConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool GuildConfig_fflua_regist_all(lua_State* state)
{
	GuildBuildLevelConfig_fflua_reg(state);
	GuildLevelFixConfig_fflua_reg(state);
	GuildPracticeConfig_fflua_reg(state);
	GuildPracticeLevelConfig_fflua_reg(state);
	GuildCDKConfig_fflua_reg(state);
	GuildWetCopyConfig_fflua_reg(state);
	GuildWetCopyStageConfig_fflua_reg(state);
	GuildPositionConfig_fflua_reg(state);
	GuildDonateConfig_fflua_reg(state);
	return true;
}
}