// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatMessage.proto

#ifndef PROTOBUF_ChatMessage_2eproto__INCLUDED
#define PROTOBUF_ChatMessage_2eproto__INCLUDED

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
#include "PlayerBasicInfo.pb.h"
#include "ItemAndEquip.pb.h"
#include "AllPacketEnum.pb.h"
// @@protoc_insertion_point(includes)

namespace Packet {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ChatMessage_2eproto();
void protobuf_AssignDesc_ChatMessage_2eproto();
void protobuf_ShutdownFile_ChatMessage_2eproto();

class ChatMessage;
class PrivateChatMessageReq;
class PrivateChatMessageReply;

// ===================================================================

class ChatMessage : public ::google::protobuf::Message {
 public:
  ChatMessage();
  virtual ~ChatMessage();

  ChatMessage(const ChatMessage& from);

  inline ChatMessage& operator=(const ChatMessage& from) {
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
  static const ChatMessage& default_instance();

  void Swap(ChatMessage* other);

  // implements Message ----------------------------------------------

  ChatMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChatMessage& from);
  void MergeFrom(const ChatMessage& from);
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

  // required .Packet.ChatChannel channel = 1;
  inline bool has_channel() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 1;
  inline ::Packet::ChatChannel channel() const;
  inline void set_channel(::Packet::ChatChannel value);

  // required bytes content = 2;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 2;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // required int32 chat_time = 3;
  inline bool has_chat_time() const;
  inline void clear_chat_time();
  static const int kChatTimeFieldNumber = 3;
  inline ::google::protobuf::int32 chat_time() const;
  inline void set_chat_time(::google::protobuf::int32 value);

  // required fixed64 datetime = 4;
  inline bool has_datetime() const;
  inline void clear_datetime();
  static const int kDatetimeFieldNumber = 4;
  inline ::google::protobuf::uint64 datetime() const;
  inline void set_datetime(::google::protobuf::uint64 value);

  // optional int32 hair = 5;
  inline bool has_hair() const;
  inline void clear_hair();
  static const int kHairFieldNumber = 5;
  inline ::google::protobuf::int32 hair() const;
  inline void set_hair(::google::protobuf::int32 value);

  // optional string name = 6;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 6;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional .Packet.Race race = 7;
  inline bool has_race() const;
  inline void clear_race();
  static const int kRaceFieldNumber = 7;
  inline ::Packet::Race race() const;
  inline void set_race(::Packet::Race value);

  // optional .Packet.Professions profession = 8;
  inline bool has_profession() const;
  inline void clear_profession();
  static const int kProfessionFieldNumber = 8;
  inline ::Packet::Professions profession() const;
  inline void set_profession(::Packet::Professions value);

  // optional int32 channel_id = 9;
  inline bool has_channel_id() const;
  inline void clear_channel_id();
  static const int kChannelIdFieldNumber = 9;
  inline ::google::protobuf::int32 channel_id() const;
  inline void set_channel_id(::google::protobuf::int32 value);

  // optional fixed64 target_guid = 10;
  inline bool has_target_guid() const;
  inline void clear_target_guid();
  static const int kTargetGuidFieldNumber = 10;
  inline ::google::protobuf::uint64 target_guid() const;
  inline void set_target_guid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Packet.ChatMessage)
 private:
  inline void set_has_channel();
  inline void clear_has_channel();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_chat_time();
  inline void clear_has_chat_time();
  inline void set_has_datetime();
  inline void clear_has_datetime();
  inline void set_has_hair();
  inline void clear_has_hair();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_race();
  inline void clear_has_race();
  inline void set_has_profession();
  inline void clear_has_profession();
  inline void set_has_channel_id();
  inline void clear_has_channel_id();
  inline void set_has_target_guid();
  inline void clear_has_target_guid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* content_;
  int channel_;
  ::google::protobuf::int32 chat_time_;
  ::google::protobuf::uint64 datetime_;
  ::std::string* name_;
  ::google::protobuf::int32 hair_;
  int race_;
  int profession_;
  ::google::protobuf::int32 channel_id_;
  ::google::protobuf::uint64 target_guid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];

  friend void  protobuf_AddDesc_ChatMessage_2eproto();
  friend void protobuf_AssignDesc_ChatMessage_2eproto();
  friend void protobuf_ShutdownFile_ChatMessage_2eproto();

  void InitAsDefaultInstance();
  static ChatMessage* default_instance_;
};
// -------------------------------------------------------------------

