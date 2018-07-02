// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TrapConfig.proto

#ifndef PROTOBUF_TrapConfig_2eproto__INCLUDED
#define PROTOBUF_TrapConfig_2eproto__INCLUDED

#include <string>

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

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "AllPacketEnum.pb.h"
#include "BattleInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace Config {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_TrapConfig_2eproto();
void protobuf_AssignDesc_TrapConfig_2eproto();
void protobuf_ShutdownFile_TrapConfig_2eproto();

class TrapConfig;

// ===================================================================

class TrapConfig : public ::google::protobuf::Message {
 public:
  TrapConfig();
  virtual ~TrapConfig();

  TrapConfig(const TrapConfig& from);

  inline TrapConfig& operator=(const TrapConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrapConfig& default_instance();

  void Swap(TrapConfig* other);

  // implements Message ----------------------------------------------

  TrapConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrapConfig& from);
  void MergeFrom(const TrapConfig& from);
  void Clear();
  bool IsInitialized() const;
  void SetInitialized();

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required int32 last_time = 2;
  inline bool has_last_time() const;
  inline void clear_last_time();
  static const int kLastTimeFieldNumber = 2;
  inline ::google::protobuf::int32 last_time() const;
  inline void set_last_time(::google::protobuf::int32 value);

  // required .Packet.Property damage_type = 3;
  inline bool has_damage_type() const;
  inline void clear_damage_type();
  static const int kDamageTypeFieldNumber = 3;
  inline ::Packet::Property damage_type() const;
  inline void set_damage_type(::Packet::Property value);

  // required int32 damage = 4;
  inline bool has_damage() const;
  inline void clear_damage();
  static const int kDamageFieldNumber = 4;
  inline ::google::protobuf::int32 damage() const;
  inline void set_damage(::google::protobuf::int32 value);

  // required float range = 5;
  inline bool has_range() const;
  inline void clear_range();
  static const int kRangeFieldNumber = 5;
  inline float range() const;
  inline void set_range(float value);

  // @@protoc_insertion_point(class_scope:Config.TrapConfig)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_last_time();
  inline void clear_has_last_time();
  inline void set_has_damage_type();
  inline void clear_has_damage_type();
  inline void set_has_damage();
  inline void clear_has_damage();
  inline void set_has_range();
  inline void clear_has_range();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 last_time_;
  int damage_type_;
  ::google::protobuf::int32 damage_;
  float range_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_TrapConfig_2eproto();
  friend void protobuf_AssignDesc_TrapConfig_2eproto();
  friend void protobuf_ShutdownFile_TrapConfig_2eproto();

  void InitAsDefaultInstance();
  static TrapConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// TrapConfig

// required int32 id = 1;
inline bool TrapConfig::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrapConfig::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrapConfig::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrapConfig::clear_id() {
  id_ = 0;
  clear_has_id();
  SetDirty();
}
inline ::google::protobuf::int32 TrapConfig::id() const {
  return id_;
}
inline void TrapConfig::set_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_id();
  id_ = value;
}

// required int32 last_time = 2;
inline bool TrapConfig::has_last_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TrapConfig::set_has_last_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TrapConfig::clear_has_last_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TrapConfig::clear_last_time() {
  last_time_ = 0;
  clear_has_last_time();
  SetDirty();
}
inline ::google::protobuf::int32 TrapConfig::last_time() const {
  return last_time_;
}
inline void TrapConfig::set_last_time(::google::protobuf::int32 value) {
  SetDirty();
  set_has_last_time();
  last_time_ = value;
}

// required .Packet.Property damage_type = 3;
inline bool TrapConfig::has_damage_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrapConfig::set_has_damage_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrapConfig::clear_has_damage_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrapConfig::clear_damage_type() {
  damage_type_ = 0;
  clear_has_damage_type();
  SetDirty();
}
inline ::Packet::Property TrapConfig::damage_type() const {
  return static_cast< ::Packet::Property >(damage_type_);
}
inline void TrapConfig::set_damage_type(::Packet::Property value) {
  assert(::Packet::Property_IsValid(value));
  SetDirty();
  set_has_damage_type();
  damage_type_ = value;
}

// required int32 damage = 4;
inline bool TrapConfig::has_damage() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TrapConfig::set_has_damage() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TrapConfig::clear_has_damage() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TrapConfig::clear_damage() {
  damage_ = 0;
  clear_has_damage();
  SetDirty();
}
inline ::google::protobuf::int32 TrapConfig::damage() const {
  return damage_;
}
inline void TrapConfig::set_damage(::google::protobuf::int32 value) {
  SetDirty();
  set_has_damage();
  damage_ = value;
}

// required float range = 5;
inline bool TrapConfig::has_range() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TrapConfig::set_has_range() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TrapConfig::clear_has_range() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TrapConfig::clear_range() {
  range_ = 0;
  clear_has_range();
  SetDirty();
}
inline float TrapConfig::range() const {
  return range_;
}
inline void TrapConfig::set_range(float value) {
  SetDirty();
  set_has_range();
  range_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Config

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TrapConfig_2eproto__INCLUDED