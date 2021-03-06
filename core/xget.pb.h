// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: xget.proto

#ifndef PROTOBUF_xget_2eproto__INCLUDED
#define PROTOBUF_xget_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_xget_2eproto();
void protobuf_AssignDesc_xget_2eproto();
void protobuf_ShutdownFile_xget_2eproto();

class GetServerListRequest;
class GetServerListResponse;
class AvailableServer;
class RegisterRequest;
class RegisterResponse;
class DownloadRequest;

// ===================================================================

class GetServerListRequest : public ::google::protobuf::Message {
 public:
  GetServerListRequest();
  virtual ~GetServerListRequest();

  GetServerListRequest(const GetServerListRequest& from);

  inline GetServerListRequest& operator=(const GetServerListRequest& from) {
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
  static const GetServerListRequest& default_instance();

  void Swap(GetServerListRequest* other);

  // implements Message ----------------------------------------------

  GetServerListRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetServerListRequest& from);
  void MergeFrom(const GetServerListRequest& from);
  void Clear();
  bool IsInitialized() const;

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

  // required int32 Id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GetServerListRequest)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static GetServerListRequest* default_instance_;
};
// -------------------------------------------------------------------

class GetServerListResponse : public ::google::protobuf::Message {
 public:
  GetServerListResponse();
  virtual ~GetServerListResponse();

  GetServerListResponse(const GetServerListResponse& from);

  inline GetServerListResponse& operator=(const GetServerListResponse& from) {
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
  static const GetServerListResponse& default_instance();

  void Swap(GetServerListResponse* other);

  // implements Message ----------------------------------------------

  GetServerListResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetServerListResponse& from);
  void MergeFrom(const GetServerListResponse& from);
  void Clear();
  bool IsInitialized() const;

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

  // required int32 Id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated .AvailableServer ServerList = 2;
  inline int serverlist_size() const;
  inline void clear_serverlist();
  static const int kServerListFieldNumber = 2;
  inline const ::AvailableServer& serverlist(int index) const;
  inline ::AvailableServer* mutable_serverlist(int index);
  inline ::AvailableServer* add_serverlist();
  inline const ::google::protobuf::RepeatedPtrField< ::AvailableServer >&
      serverlist() const;
  inline ::google::protobuf::RepeatedPtrField< ::AvailableServer >*
      mutable_serverlist();

  // @@protoc_insertion_point(class_scope:GetServerListResponse)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::AvailableServer > serverlist_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static GetServerListResponse* default_instance_;
};
// -------------------------------------------------------------------

class AvailableServer : public ::google::protobuf::Message {
 public:
  AvailableServer();
  virtual ~AvailableServer();

  AvailableServer(const AvailableServer& from);

  inline AvailableServer& operator=(const AvailableServer& from) {
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
  static const AvailableServer& default_instance();

  void Swap(AvailableServer* other);

  // implements Message ----------------------------------------------

  AvailableServer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AvailableServer& from);
  void MergeFrom(const AvailableServer& from);
  void Clear();
  bool IsInitialized() const;

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

  // required string Ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // required int32 Port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:AvailableServer)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* ip_;
  ::google::protobuf::int32 port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static AvailableServer* default_instance_;
};
// -------------------------------------------------------------------

class RegisterRequest : public ::google::protobuf::Message {
 public:
  RegisterRequest();
  virtual ~RegisterRequest();

  RegisterRequest(const RegisterRequest& from);

  inline RegisterRequest& operator=(const RegisterRequest& from) {
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
  static const RegisterRequest& default_instance();

  void Swap(RegisterRequest* other);

  // implements Message ----------------------------------------------

  RegisterRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RegisterRequest& from);
  void MergeFrom(const RegisterRequest& from);
  void Clear();
  bool IsInitialized() const;

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

  // required string Ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // required int32 Port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:RegisterRequest)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* ip_;
  ::google::protobuf::int32 port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static RegisterRequest* default_instance_;
};
// -------------------------------------------------------------------

class RegisterResponse : public ::google::protobuf::Message {
 public:
  RegisterResponse();
  virtual ~RegisterResponse();

  RegisterResponse(const RegisterResponse& from);

  inline RegisterResponse& operator=(const RegisterResponse& from) {
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
  static const RegisterResponse& default_instance();

  void Swap(RegisterResponse* other);

  // implements Message ----------------------------------------------

  RegisterResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RegisterResponse& from);
  void MergeFrom(const RegisterResponse& from);
  void Clear();
  bool IsInitialized() const;

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

