// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MissionConfig.proto

#ifndef PROTOBUF_MissionConfig_2eproto_2efflua_2eh__INCLUDED
#define PROTOBUF_MissionConfig_2eproto_2efflua_2eh__INCLUDED

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include<lua/fflua_register.h>

#include "AllConfigEnum.proto.fflua.h"
#include "ProtoBufOption.proto.fflua.h"
#include "MissionConfig.pb.h"
namespace ff{
//MissionConfig
//MissionExConfig
//TargetConfig
//StoryStageConfig
}
namespace Config {
bool MissionConfig_fflua_reg(lua_State* state);
bool MissionExConfig_fflua_reg(lua_State* state);
bool TargetConfig_fflua_reg(lua_State* state);
bool StoryStageConfig_fflua_reg(lua_State* state);
bool MissionConfig_fflua_regist_all(lua_State* state);
}
#endif //PROTOBUF_MissionConfig_2eproto_2efflua_2eh__INCLUDED
