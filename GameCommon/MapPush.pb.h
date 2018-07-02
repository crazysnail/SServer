// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MapPush.proto

#ifndef PROTOBUF_MapPush_2eproto__INCLUDED
#define PROTOBUF_MapPush_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Packet {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MapPush_2eproto();
void protobuf_AssignDesc_MapPush_2eproto();
void protobuf_ShutdownFile_MapPush_2eproto();

class MapPushStart;
class MapPushStartReply;
class MapPushStop;
class MapPushStopReply;

enum MapPushStartReply_Result {
  MapPushStartReply_Result_SUCCESS = 1,
  MapPushStartReply_Result_ALREADY_START = 2,
  MapPushStartReply_Result_UNKNOWN = 3
};
bool MapPushStartReply_Result_IsValid(int value);
const MapPushStartReply_Result MapPushStartReply_Result_Result_MIN = MapPushStartReply_Result_SUCCESS;
const MapPushStartReply_Result MapPushStartReply_Result_Result_MAX = MapPushStartReply_Result_UNKNOWN;
const int MapPushStartReply_Result_Result_ARRAYSIZE = MapPushStartReply_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* MapPushStartReply_Result_descriptor();
inline const ::std::string& MapPushStartReply_Result_Name(MapPushStartReply_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    MapPushStartReply_Result_descriptor(), value);
}
inline bool MapPushStartReply_Result_Parse(
    const ::std::string& name, MapPushStartReply_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MapPushStartReply_Result>(
    MapPushStartReply_Result_descriptor(), name, value);
}
enum MapPushStopReply_Result {
  MapPushStopReply_Result_SUCCESS = 1,
  MapPushStopReply_Result_CANNOT_STOP = 2,
  MapPushStopReply_Result_UNKNOWN = 3
};
bool MapPushStopReply_Result_IsValid(int value);
const MapPushStopReply_Result MapPushStopReply_Result_Result_MIN = MapPushStopReply_Result_SUCCESS;
const MapPushStopReply_Result MapPushStopReply_Result_Result_MAX = MapPushStopReply_Result_UNKNOWN;
const int MapPushStopReply_Result_Result_ARRAYSIZE = MapPushStopReply_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* MapPushStopReply_Result_descriptor();
inline const ::std::string& MapPushStopReply_Result_Name(MapPushStopReply_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    MapPushStopReply_Result_descriptor(), value);
}
inline bool MapPushStopReply_Result_Parse(
    const ::std::string& name, MapPushStopReply_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MapPushStopReply_Result>(
    MapPushStopReply_Result_descriptor(), name, value);
}
// ===================================================================

class MapPushStart : public ::google::protobuf::Message {
 public:
  MapPushStart();
  virtual ~MapPushStart();

  MapPushStart(const MapPushStart& from);

  inline MapPushStart& operator=(const MapPushStart& from) {
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
  static const MapPushStart& default_instance();

  void Swap(MapPushStart* other);

  // implements Message ----------------------------------------------

  MapPushStart* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapPushStart& from);
  void MergeFrom(const MapPushStart& from);
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

  // required int32 scene_id = 1;
  inline bool has_scene_id() const;
  inline void clear_scene_id();
  static const int kSceneIdFieldNumber = 1;
  inline ::google::protobuf::int32 scene_id() const;
  inline void set_scene_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Packet.MapPushStart)
 private:
  inline void set_has_scene_id();
  inline void clear_has_scene_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 scene_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MapPush_2eproto();
  friend void protobuf_AssignDesc_MapPush_2eproto();
  friend void protobuf_ShutdownFile_MapPush_2eproto();

  void InitAsDefaultInstance();
  static MapPushStart* default_instance_;
};
// -------------------------------------------------------------------

class MapPushStartReply : public ::google::protobuf::Message {
 public:
  MapPushStartReply();
  virtual ~MapPushStartReply();

  MapPushStartReply(const MapPushStartReply& from);

  inline MapPushStartReply& operator=(const MapPushStartReply& from) {
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
  static const MapPushStartReply& default_instance();

  void Swap(MapPushStartReply* other);

  // implements Message ----------------------------------------------

  MapPushStartReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapPushStartReply& from);
  void MergeFrom(const MapPushStartReply& from);
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

  typedef MapPushStartReply_Result Result;
  static const Result SUCCESS = MapPushStartReply_Result_SUCCESS;
  static const Result ALREADY_START = MapPushStartReply_Result_ALREADY_START;
  static const Result UNKNOWN = MapPushStartReply_Result_UNKNOWN;
  static inline bool Result_IsValid(int value) {
    return MapPushStartReply_Result_IsValid(value);
  }
  static const Result Result_MIN =
    MapPushStartReply_Result_Result_MIN;
  static const Result Result_MAX =
    MapPushStartReply_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    MapPushStartReply_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return MapPushStartReply_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return MapPushStartReply_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return MapPushStartReply_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Packet.MapPushStartReply.Result result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::Packet::MapPushStartReply_Result result() const;
  inline void set_result(::Packet::MapPushStartReply_Result value);

