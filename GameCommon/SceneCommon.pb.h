// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SceneCommon.proto

#ifndef PROTOBUF_SceneCommon_2eproto__INCLUDED
#define PROTOBUF_SceneCommon_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace Packet {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SceneCommon_2eproto();
void protobuf_AssignDesc_SceneCommon_2eproto();
void protobuf_ShutdownFile_SceneCommon_2eproto();

class CommonRequest;
class CommonReply;
class CommonResult;

// ===================================================================

class CommonRequest : public ::google::protobuf::Message {
 public:
  CommonRequest();
  virtual ~CommonRequest();

  CommonRequest(const CommonRequest& from);

  inline CommonRequest& operator=(const CommonRequest& from) {
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
  static const CommonRequest& default_instance();

  void Swap(CommonRequest* other);

  // implements Message ----------------------------------------------

  CommonRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommonRequest& from);
  void MergeFrom(const CommonRequest& from);
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

  // required string request_name = 1;
  inline bool has_request_name() const;
  inline void clear_request_name();
  static const int kRequestNameFieldNumber = 1;
  inline const ::std::string& request_name() const;
  inline void set_request_name(const ::std::string& value);
  inline void set_request_name(const char* value);
  inline void set_request_name(const char* value, size_t size);
  inline ::std::string* mutable_request_name();
  inline ::std::string* release_request_name();
  inline void set_allocated_request_name(::std::string* request_name);