class PrivateChatMessageReq : public ::google::protobuf::Message {
 public:
  PrivateChatMessageReq();
  virtual ~PrivateChatMessageReq();

  PrivateChatMessageReq(const PrivateChatMessageReq& from);

  inline PrivateChatMessageReq& operator=(const PrivateChatMessageReq& from) {
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
  static const PrivateChatMessageReq& default_instance();

  void Swap(PrivateChatMessageReq* other);

  // implements Message ----------------------------------------------

  PrivateChatMessageReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PrivateChatMessageReq& from);
  void MergeFrom(const PrivateChatMessageReq& from);
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

  // required fixed64 target_guid = 1;
  inline bool has_target_guid() const;
  inline void clear_target_guid();
  static const int kTargetGuidFieldNumber = 1;
  inline ::google::protobuf::uint64 target_guid() const;
  inline void set_target_guid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Packet.PrivateChatMessageReq)
 private:
  inline void set_has_target_guid();
  inline void clear_has_target_guid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 target_guid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ChatMessage_2eproto();
  friend void protobuf_AssignDesc_ChatMessage_2eproto();
  friend void protobuf_ShutdownFile_ChatMessage_2eproto();

  void InitAsDefaultInstance();
  static PrivateChatMessageReq* default_instance_;
};
// -------------------------------------------------------------------

class PrivateChatMessageReply : public ::google::protobuf::Message {
 public:
  PrivateChatMessageReply();
  virtual ~PrivateChatMessageReply();

  PrivateChatMessageReply(const PrivateChatMessageReply& from);

  inline PrivateChatMessageReply& operator=(const PrivateChatMessageReply& from) {
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
  static const PrivateChatMessageReply& default_instance();

  void Swap(PrivateChatMessageReply* other);

  // implements Message ----------------------------------------------

  PrivateChatMessageReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PrivateChatMessageReply& from);
  void MergeFrom(const PrivateChatMessageReply& from);
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

  // optional .Packet.PlayerBasicInfo playerinfo = 1;
  inline bool has_playerinfo() const;
  inline void clear_playerinfo();
  static const int kPlayerinfoFieldNumber = 1;
  inline const ::Packet::PlayerBasicInfo& playerinfo() const;
  inline ::Packet::PlayerBasicInfo* mutable_playerinfo();
  inline ::Packet::PlayerBasicInfo* release_playerinfo();
  inline void set_allocated_playerinfo(::Packet::PlayerBasicInfo* playerinfo);

  // @@protoc_insertion_point(class_scope:Packet.PrivateChatMessageReply)
 private:
  inline void set_has_playerinfo();
  inline void clear_has_playerinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::Packet::PlayerBasicInfo* playerinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ChatMessage_2eproto();
  friend void protobuf_AssignDesc_ChatMessage_2eproto();
  friend void protobuf_ShutdownFile_ChatMessage_2eproto();

  void InitAsDefaultInstance();
  static PrivateChatMessageReply* default_instance_;
};
// ===================================================================


// ===================================================================

// ChatMessage

// required .Packet.ChatChannel channel = 1;
inline bool ChatMessage::has_channel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatMessage::set_has_channel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatMessage::clear_has_channel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatMessage::clear_channel() {
  channel_ = 0;
  clear_has_channel();
  SetDirty();
}
inline ::Packet::ChatChannel ChatMessage::channel() const {
  return static_cast< ::Packet::ChatChannel >(channel_);
}
inline void ChatMessage::set_channel(::Packet::ChatChannel value) {
  assert(::Packet::ChatChannel_IsValid(value));
  SetDirty();
  set_has_channel();
  channel_ = value;
}

