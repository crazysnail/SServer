// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LimitMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LimitMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Packet {

namespace {

const ::google::protobuf::Descriptor* ServerFull_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerFull_reflection_ = NULL;
const ::google::protobuf::Descriptor* TargetSceneIsFull_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TargetSceneIsFull_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LimitMessage_2eproto() {
  protobuf_AddDesc_LimitMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LimitMessage.proto");
  GOOGLE_CHECK(file != NULL);
  ServerFull_descriptor_ = file->message_type(0);
  static const int ServerFull_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerFull, queue_user_count_),
  };
  ServerFull_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ServerFull_descriptor_,
      ServerFull::default_instance_,
      ServerFull_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerFull, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerFull, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ServerFull));
  TargetSceneIsFull_descriptor_ = file->message_type(1);
  static const int TargetSceneIsFull_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetSceneIsFull, scene_id_),
  };
  TargetSceneIsFull_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TargetSceneIsFull_descriptor_,
      TargetSceneIsFull::default_instance_,
      TargetSceneIsFull_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetSceneIsFull, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TargetSceneIsFull, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TargetSceneIsFull));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LimitMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ServerFull_descriptor_, &ServerFull::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TargetSceneIsFull_descriptor_, &TargetSceneIsFull::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LimitMessage_2eproto() {
  delete ServerFull::default_instance_;
  delete ServerFull_reflection_;
  delete TargetSceneIsFull::default_instance_;
  delete TargetSceneIsFull_reflection_;
}

void protobuf_AddDesc_LimitMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022LimitMessage.proto\022\006Packet\"&\n\nServerFu"
    "ll\022\030\n\020queue_user_count\030\001 \002(\005\"%\n\021TargetSc"
    "eneIsFull\022\020\n\010scene_id\030\001 \002(\005", 107);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LimitMessage.proto", &protobuf_RegisterTypes);
  ServerFull::default_instance_ = new ServerFull();
  TargetSceneIsFull::default_instance_ = new TargetSceneIsFull();
  ServerFull::default_instance_->InitAsDefaultInstance();
  TargetSceneIsFull::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LimitMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LimitMessage_2eproto {
  StaticDescriptorInitializer_LimitMessage_2eproto() {
    protobuf_AddDesc_LimitMessage_2eproto();
  }
} static_descriptor_initializer_LimitMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ServerFull::kQueueUserCountFieldNumber;
#endif  // !_MSC_VER

ServerFull::ServerFull()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ServerFull::InitAsDefaultInstance() {
}

ServerFull::ServerFull(const ServerFull& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ServerFull::SharedCtor() {
  _cached_size_ = 0;
  queue_user_count_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerFull::~ServerFull() {
  SharedDtor();
}

void ServerFull::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ServerFull::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerFull::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerFull_descriptor_;
}

const ServerFull& ServerFull::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LimitMessage_2eproto();
  return *default_instance_;
}

ServerFull* ServerFull::default_instance_ = NULL;

ServerFull* ServerFull::New() const {
  return new ServerFull;
}

void ServerFull::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    queue_user_count_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
  SetDirty();
}

bool ServerFull::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 queue_user_count = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &queue_user_count_)));
          set_has_queue_user_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  SetDirty();
  return true;
#undef DO_
}

void ServerFull::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 queue_user_count = 1;
  if (has_queue_user_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->queue_user_count(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ServerFull::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 queue_user_count = 1;
  if (has_queue_user_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->queue_user_count(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ServerFull::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 queue_user_count = 1;
    if (has_queue_user_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->queue_user_count());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerFull::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ServerFull* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ServerFull*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
  SetDirty();
}

void ServerFull::MergeFrom(const ServerFull& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_queue_user_count()) {
      set_queue_user_count(from.queue_user_count());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  SetDirty();
}

void ServerFull::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

void ServerFull::CopyFrom(const ServerFull& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

bool ServerFull::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ServerFull::SetInitialized() {
  _has_bits_[0] |= 0x00000001;

  return;
}

void ServerFull::Swap(ServerFull* other) {
  if (other != this) {
    std::swap(queue_user_count_, other->queue_user_count_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    SetDirty(), other->SetDirty();
  }
}

::google::protobuf::Metadata ServerFull::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerFull_descriptor_;
  metadata.reflection = ServerFull_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TargetSceneIsFull::kSceneIdFieldNumber;
#endif  // !_MSC_VER

TargetSceneIsFull::TargetSceneIsFull()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TargetSceneIsFull::InitAsDefaultInstance() {
}

TargetSceneIsFull::TargetSceneIsFull(const TargetSceneIsFull& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TargetSceneIsFull::SharedCtor() {
  _cached_size_ = 0;
  scene_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TargetSceneIsFull::~TargetSceneIsFull() {
  SharedDtor();
}

void TargetSceneIsFull::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TargetSceneIsFull::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TargetSceneIsFull::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TargetSceneIsFull_descriptor_;
}

const TargetSceneIsFull& TargetSceneIsFull::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LimitMessage_2eproto();
  return *default_instance_;
}

TargetSceneIsFull* TargetSceneIsFull::default_instance_ = NULL;

TargetSceneIsFull* TargetSceneIsFull::New() const {
  return new TargetSceneIsFull;
}

void TargetSceneIsFull::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    scene_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
  SetDirty();
}

bool TargetSceneIsFull::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 scene_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &scene_id_)));
          set_has_scene_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  SetDirty();
  return true;
#undef DO_
}

void TargetSceneIsFull::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 scene_id = 1;
  if (has_scene_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->scene_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TargetSceneIsFull::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 scene_id = 1;
  if (has_scene_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->scene_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TargetSceneIsFull::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 scene_id = 1;
    if (has_scene_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->scene_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TargetSceneIsFull::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TargetSceneIsFull* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TargetSceneIsFull*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
  SetDirty();
}

void TargetSceneIsFull::MergeFrom(const TargetSceneIsFull& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_scene_id()) {
      set_scene_id(from.scene_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  SetDirty();
}

void TargetSceneIsFull::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

void TargetSceneIsFull::CopyFrom(const TargetSceneIsFull& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
  SetDirty();
}

bool TargetSceneIsFull::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void TargetSceneIsFull::SetInitialized() {
  _has_bits_[0] |= 0x00000001;

  return;
}

void TargetSceneIsFull::Swap(TargetSceneIsFull* other) {
  if (other != this) {
    std::swap(scene_id_, other->scene_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
    SetDirty(), other->SetDirty();
  }
}

::google::protobuf::Metadata TargetSceneIsFull::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TargetSceneIsFull_descriptor_;
  metadata.reflection = TargetSceneIsFull_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

// @@protoc_insertion_point(global_scope)
