// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrapConfig.proto

#ifndef PROTOBUF_TrapConfig_2eproto_2efflua_2eh__INCLUDED
#define PROTOBUF_TrapConfig_2eproto_2efflua_2eh__INCLUDED

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

#include "AllPacketEnum.proto.fflua.h"
#include "TrapConfig.pb.h"
namespace ff{
//TrapConfig
}
namespace Config {
bool TrapConfig_fflua_reg(lua_State* state);
bool TrapConfig_fflua_regist_all(lua_State* state);
}
#endif //PROTOBUF_TrapConfig_2eproto_2efflua_2eh__INCLUDED