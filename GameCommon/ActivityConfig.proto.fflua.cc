// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ActivityConfig.proto
#include "ActivityConfig.pb.h"
#include "ActivityConfig.proto.fflua.h"
namespace Config {
bool ActivityTimes_fflua_reg(lua_State* state)
{
//for decltype
	ActivityTimes* message(nullptr);
	message;
	ff::fflua_register_t<ActivityTimes, ctor()>(state, "ActivityTimes", "google::protobuf::Message")
		// required int32 begin_time = 1;
		.def(&ActivityTimes::begin_time, "begin_time")
		.def(&ActivityTimes::set_begin_time, "set_begin_time")
		// required int32 end_time = 2;
		.def(&ActivityTimes::end_time, "end_time")
		.def(&ActivityTimes::set_end_time, "set_end_time")
		.def(&ActivityTimes::ByteSize, "ByteSize")
		.def(&ActivityTimes::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ActivityConfig_fflua_reg(lua_State* state)
{
//for decltype
	ActivityConfig* message(nullptr);
	message;
	ff::fflua_register_t<ActivityConfig, ctor()>(state, "ActivityConfig", "google::protobuf::Message")
		// required int32 id = 1;
		.def(&ActivityConfig::id, "id")
		.def(&ActivityConfig::set_id, "set_id")
		// required .Config.ActivityGroup group = 2;
		.def(&ActivityConfig::group, "group")
		.def(&ActivityConfig::set_group, "set_group")
		// required int32 reward_count = 3;
		.def(&ActivityConfig::reward_count, "reward_count")
		.def(&ActivityConfig::set_reward_count, "set_reward_count")
		// required int32 token_day_once = 4;
		.def(&ActivityConfig::token_day_once, "token_day_once")
		.def(&ActivityConfig::set_token_day_once, "set_token_day_once")
		// required int32 open_level = 5;
		.def(&ActivityConfig::open_level, "open_level")
		.def(&ActivityConfig::set_open_level, "set_open_level")
		// required int32 close_level = 6;
		.def(&ActivityConfig::close_level, "close_level")
		.def(&ActivityConfig::set_close_level, "set_close_level")
		// required int32 begin_date = 7;
		.def(&ActivityConfig::begin_date, "begin_date")
		.def(&ActivityConfig::set_begin_date, "set_begin_date")
		// required int32 end_date = 8;
		.def(&ActivityConfig::end_date, "end_date")
		.def(&ActivityConfig::set_end_date, "set_end_date")
		// required int32 people_count = 9;
		.def(&ActivityConfig::people_count, "people_count")
		.def(&ActivityConfig::set_people_count, "set_people_count")
		// required int32 switch_open = 10;
		.def(&ActivityConfig::switch_open, "switch_open")
		.def(&ActivityConfig::set_switch_open, "set_switch_open")
		// required int32 display_times = 11;
		.def(&ActivityConfig::display_times, "display_times")
		.def(&ActivityConfig::set_display_times, "set_display_times")
		// required string week_day_flag = 12;
		.def(&ActivityConfig::week_day_flag, "week_day_flag")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_week_day_flag, "set_week_day_flag")
		// required string during_week_flag = 13;
		.def(&ActivityConfig::during_week_flag, "during_week_flag")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_during_week_flag, "set_during_week_flag")
		// required int32 limit_times = 14;
		.def(&ActivityConfig::limit_times, "limit_times")
		.def(&ActivityConfig::set_limit_times, "set_limit_times")
		// required string day_begin_time = 15;
		.def(&ActivityConfig::day_begin_time, "day_begin_time")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_day_begin_time, "set_day_begin_time")
		// required string day_end_time = 16;
		.def(&ActivityConfig::day_end_time, "day_end_time")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_day_end_time, "set_day_end_time")
		// required string name = 17;
		.def(&ActivityConfig::name, "name")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_name, "set_name")
		// required int32 pre_notify = 18;
		.def(&ActivityConfig::pre_notify, "pre_notify")
		.def(&ActivityConfig::set_pre_notify, "set_pre_notify")
		// required string notify_text = 19;
		.def(&ActivityConfig::notify_text, "notify_text")
		.def<void (ActivityConfig::*)(const std::string&)>(&ActivityConfig::set_notify_text, "set_notify_text")
		.def(&ActivityConfig::ByteSize, "ByteSize")
		.def(&ActivityConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool TextAnswerConfig_fflua_reg(lua_State* state)
{
//for decltype
	TextAnswerConfig* message(nullptr);
	message;
	ff::fflua_register_t<TextAnswerConfig, ctor()>(state, "TextAnswerConfig", "google::protobuf::Message")
		// required int32 index = 1;
		.def(&TextAnswerConfig::index, "index")
		.def(&TextAnswerConfig::set_index, "set_index")
		// repeated string option = 2;
		.def(&TextAnswerConfig::option_size, "option_size")
		.def<const std::string& (TextAnswerConfig::*)(int) const>(&TextAnswerConfig::option, "option")
		.def<void (TextAnswerConfig::*)(int, const std::string&)>(&TextAnswerConfig::set_option, "set_option")
		.def<void (TextAnswerConfig::*)(const std::string&)>(&TextAnswerConfig::add_option, "add_option")
		// required int32 weight = 3;
		.def(&TextAnswerConfig::weight, "weight")
		.def(&TextAnswerConfig::set_weight, "set_weight")
		.def(&TextAnswerConfig::ByteSize, "ByteSize")
		.def(&TextAnswerConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool PicAnswerConfig_fflua_reg(lua_State* state)
{
//for decltype
	PicAnswerConfig* message(nullptr);
	message;
	ff::fflua_register_t<PicAnswerConfig, ctor()>(state, "PicAnswerConfig", "google::protobuf::Message")
		// required int32 index = 1;
		.def(&PicAnswerConfig::index, "index")
		.def(&PicAnswerConfig::set_index, "set_index")
		// required int32 group = 2;
		.def(&PicAnswerConfig::group, "group")
		.def(&PicAnswerConfig::set_group, "set_group")
		// repeated int32 option = 3;
		.def(&PicAnswerConfig::option_size, "option_size")
		.def<decltype(message->option(0)) (PicAnswerConfig::*)(int) const>(&PicAnswerConfig::option, "option")
		.def<void(PicAnswerConfig::*)(int, const decltype(message->option(0)))>(&PicAnswerConfig::set_option, "set_option")
		.def(&PicAnswerConfig::add_option, "add_option")
		// required int32 weight = 4;
		.def(&PicAnswerConfig::weight, "weight")
		.def(&PicAnswerConfig::set_weight, "set_weight")
		.def(&PicAnswerConfig::ByteSize, "ByteSize")
		.def(&PicAnswerConfig::SetInitialized, "SetInitialized")
		;
	return true;
}
bool ActivityConfig_fflua_regist_all(lua_State* state)
{
	ActivityTimes_fflua_reg(state);
	ActivityConfig_fflua_reg(state);
	TextAnswerConfig_fflua_reg(state);
	PicAnswerConfig_fflua_reg(state);
	return true;
}
}
