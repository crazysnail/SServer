// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AllPacketEnum.proto

#ifndef PROTOBUF_AllPacketEnum_2eproto_2efflua_2eh__INCLUDED
#define PROTOBUF_AllPacketEnum_2eproto_2efflua_2eh__INCLUDED

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

#include "AllPacketEnum.pb.h"
namespace ff{
template<>
struct basetype_ptr_traits_t<::Packet::PlayerTeamStatus>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::PlayerTeamStatus>
{
	static ::Packet::PlayerTeamStatus r(int32_t a) { return (::Packet::PlayerTeamStatus)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorType>
{
	static ::Packet::ActorType r(int32_t a) { return (::Packet::ActorType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BattleActorType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BattleActorType>
{
	static ::Packet::BattleActorType r(int32_t a) { return (::Packet::BattleActorType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::LastHpType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::LastHpType>
{
	static ::Packet::LastHpType r(int32_t a) { return (::Packet::LastHpType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorStar>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorStar>
{
	static ::Packet::ActorStar r(int32_t a) { return (::Packet::ActorStar)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorColor>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorColor>
{
	static ::Packet::ActorColor r(int32_t a) { return (::Packet::ActorColor)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorBattleType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorBattleType>
{
	static ::Packet::ActorBattleType r(int32_t a) { return (::Packet::ActorBattleType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorFigthFormation>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorFigthFormation>
{
	static ::Packet::ActorFigthFormation r(int32_t a) { return (::Packet::ActorFigthFormation)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::DamageType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::DamageType>
{
	static ::Packet::DamageType r(int32_t a) { return (::Packet::DamageType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::DamageExpression>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::DamageExpression>
{
	static ::Packet::DamageExpression r(int32_t a) { return (::Packet::DamageExpression)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::SkillPositionLogicType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::SkillPositionLogicType>
{
	static ::Packet::SkillPositionLogicType r(int32_t a) { return (::Packet::SkillPositionLogicType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BattleGroundType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BattleGroundType>
{
	static ::Packet::BattleGroundType r(int32_t a) { return (::Packet::BattleGroundType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BattleObjectType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BattleObjectType>
{
	static ::Packet::BattleObjectType r(int32_t a) { return (::Packet::BattleObjectType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorStateType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorStateType>
{
	static ::Packet::ActorStateType r(int32_t a) { return (::Packet::ActorStateType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActorControlType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActorControlType>
{
	static ::Packet::ActorControlType r(int32_t a) { return (::Packet::ActorControlType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Property>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Property>
{
	static ::Packet::Property r(int32_t a) { return (::Packet::Property)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ChatChannel>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ChatChannel>
{
	static ::Packet::ChatChannel r(int32_t a) { return (::Packet::ChatChannel)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::CellLogicType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::CellLogicType>
{
	static ::Packet::CellLogicType r(int32_t a) { return (::Packet::CellLogicType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::NumberCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::NumberCellIndex>
{
	static ::Packet::NumberCellIndex r(int32_t a) { return (::Packet::NumberCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BitFlagCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BitFlagCellIndex>
{
	static ::Packet::BitFlagCellIndex r(int32_t a) { return (::Packet::BitFlagCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::MissionCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::MissionCellIndex>
{
	static ::Packet::MissionCellIndex r(int32_t a) { return (::Packet::MissionCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::GuideCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::GuideCellIndex>
{
	static ::Packet::GuideCellIndex r(int32_t a) { return (::Packet::GuideCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActivityDataIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActivityDataIndex>
{
	static ::Packet::ActivityDataIndex r(int32_t a) { return (::Packet::ActivityDataIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::AcRewardIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::AcRewardIndex>
{
	static ::Packet::AcRewardIndex r(int32_t a) { return (::Packet::AcRewardIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::TargetDataIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::TargetDataIndex>
{
	static ::Packet::TargetDataIndex r(int32_t a) { return (::Packet::TargetDataIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ActionDataIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ActionDataIndex>
{
	static ::Packet::ActionDataIndex r(int32_t a) { return (::Packet::ActionDataIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ResetTimeIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ResetTimeIndex>
{
	static ::Packet::ResetTimeIndex r(int32_t a) { return (::Packet::ResetTimeIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Cell64LogicType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Cell64LogicType>
{
	static ::Packet::Cell64LogicType r(int32_t a) { return (::Packet::Cell64LogicType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::LootCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::LootCellIndex>
{
	static ::Packet::LootCellIndex r(int32_t a) { return (::Packet::LootCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::GuildUserCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::GuildUserCellIndex>
{
	static ::Packet::GuildUserCellIndex r(int32_t a) { return (::Packet::GuildUserCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::NumberCell64Index>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::NumberCell64Index>
{
	static ::Packet::NumberCell64Index r(int32_t a) { return (::Packet::NumberCell64Index)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::EquipBook64Index>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::EquipBook64Index>
{
	static ::Packet::EquipBook64Index r(int32_t a) { return (::Packet::EquipBook64Index)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ZoneCellIndex>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ZoneCellIndex>
{
	static ::Packet::ZoneCellIndex r(int32_t a) { return (::Packet::ZoneCellIndex)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::FriendMessageType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::FriendMessageType>
{
	static ::Packet::FriendMessageType r(int32_t a) { return (::Packet::FriendMessageType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ContainerType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ContainerType>
{
	static ::Packet::ContainerType r(int32_t a) { return (::Packet::ContainerType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::AccountType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::AccountType>
{
	static ::Packet::AccountType r(int32_t a) { return (::Packet::AccountType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::MissionState>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::MissionState>
{
	static ::Packet::MissionState r(int32_t a) { return (::Packet::MissionState)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::MissionOption>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::MissionOption>
{
	static ::Packet::MissionOption r(int32_t a) { return (::Packet::MissionOption)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::MissionDB_Param>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::MissionDB_Param>
{
	static ::Packet::MissionDB_Param r(int32_t a) { return (::Packet::MissionDB_Param)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Camp>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Camp>
{
	static ::Packet::Camp r(int32_t a) { return (::Packet::Camp)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ArrangeType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ArrangeType>
{
	static ::Packet::ArrangeType r(int32_t a) { return (::Packet::ArrangeType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Race>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Race>
{
	static ::Packet::Race r(int32_t a) { return (::Packet::Race)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Professions>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Professions>
{
	static ::Packet::Professions r(int32_t a) { return (::Packet::Professions)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Talent>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Talent>
{
	static ::Packet::Talent r(int32_t a) { return (::Packet::Talent)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::Gender>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::Gender>
{
	static ::Packet::Gender r(int32_t a) { return (::Packet::Gender)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::HeroPosition>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::HeroPosition>
{
	static ::Packet::HeroPosition r(int32_t a) { return (::Packet::HeroPosition)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::TokenType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::TokenType>
{
	static ::Packet::TokenType r(int32_t a) { return (::Packet::TokenType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::GuildPosition>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::GuildPosition>
{
	static ::Packet::GuildPosition r(int32_t a) { return (::Packet::GuildPosition)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::GuildBuildType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::GuildBuildType>
{
	static ::Packet::GuildBuildType r(int32_t a) { return (::Packet::GuildBuildType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::GuildBattle_Stage>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::GuildBattle_Stage>
{
	static ::Packet::GuildBattle_Stage r(int32_t a) { return (::Packet::GuildBattle_Stage)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::PlayerSceneStatus>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::PlayerSceneStatus>
{
	static ::Packet::PlayerSceneStatus r(int32_t a) { return (::Packet::PlayerSceneStatus)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::RaidState>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::RaidState>
{
	static ::Packet::RaidState r(int32_t a) { return (::Packet::RaidState)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ResultOption>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ResultOption>
{
	static ::Packet::ResultOption r(int32_t a) { return (::Packet::ResultOption)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::ResultCode>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::ResultCode>
{
	static ::Packet::ResultCode r(int32_t a) { return (::Packet::ResultCode)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::NpcSourceType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::NpcSourceType>
{
	static ::Packet::NpcSourceType r(int32_t a) { return (::Packet::NpcSourceType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::NpcOption>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::NpcOption>
{
	static ::Packet::NpcOption r(int32_t a) { return (::Packet::NpcOption)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BattleFieldState>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BattleFieldState>
{
	static ::Packet::BattleFieldState r(int32_t a) { return (::Packet::BattleFieldState)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::FlagOption>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::FlagOption>
{
	static ::Packet::FlagOption r(int32_t a) { return (::Packet::FlagOption)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::RankGroup>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::RankGroup>
{
	static ::Packet::RankGroup r(int32_t a) { return (::Packet::RankGroup)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::SimpleImpactEffectType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::SimpleImpactEffectType>
{
	static ::Packet::SimpleImpactEffectType r(int32_t a) { return (::Packet::SimpleImpactEffectType)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::BattleGroundStatus>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::BattleGroundStatus>
{
	static ::Packet::BattleGroundStatus r(int32_t a) { return (::Packet::BattleGroundStatus)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::CaptureStatus>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::CaptureStatus>
{
	static ::Packet::CaptureStatus r(int32_t a) { return (::Packet::CaptureStatus)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::StrongHoldStatus>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::StrongHoldStatus>
{
	static ::Packet::StrongHoldStatus r(int32_t a) { return (::Packet::StrongHoldStatus)a; }
};
template<>
struct basetype_ptr_traits_t<::Packet::SkillBuffStubType>
{
	typedef int32_t arg_type_t;
};

template<>
struct p_t<::Packet::SkillBuffStubType>
{
	static ::Packet::SkillBuffStubType r(int32_t a) { return (::Packet::SkillBuffStubType)a; }
};
}
namespace Packet {
bool AllPacketEnum_fflua_regist_all(lua_State* state);
}
#endif //PROTOBUF_AllPacketEnum_2eproto_2efflua_2eh__INCLUDED