// required bytes content = 2;
inline bool ChatMessage::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChatMessage::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChatMessage::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChatMessage::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
  SetDirty();
}
inline const ::std::string& ChatMessage::content() const {
  return *content_;
}
inline void ChatMessage::set_content(const ::std::string& value) {
  SetDirty();
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ChatMessage::set_content(const char* value) {
  SetDirty();
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void ChatMessage::set_content(const void* value, size_t size) {
  SetDirty();
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatMessage::mutable_content() {
  SetDirty();
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* ChatMessage::release_content() {
  SetDirty();
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatMessage::set_allocated_content(::std::string* content) {
  SetDirty();
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 chat_time = 3;
inline bool ChatMessage::has_chat_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChatMessage::set_has_chat_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChatMessage::clear_has_chat_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChatMessage::clear_chat_time() {
  chat_time_ = 0;
  clear_has_chat_time();
  SetDirty();
}
inline ::google::protobuf::int32 ChatMessage::chat_time() const {
  return chat_time_;
}
inline void ChatMessage::set_chat_time(::google::protobuf::int32 value) {
  SetDirty();
  set_has_chat_time();
  chat_time_ = value;
}

// required fixed64 datetime = 4;
inline bool ChatMessage::has_datetime() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChatMessage::set_has_datetime() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChatMessage::clear_has_datetime() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChatMessage::clear_datetime() {
  datetime_ = GOOGLE_ULONGLONG(0);
  clear_has_datetime();
  SetDirty();
}
inline ::google::protobuf::uint64 ChatMessage::datetime() const {
  return datetime_;
}
inline void ChatMessage::set_datetime(::google::protobuf::uint64 value) {
  SetDirty();
  set_has_datetime();
  datetime_ = value;
}

// optional int32 hair = 5;
inline bool ChatMessage::has_hair() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ChatMessage::set_has_hair() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ChatMessage::clear_has_hair() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ChatMessage::clear_hair() {
  hair_ = 0;
  clear_has_hair();
  SetDirty();
}
inline ::google::protobuf::int32 ChatMessage::hair() const {
  return hair_;
}
inline void ChatMessage::set_hair(::google::protobuf::int32 value) {
  SetDirty();
  set_has_hair();
  hair_ = value;
}

// optional string name = 6;
inline bool ChatMessage::has_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ChatMessage::set_has_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ChatMessage::clear_has_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ChatMessage::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
  SetDirty();
}
inline const ::std::string& ChatMessage::name() const {
  return *name_;
}
inline void ChatMessage::set_name(const ::std::string& value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ChatMessage::set_name(const char* value) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void ChatMessage::set_name(const char* value, size_t size) {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ChatMessage::mutable_name() {
  SetDirty();
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* ChatMessage::release_name() {
  SetDirty();
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ChatMessage::set_allocated_name(::std::string* name) {
  SetDirty();
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .Packet.Race race = 7;
inline bool ChatMessage::has_race() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ChatMessage::set_has_race() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ChatMessage::clear_has_race() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ChatMessage::clear_race() {
  race_ = 0;
  clear_has_race();
  SetDirty();
}
inline ::Packet::Race ChatMessage::race() const {
  return static_cast< ::Packet::Race >(race_);
}
inline void ChatMessage::set_race(::Packet::Race value) {
  assert(::Packet::Race_IsValid(value));
  SetDirty();
  set_has_race();
  race_ = value;
}

// optional .Packet.Professions profession = 8;
inline bool ChatMessage::has_profession() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ChatMessage::set_has_profession() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ChatMessage::clear_has_profession() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ChatMessage::clear_profession() {
  profession_ = 0;
  clear_has_profession();
  SetDirty();
}
inline ::Packet::Professions ChatMessage::profession() const {
  return static_cast< ::Packet::Professions >(profession_);
}
inline void ChatMessage::set_profession(::Packet::Professions value) {
  assert(::Packet::Professions_IsValid(value));
  SetDirty();
  set_has_profession();
  profession_ = value;
}

// optional int32 channel_id = 9;
inline bool ChatMessage::has_channel_id() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ChatMessage::set_has_channel_id() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ChatMessage::clear_has_channel_id() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ChatMessage::clear_channel_id() {
  channel_id_ = 0;
  clear_has_channel_id();
  SetDirty();
}
inline ::google::protobuf::int32 ChatMessage::channel_id() const {
  return channel_id_;
}
inline void ChatMessage::set_channel_id(::google::protobuf::int32 value) {
  SetDirty();
  set_has_channel_id();
  channel_id_ = value;
}

// optional fixed64 target_guid = 10;
inline bool ChatMessage::has_target_guid() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ChatMessage::set_has_target_guid() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ChatMessage::clear_has_target_guid() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ChatMessage::clear_target_guid() {
  target_guid_ = GOOGLE_ULONGLONG(0);
  clear_has_target_guid();
  SetDirty();
}
inline ::google::protobuf::uint64 ChatMessage::target_guid() const {
  return target_guid_;
}
inline void ChatMessage::set_target_guid(::google::protobuf::uint64 value) {
  SetDirty();
  set_has_target_guid();
  target_guid_ = value;
}

// -------------------------------------------------------------------

// PrivateChatMessageReq

// required fixed64 target_guid = 1;
inline bool PrivateChatMessageReq::has_target_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PrivateChatMessageReq::set_has_target_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PrivateChatMessageReq::clear_has_target_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PrivateChatMessageReq::clear_target_guid() {
  target_guid_ = GOOGLE_ULONGLONG(0);
  clear_has_target_guid();
  SetDirty();
}
inline ::google::protobuf::uint64 PrivateChatMessageReq::target_guid() const {
  return target_guid_;
}
inline void PrivateChatMessageReq::set_target_guid(::google::protobuf::uint64 value) {
  SetDirty();
  set_has_target_guid();
  target_guid_ = value;
}

// -------------------------------------------------------------------

// PrivateChatMessageReply

// optional .Packet.PlayerBasicInfo playerinfo = 1;
inline bool PrivateChatMessageReply::has_playerinfo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PrivateChatMessageReply::set_has_playerinfo() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PrivateChatMessageReply::clear_has_playerinfo() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PrivateChatMessageReply::clear_playerinfo() {
  if (playerinfo_ != NULL) playerinfo_->::Packet::PlayerBasicInfo::Clear();
  clear_has_playerinfo();
  SetDirty();
}
inline const ::Packet::PlayerBasicInfo& PrivateChatMessageReply::playerinfo() const {
  return playerinfo_ != NULL ? *playerinfo_ : *default_instance_->playerinfo_;
}
inline ::Packet::PlayerBasicInfo* PrivateChatMessageReply::mutable_playerinfo() {
  SetDirty();
  set_has_playerinfo();
  if (playerinfo_ == NULL) playerinfo_ = new ::Packet::PlayerBasicInfo;
  return playerinfo_;
}
inline ::Packet::PlayerBasicInfo* PrivateChatMessageReply::release_playerinfo() {
  SetDirty();
  clear_has_playerinfo();
  ::Packet::PlayerBasicInfo* temp = playerinfo_;
  playerinfo_ = NULL;
  return temp;
}
inline void PrivateChatMessageReply::set_allocated_playerinfo(::Packet::PlayerBasicInfo* playerinfo) {
  SetDirty();
  delete playerinfo_;
  playerinfo_ = playerinfo;
  if (playerinfo) {
    set_has_playerinfo();
  } else {
    clear_has_playerinfo();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Packet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ChatMessage_2eproto__INCLUDED