  // @@protoc_insertion_point(class_scope:Packet.MapPushStartReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MapPush_2eproto();
  friend void protobuf_AssignDesc_MapPush_2eproto();
  friend void protobuf_ShutdownFile_MapPush_2eproto();

  void InitAsDefaultInstance();
  static MapPushStartReply* default_instance_;
};
// -------------------------------------------------------------------

class MapPushStop : public ::google::protobuf::Message {
 public:
  MapPushStop();
  virtual ~MapPushStop();

  MapPushStop(const MapPushStop& from);

  inline MapPushStop& operator=(const MapPushStop& from) {
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
  static const MapPushStop& default_instance();

  void Swap(MapPushStop* other);

  // implements Message ----------------------------------------------

  MapPushStop* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapPushStop& from);
  void MergeFrom(const MapPushStop& from);
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

  // @@protoc_insertion_point(class_scope:Packet.MapPushStop)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_MapPush_2eproto();
  friend void protobuf_AssignDesc_MapPush_2eproto();
  friend void protobuf_ShutdownFile_MapPush_2eproto();

  void InitAsDefaultInstance();
  static MapPushStop* default_instance_;
};
// -------------------------------------------------------------------

class MapPushStopReply : public ::google::protobuf::Message {
 public:
  MapPushStopReply();
  virtual ~MapPushStopReply();

  MapPushStopReply(const MapPushStopReply& from);

  inline MapPushStopReply& operator=(const MapPushStopReply& from) {
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
  static const MapPushStopReply& default_instance();

  void Swap(MapPushStopReply* other);

  // implements Message ----------------------------------------------

  MapPushStopReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapPushStopReply& from);
  void MergeFrom(const MapPushStopReply& from);
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

  typedef MapPushStopReply_Result Result;
  static const Result SUCCESS = MapPushStopReply_Result_SUCCESS;
  static const Result CANNOT_STOP = MapPushStopReply_Result_CANNOT_STOP;
  static const Result UNKNOWN = MapPushStopReply_Result_UNKNOWN;
  static inline bool Result_IsValid(int value) {
    return MapPushStopReply_Result_IsValid(value);
  }
  static const Result Result_MIN =
    MapPushStopReply_Result_Result_MIN;
  static const Result Result_MAX =
    MapPushStopReply_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    MapPushStopReply_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return MapPushStopReply_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return MapPushStopReply_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return MapPushStopReply_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Packet.MapPushStopReply.Result result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::Packet::MapPushStopReply_Result result() const;
  inline void set_result(::Packet::MapPushStopReply_Result value);

  // @@protoc_insertion_point(class_scope:Packet.MapPushStopReply)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_MapPush_2eproto();
  friend void protobuf_AssignDesc_MapPush_2eproto();
  friend void protobuf_ShutdownFile_MapPush_2eproto();

  void InitAsDefaultInstance();
  static MapPushStopReply* default_instance_;
};
// ===================================================================


// ===================================================================

// MapPushStart

// required int32 scene_id = 1;
inline bool MapPushStart::has_scene_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapPushStart::set_has_scene_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapPushStart::clear_has_scene_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapPushStart::clear_scene_id() {
  scene_id_ = 0;
  clear_has_scene_id();
  SetDirty();
}
inline ::google::protobuf::int32 MapPushStart::scene_id() const {
  return scene_id_;
}
inline void MapPushStart::set_scene_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_scene_id();
  scene_id_ = value;
}

// -------------------------------------------------------------------

// MapPushStartReply

// required .Packet.MapPushStartReply.Result result = 1;
inline bool MapPushStartReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapPushStartReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapPushStartReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapPushStartReply::clear_result() {
  result_ = 1;
  clear_has_result();
  SetDirty();
}
inline ::Packet::MapPushStartReply_Result MapPushStartReply::result() const {
  return static_cast< ::Packet::MapPushStartReply_Result >(result_);
}
inline void MapPushStartReply::set_result(::Packet::MapPushStartReply_Result value) {
  assert(::Packet::MapPushStartReply_Result_IsValid(value));
  SetDirty();
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// MapPushStop

// -------------------------------------------------------------------

// MapPushStopReply

// required .Packet.MapPushStopReply.Result result = 1;
inline bool MapPushStopReply::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapPushStopReply::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapPushStopReply::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapPushStopReply::clear_result() {
  result_ = 1;
  clear_has_result();
  SetDirty();
}
inline ::Packet::MapPushStopReply_Result MapPushStopReply::result() const {
  return static_cast< ::Packet::MapPushStopReply_Result >(result_);
}
inline void MapPushStopReply::set_result(::Packet::MapPushStopReply_Result value) {
  assert(::Packet::MapPushStopReply_Result_IsValid(value));
  SetDirty();
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Packet::MapPushStartReply_Result>() {
  return ::Packet::MapPushStartReply_Result_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Packet::MapPushStopReply_Result>() {
  return ::Packet::MapPushStopReply_Result_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MapPush_2eproto__INCLUDED