  // required int32 Status = 1;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 1;
  inline ::google::protobuf::int32 status() const;
  inline void set_status(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:RegisterResponse)
 private:
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static RegisterResponse* default_instance_;
};
// -------------------------------------------------------------------

class DownloadRequest : public ::google::protobuf::Message {
 public:
  DownloadRequest();
  virtual ~DownloadRequest();

  DownloadRequest(const DownloadRequest& from);

  inline DownloadRequest& operator=(const DownloadRequest& from) {
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
  static const DownloadRequest& default_instance();

  void Swap(DownloadRequest* other);

  // implements Message ----------------------------------------------

  DownloadRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DownloadRequest& from);
  void MergeFrom(const DownloadRequest& from);
  void Clear();
  bool IsInitialized() const;

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

  // required string Ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // required int32 Port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::int32 port() const;
  inline void set_port(::google::protobuf::int32 value);

  // required string Location = 3;
  inline bool has_location() const;
  inline void clear_location();
  static const int kLocationFieldNumber = 3;
  inline const ::std::string& location() const;
  inline void set_location(const ::std::string& value);
  inline void set_location(const char* value);
  inline void set_location(const char* value, size_t size);
  inline ::std::string* mutable_location();
  inline ::std::string* release_location();
  inline void set_allocated_location(::std::string* location);

  // required string Range = 4;
  inline bool has_range() const;
  inline void clear_range();
  static const int kRangeFieldNumber = 4;
  inline const ::std::string& range() const;
  inline void set_range(const ::std::string& value);
  inline void set_range(const char* value);
  inline void set_range(const char* value, size_t size);
  inline ::std::string* mutable_range();
  inline ::std::string* release_range();
  inline void set_allocated_range(::std::string* range);

  // @@protoc_insertion_point(class_scope:DownloadRequest)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_location();
  inline void clear_has_location();
  inline void set_has_range();
  inline void clear_has_range();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* ip_;
  ::std::string* location_;
  ::std::string* range_;
  ::google::protobuf::int32 port_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_xget_2eproto();
  friend void protobuf_AssignDesc_xget_2eproto();
  friend void protobuf_ShutdownFile_xget_2eproto();

  void InitAsDefaultInstance();
  static DownloadRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// GetServerListRequest

// required int32 Id = 1;
inline bool GetServerListRequest::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetServerListRequest::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetServerListRequest::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetServerListRequest::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 GetServerListRequest::id() const {
  return id_;
}
inline void GetServerListRequest::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// -------------------------------------------------------------------

// GetServerListResponse

// required int32 Id = 1;
inline bool GetServerListResponse::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetServerListResponse::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetServerListResponse::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetServerListResponse::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 GetServerListResponse::id() const {
  return id_;
}
inline void GetServerListResponse::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated .AvailableServer ServerList = 2;
inline int GetServerListResponse::serverlist_size() const {
  return serverlist_.size();
}
inline void GetServerListResponse::clear_serverlist() {
  serverlist_.Clear();
}
inline const ::AvailableServer& GetServerListResponse::serverlist(int index) const {
  return serverlist_.Get(index);
}
inline ::AvailableServer* GetServerListResponse::mutable_serverlist(int index) {
  return serverlist_.Mutable(index);
}
inline ::AvailableServer* GetServerListResponse::add_serverlist() {
  return serverlist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::AvailableServer >&
GetServerListResponse::serverlist() const {
  return serverlist_;
}
inline ::google::protobuf::RepeatedPtrField< ::AvailableServer >*
GetServerListResponse::mutable_serverlist() {
  return &serverlist_;
}

// -------------------------------------------------------------------

// AvailableServer

// required string Ip = 1;
inline bool AvailableServer::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AvailableServer::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AvailableServer::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AvailableServer::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& AvailableServer::ip() const {
  return *ip_;
}
inline void AvailableServer::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void AvailableServer::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void AvailableServer::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* AvailableServer::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* AvailableServer::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void AvailableServer::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 Port = 2;
inline bool AvailableServer::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AvailableServer::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AvailableServer::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AvailableServer::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 AvailableServer::port() const {
  return port_;
}
inline void AvailableServer::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// -------------------------------------------------------------------

// RegisterRequest

// required string Ip = 1;
inline bool RegisterRequest::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RegisterRequest::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RegisterRequest::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RegisterRequest::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& RegisterRequest::ip() const {
  return *ip_;
}
inline void RegisterRequest::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void RegisterRequest::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void RegisterRequest::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RegisterRequest::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* RegisterRequest::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void RegisterRequest::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 Port = 2;
inline bool RegisterRequest::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RegisterRequest::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RegisterRequest::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RegisterRequest::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 RegisterRequest::port() const {
  return port_;
}
inline void RegisterRequest::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// -------------------------------------------------------------------

// RegisterResponse

// required int32 Status = 1;
inline bool RegisterResponse::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RegisterResponse::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RegisterResponse::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RegisterResponse::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 RegisterResponse::status() const {
  return status_;
}
inline void RegisterResponse::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
}

// -------------------------------------------------------------------

// DownloadRequest

// required string Ip = 1;
inline bool DownloadRequest::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DownloadRequest::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DownloadRequest::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DownloadRequest::clear_ip() {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& DownloadRequest::ip() const {
  return *ip_;
}
inline void DownloadRequest::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void DownloadRequest::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
}
inline void DownloadRequest::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DownloadRequest::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    ip_ = new ::std::string;
  }
  return ip_;
}
inline ::std::string* DownloadRequest::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DownloadRequest::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::kEmptyString) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 Port = 2;
inline bool DownloadRequest::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DownloadRequest::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DownloadRequest::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DownloadRequest::clear_port() {
  port_ = 0;
  clear_has_port();
}
inline ::google::protobuf::int32 DownloadRequest::port() const {
  return port_;
}
inline void DownloadRequest::set_port(::google::protobuf::int32 value) {
  set_has_port();
  port_ = value;
}