  // repeated int32 int32_params = 2;
  inline int int32_params_size() const;
  inline void clear_int32_params();
  static const int kInt32ParamsFieldNumber = 2;
  inline ::google::protobuf::int32 int32_params(int index) const;
  inline void set_int32_params(int index, ::google::protobuf::int32 value);
  inline void add_int32_params(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      int32_params() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_int32_params();

  // repeated fixed64 int64_params = 3;
  inline int int64_params_size() const;
  inline void clear_int64_params();
  static const int kInt64ParamsFieldNumber = 3;
  inline ::google::protobuf::uint64 int64_params(int index) const;
  inline void set_int64_params(int index, ::google::protobuf::uint64 value);
  inline void add_int64_params(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      int64_params() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_int64_params();

  // @@protoc_insertion_point(class_scope:Packet.CommonRequest)
 private:
  inline void set_has_request_name();
  inline void clear_has_request_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* request_name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > int32_params_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > int64_params_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_SceneCommon_2eproto();
  friend void protobuf_AssignDesc_SceneCommon_2eproto();
  friend void protobuf_ShutdownFile_SceneCommon_2eproto();

  void InitAsDefaultInstance();
  static CommonRequest* default_instance_;
};
// -------------------------------------------------------------------

class CommonReply : public ::google::protobuf::Message {
 public:
  CommonReply();
  virtual ~CommonReply();

  CommonReply(const CommonReply& from);

  inline CommonReply& operator=(const CommonReply& from) {
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
  static const CommonReply& default_instance();

  void Swap(CommonReply* other);

  // implements Message ----------------------------------------------

  CommonReply* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommonReply& from);
  void MergeFrom(const CommonReply& from);
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

  // required string reply_name = 1;
  inline bool has_reply_name() const;
  inline void clear_reply_name();
  static const int kReplyNameFieldNumber = 1;
  inline const ::std::string& reply_name() const;
  inline void set_reply_name(const ::std::string& value);
  inline void set_reply_name(const char* value);
  inline void set_reply_name(const char* value, size_t size);
  inline ::std::string* mutable_reply_name();
  inline ::std::string* release_reply_name();
  inline void set_allocated_reply_name(::std::string* reply_name);

  // repeated int32 int32_params = 2;
  inline int int32_params_size() const;
  inline void clear_int32_params();
  static const int kInt32ParamsFieldNumber = 2;
  inline ::google::protobuf::int32 int32_params(int index) const;
  inline void set_int32_params(int index, ::google::protobuf::int32 value);
  inline void add_int32_params(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      int32_params() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_int32_params();

  // repeated fixed64 int64_params = 3;
  inline int int64_params_size() const;
  inline void clear_int64_params();
  static const int kInt64ParamsFieldNumber = 3;
  inline ::google::protobuf::uint64 int64_params(int index) const;
  inline void set_int64_params(int index, ::google::protobuf::uint64 value);
  inline void add_int64_params(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      int64_params() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_int64_params();

  // repeated string string_params = 4;
  inline int string_params_size() const;
  inline void clear_string_params();
  static const int kStringParamsFieldNumber = 4;
  inline const ::std::string& string_params(int index) const;
  inline ::std::string* mutable_string_params(int index);
  inline void set_string_params(int index, const ::std::string& value);
  inline void set_string_params(int index, const char* value);
  inline void set_string_params(int index, const char* value, size_t size);
  inline ::std::string* add_string_params();
  inline void add_string_params(const ::std::string& value);
  inline void add_string_params(const char* value);
  inline void add_string_params(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& string_params() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_string_params();

  // @@protoc_insertion_point(class_scope:Packet.CommonReply)
 private:
  inline void set_has_reply_name();
  inline void clear_has_reply_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* reply_name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > int32_params_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > int64_params_;
  ::google::protobuf::RepeatedPtrField< ::std::string> string_params_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_SceneCommon_2eproto();
  friend void protobuf_AssignDesc_SceneCommon_2eproto();
  friend void protobuf_ShutdownFile_SceneCommon_2eproto();

  void InitAsDefaultInstance();
  static CommonReply* default_instance_;
};
// -------------------------------------------------------------------

class CommonResult : public ::google::protobuf::Message {
 public:
  CommonResult();
  virtual ~CommonResult();

  CommonResult(const CommonResult& from);

  inline CommonResult& operator=(const CommonResult& from) {
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
  static const CommonResult& default_instance();

  void Swap(CommonResult* other);

  // implements Message ----------------------------------------------

  CommonResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommonResult& from);
  void MergeFrom(const CommonResult& from);
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

  // required .Packet.ResultOption option = 1;
  inline bool has_option() const;
  inline void clear_option();
  static const int kOptionFieldNumber = 1;
  inline ::Packet::ResultOption option() const;
  inline void set_option(::Packet::ResultOption value);

  // required .Packet.ResultCode code = 2;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 2;
  inline ::Packet::ResultCode code() const;
  inline void set_code(::Packet::ResultCode value);

  // @@protoc_insertion_point(class_scope:Packet.CommonResult)
 private:
  inline void set_has_option();
  inline void clear_has_option();
  inline void set_has_code();
  inline void clear_has_code();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int option_;
  int code_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SceneCommon_2eproto();
  friend void protobuf_AssignDesc_SceneCommon_2eproto();
  friend void protobuf_ShutdownFile_SceneCommon_2eproto();

  void InitAsDefaultInstance();
  static CommonResult* default_instance_;
};
// ===================================================================


// ===================================================================

// CommonRequest

// required string request_name = 1;
inline bool CommonRequest::has_request_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommonRequest::set_has_request_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommonRequest::clear_has_request_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommonRequest::clear_request_name() {
  if (request_name_ != &::google::protobuf::internal::kEmptyString) {
    request_name_->clear();
  }
  clear_has_request_name();
  SetDirty();
}
inline const ::std::string& CommonRequest::request_name() const {
  return *request_name_;
}
inline void CommonRequest::set_request_name(const ::std::string& value) {
  SetDirty();
  set_has_request_name();
  if (request_name_ == &::google::protobuf::internal::kEmptyString) {
    request_name_ = new ::std::string;
  }
  request_name_->assign(value);
}
inline void CommonRequest::set_request_name(const char* value) {
  SetDirty();
  set_has_request_name();
  if (request_name_ == &::google::protobuf::internal::kEmptyString) {
    request_name_ = new ::std::string;
  }
  request_name_->assign(value);
}
inline void CommonRequest::set_request_name(const char* value, size_t size) {
  SetDirty();
  set_has_request_name();
  if (request_name_ == &::google::protobuf::internal::kEmptyString) {
    request_name_ = new ::std::string;
  }
  request_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CommonRequest::mutable_request_name() {
  SetDirty();
  set_has_request_name();
  if (request_name_ == &::google::protobuf::internal::kEmptyString) {
    request_name_ = new ::std::string;
  }
  return request_name_;
}
inline ::std::string* CommonRequest::release_request_name() {
  SetDirty();
  clear_has_request_name();
  if (request_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = request_name_;
    request_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CommonRequest::set_allocated_request_name(::std::string* request_name) {
  SetDirty();
  if (request_name_ != &::google::protobuf::internal::kEmptyString) {
    delete request_name_;
  }
  if (request_name) {
    set_has_request_name();
    request_name_ = request_name;
  } else {
    clear_has_request_name();
    request_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 int32_params = 2;
inline int CommonRequest::int32_params_size() const {
  return int32_params_.size();
}
inline void CommonRequest::clear_int32_params() {
  int32_params_.Clear();
  SetDirty();
}
inline ::google::protobuf::int32 CommonRequest::int32_params(int index) const {
  return int32_params_.Get(index);
}
inline void CommonRequest::set_int32_params(int index, ::google::protobuf::int32 value) {
  SetDirty();
  int32_params_.Set(index, value);
}
inline void CommonRequest::add_int32_params(::google::protobuf::int32 value) {
  SetDirty();
  int32_params_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CommonRequest::int32_params() const {
  return int32_params_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CommonRequest::mutable_int32_params() {
  SetDirty();
  return &int32_params_;
}

// repeated fixed64 int64_params = 3;
inline int CommonRequest::int64_params_size() const {
  return int64_params_.size();
}
inline void CommonRequest::clear_int64_params() {
  int64_params_.Clear();
  SetDirty();
}
inline ::google::protobuf::uint64 CommonRequest::int64_params(int index) const {
  return int64_params_.Get(index);
}
inline void CommonRequest::set_int64_params(int index, ::google::protobuf::uint64 value) {
  SetDirty();
  int64_params_.Set(index, value);
}
inline void CommonRequest::add_int64_params(::google::protobuf::uint64 value) {
  SetDirty();
  int64_params_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
CommonRequest::int64_params() const {
  return int64_params_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
CommonRequest::mutable_int64_params() {
  SetDirty();
  return &int64_params_;
}

// -------------------------------------------------------------------

// CommonReply

// required string reply_name = 1;
inline bool CommonReply::has_reply_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommonReply::set_has_reply_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommonReply::clear_has_reply_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommonReply::clear_reply_name() {
  if (reply_name_ != &::google::protobuf::internal::kEmptyString) {
    reply_name_->clear();
  }
  clear_has_reply_name();
  SetDirty();
}
inline const ::std::string& CommonReply::reply_name() const {
  return *reply_name_;
}
inline void CommonReply::set_reply_name(const ::std::string& value) {
  SetDirty();
  set_has_reply_name();
  if (reply_name_ == &::google::protobuf::internal::kEmptyString) {
    reply_name_ = new ::std::string;
  }
  reply_name_->assign(value);
}
inline void CommonReply::set_reply_name(const char* value) {
  SetDirty();
  set_has_reply_name();
  if (reply_name_ == &::google::protobuf::internal::kEmptyString) {
    reply_name_ = new ::std::string;
  }
  reply_name_->assign(value);
}
inline void CommonReply::set_reply_name(const char* value, size_t size) {
  SetDirty();
  set_has_reply_name();
  if (reply_name_ == &::google::protobuf::internal::kEmptyString) {
    reply_name_ = new ::std::string;
  }
  reply_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CommonReply::mutable_reply_name() {
  SetDirty();
  set_has_reply_name();
  if (reply_name_ == &::google::protobuf::internal::kEmptyString) {
    reply_name_ = new ::std::string;
  }
  return reply_name_;
}
inline ::std::string* CommonReply::release_reply_name() {
  SetDirty();
  clear_has_reply_name();
  if (reply_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reply_name_;
    reply_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CommonReply::set_allocated_reply_name(::std::string* reply_name) {
  SetDirty();
  if (reply_name_ != &::google::protobuf::internal::kEmptyString) {
    delete reply_name_;
  }
  if (reply_name) {
    set_has_reply_name();
    reply_name_ = reply_name;
  } else {
    clear_has_reply_name();
    reply_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 int32_params = 2;
inline int CommonReply::int32_params_size() const {
  return int32_params_.size();
}
inline void CommonReply::clear_int32_params() {
  int32_params_.Clear();
  SetDirty();
}
inline ::google::protobuf::int32 CommonReply::int32_params(int index) const {
  return int32_params_.Get(index);
}
inline void CommonReply::set_int32_params(int index, ::google::protobuf::int32 value) {
  SetDirty();
  int32_params_.Set(index, value);
}
inline void CommonReply::add_int32_params(::google::protobuf::int32 value) {
  SetDirty();
  int32_params_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CommonReply::int32_params() const {
  return int32_params_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CommonReply::mutable_int32_params() {
  SetDirty();
  return &int32_params_;
}

// repeated fixed64 int64_params = 3;
inline int CommonReply::int64_params_size() const {
  return int64_params_.size();
}
inline void CommonReply::clear_int64_params() {
  int64_params_.Clear();
  SetDirty();
}
inline ::google::protobuf::uint64 CommonReply::int64_params(int index) const {
  return int64_params_.Get(index);
}
inline void CommonReply::set_int64_params(int index, ::google::protobuf::uint64 value) {
  SetDirty();
  int64_params_.Set(index, value);
}
inline void CommonReply::add_int64_params(::google::protobuf::uint64 value) {
  SetDirty();
  int64_params_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
CommonReply::int64_params() const {
  return int64_params_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
CommonReply::mutable_int64_params() {
  SetDirty();
  return &int64_params_;
}

// repeated string string_params = 4;
inline int CommonReply::string_params_size() const {
  return string_params_.size();
}
inline void CommonReply::clear_string_params() {
  string_params_.Clear();
  SetDirty();
}
inline const ::std::string& CommonReply::string_params(int index) const {
  return string_params_.Get(index);
}
inline ::std::string* CommonReply::mutable_string_params(int index) {
  SetDirty();
  return string_params_.Mutable(index);
}
inline void CommonReply::set_string_params(int index, const ::std::string& value) {
  SetDirty();
  string_params_.Mutable(index)->assign(value);
}
inline void CommonReply::set_string_params(int index, const char* value) {
  SetDirty();
  string_params_.Mutable(index)->assign(value);
}
inline void CommonReply::set_string_params(int index, const char* value, size_t size) {
  SetDirty();
  string_params_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CommonReply::add_string_params() {
  SetDirty();
  return string_params_.Add();
}
inline void CommonReply::add_string_params(const ::std::string& value) {
  SetDirty();
  string_params_.Add()->assign(value);
}
inline void CommonReply::add_string_params(const char* value) {
  SetDirty();
  string_params_.Add()->assign(value);
}
inline void CommonReply::add_string_params(const char* value, size_t size) {
  SetDirty();
  string_params_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CommonReply::string_params() const {
  return string_params_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CommonReply::mutable_string_params() {
  SetDirty();
  return &string_params_;
}

// -------------------------------------------------------------------

// CommonResult

// required .Packet.ResultOption option = 1;
inline bool CommonResult::has_option() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommonResult::set_has_option() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommonResult::clear_has_option() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommonResult::clear_option() {
  option_ = -1;
  clear_has_option();
  SetDirty();
}
inline ::Packet::ResultOption CommonResult::option() const {
  return static_cast< ::Packet::ResultOption >(option_);
}
inline void CommonResult::set_option(::Packet::ResultOption value) {
  assert(::Packet::ResultOption_IsValid(value));
  SetDirty();
  set_has_option();
  option_ = value;
}

// required .Packet.ResultCode code = 2;
inline bool CommonResult::has_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CommonResult::set_has_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CommonResult::clear_has_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CommonResult::clear_code() {
  code_ = -1;
  clear_has_code();
  SetDirty();
}
inline ::Packet::ResultCode CommonResult::code() const {
  return static_cast< ::Packet::ResultCode >(code_);
}
inline void CommonResult::set_code(::Packet::ResultCode value) {
  assert(::Packet::ResultCode_IsValid(value));
  SetDirty();
  set_has_code();
  code_ = value;
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

#endif  // PROTOBUF_SceneCommon_2eproto__INCLUDED