// required string Location = 3;
inline bool DownloadRequest::has_location() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DownloadRequest::set_has_location() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DownloadRequest::clear_has_location() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DownloadRequest::clear_location() {
  if (location_ != &::google::protobuf::internal::kEmptyString) {
    location_->clear();
  }
  clear_has_location();
}
inline const ::std::string& DownloadRequest::location() const {
  return *location_;
}
inline void DownloadRequest::set_location(const ::std::string& value) {
  set_has_location();
  if (location_ == &::google::protobuf::internal::kEmptyString) {
    location_ = new ::std::string;
  }
  location_->assign(value);
}
inline void DownloadRequest::set_location(const char* value) {
  set_has_location();
  if (location_ == &::google::protobuf::internal::kEmptyString) {
    location_ = new ::std::string;
  }
  location_->assign(value);
}
inline void DownloadRequest::set_location(const char* value, size_t size) {
  set_has_location();
  if (location_ == &::google::protobuf::internal::kEmptyString) {
    location_ = new ::std::string;
  }
  location_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DownloadRequest::mutable_location() {
  set_has_location();
  if (location_ == &::google::protobuf::internal::kEmptyString) {
    location_ = new ::std::string;
  }
  return location_;
}
inline ::std::string* DownloadRequest::release_location() {
  clear_has_location();
  if (location_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = location_;
    location_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DownloadRequest::set_allocated_location(::std::string* location) {
  if (location_ != &::google::protobuf::internal::kEmptyString) {
    delete location_;
  }
  if (location) {
    set_has_location();
    location_ = location;
  } else {
    clear_has_location();
    location_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string Range = 4;
inline bool DownloadRequest::has_range() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DownloadRequest::set_has_range() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DownloadRequest::clear_has_range() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DownloadRequest::clear_range() {
  if (range_ != &::google::protobuf::internal::kEmptyString) {
    range_->clear();
  }
  clear_has_range();
}
inline const ::std::string& DownloadRequest::range() const {
  return *range_;
}
inline void DownloadRequest::set_range(const ::std::string& value) {
  set_has_range();
  if (range_ == &::google::protobuf::internal::kEmptyString) {
    range_ = new ::std::string;
  }
  range_->assign(value);
}
inline void DownloadRequest::set_range(const char* value) {
  set_has_range();
  if (range_ == &::google::protobuf::internal::kEmptyString) {
    range_ = new ::std::string;
  }
  range_->assign(value);
}
inline void DownloadRequest::set_range(const char* value, size_t size) {
  set_has_range();
  if (range_ == &::google::protobuf::internal::kEmptyString) {
    range_ = new ::std::string;
  }
  range_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DownloadRequest::mutable_range() {
  set_has_range();
  if (range_ == &::google::protobuf::internal::kEmptyString) {
    range_ = new ::std::string;
  }
  return range_;
}
inline ::std::string* DownloadRequest::release_range() {
  clear_has_range();
  if (range_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = range_;
    range_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DownloadRequest::set_allocated_range(::std::string* range) {
  if (range_ != &::google::protobuf::internal::kEmptyString) {
    delete range_;
  }
  if (range) {
    set_has_range();
    range_ = range;
  } else {
    clear_has_range();
    range_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_xget_2eproto__INCLUDED
