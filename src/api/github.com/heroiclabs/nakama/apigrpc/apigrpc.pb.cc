// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: github.com/heroiclabs/nakama/apigrpc/apigrpc.proto

#include "github.com/heroiclabs/nakama/apigrpc/apigrpc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace nakama {
namespace api {
}  // namespace api
}  // namespace nakama
namespace protobuf_github_2ecom_2fheroiclabs_2fnakama_2fapigrpc_2fapigrpc_2eproto {
void InitDefaults() {
}

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "github.com/heroiclabs/nakama/apigrpc/apigrpc.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n2github.com/heroiclabs/nakama/apigrpc/a"
      "pigrpc.proto\022\nnakama.api\032\034google/api/ann"
      "otations.proto\032\033google/protobuf/empty.pr"
      "oto\032,protoc-gen-swagger/options/annotati"
      "ons.proto\032*github.com/heroiclabs/nakama/"
      "api/api.proto2\2736\n\006Nakama\022W\n\nAddFriends\022\035"
      ".nakama.api.AddFriendsRequest\032\026.google.p"
      "rotobuf.Empty\"\022\202\323\344\223\002\014\"\n/v2/friend\022k\n\rAdd"
      "GroupUsers\022 .nakama.api.AddGroupUsersReq"
      "uest\032\026.google.protobuf.Empty\" \202\323\344\223\002\032\"\030/v"
      "2/group/{group_id}/add\022\226\001\n\022AuthenticateC"
      "ustom\022%.nakama.api.AuthenticateCustomReq"
      "uest\032\023.nakama.api.Session\"D\202\323\344\223\002*\"\037/v2/a"
      "ccount/authenticate/custom:\007account\222A\021b\017"
      "\n\r\n\tBasicAuth\022\000\022\226\001\n\022AuthenticateDevice\022%"
      ".nakama.api.AuthenticateDeviceRequest\032\023."
      "nakama.api.Session\"D\202\323\344\223\002*\"\037/v2/account/"
      "authenticate/device:\007account\222A\021b\017\n\r\n\tBas"
      "icAuth\022\000\022\223\001\n\021AuthenticateEmail\022$.nakama."
      "api.AuthenticateEmailRequest\032\023.nakama.ap"
      "i.Session\"C\202\323\344\223\002)\"\036/v2/account/authentic"
      "ate/email:\007account\222A\021b\017\n\r\n\tBasicAuth\022\000\022\234"
      "\001\n\024AuthenticateFacebook\022\'.nakama.api.Aut"
      "henticateFacebookRequest\032\023.nakama.api.Se"
      "ssion\"F\202\323\344\223\002,\"!/v2/account/authenticate/"
      "facebook:\007account\222A\021b\017\n\r\n\tBasicAuth\022\000\022\242\001"
      "\n\026AuthenticateGameCenter\022).nakama.api.Au"
      "thenticateGameCenterRequest\032\023.nakama.api"
      ".Session\"H\202\323\344\223\002.\"#/v2/account/authentica"
      "te/gamecenter:\007account\222A\021b\017\n\r\n\tBasicAuth"
      "\022\000\022\226\001\n\022AuthenticateGoogle\022%.nakama.api.A"
      "uthenticateGoogleRequest\032\023.nakama.api.Se"
      "ssion\"D\202\323\344\223\002*\"\037/v2/account/authenticate/"
      "google:\007account\222A\021b\017\n\r\n\tBasicAuth\022\000\022\223\001\n\021"
      "AuthenticateSteam\022$.nakama.api.Authentic"
      "ateSteamRequest\032\023.nakama.api.Session\"C\202\323"
      "\344\223\002)\"\036/v2/account/authenticate/steam:\007ac"
      "count\222A\021b\017\n\r\n\tBasicAuth\022\000\022a\n\014BlockFriend"
      "s\022\037.nakama.api.BlockFriendsRequest\032\026.goo"
      "gle.protobuf.Empty\"\030\202\323\344\223\002\022\"\020/v2/friend/b"
      "lock\022V\n\013CreateGroup\022\036.nakama.api.CreateG"
      "roupRequest\032\021.nakama.api.Group\"\024\202\323\344\223\002\016\"\t"
      "/v2/group:\001*\022]\n\rDeleteFriends\022 .nakama.a"
      "pi.DeleteFriendsRequest\032\026.google.protobu"
      "f.Empty\"\022\202\323\344\223\002\014*\n/v2/friend\022c\n\013DeleteGro"
      "up\022\036.nakama.api.DeleteGroupRequest\032\026.goo"
      "gle.protobuf.Empty\"\034\202\323\344\223\002\026*\024/v2/group/{g"
      "roup_id}\022\207\001\n\027DeleteLeaderboardRecord\022*.n"
      "akama.api.DeleteLeaderboardRecordRequest"
      "\032\026.google.protobuf.Empty\"(\202\323\344\223\002\"* /v2/le"
      "aderboard/{leaderboard_id}\022o\n\023DeleteNoti"
      "fications\022&.nakama.api.DeleteNotificatio"
      "nsRequest\032\026.google.protobuf.Empty\"\030\202\323\344\223\002"
      "\022*\020/v2/notification\022v\n\024DeleteStorageObje"
      "cts\022\'.nakama.api.DeleteStorageObjectsReq"
      "uest\032\026.google.protobuf.Empty\"\035\202\323\344\223\002\027\032\022/v"
      "2/storage/delete:\001*\022N\n\nGetAccount\022\026.goog"
      "le.protobuf.Empty\032\023.nakama.api.Account\"\023"
      "\202\323\344\223\002\r\022\013/v2/account\022L\n\010GetUsers\022\033.nakama"
      ".api.GetUsersRequest\032\021.nakama.api.Users\""
      "\020\202\323\344\223\002\n\022\010/v2/user\022S\n\013Healthcheck\022\026.googl"
      "e.protobuf.Empty\032\026.google.protobuf.Empty"
      "\"\024\202\323\344\223\002\016\022\014/healthcheck\022\177\n\025ImportFacebook"
      "Friends\022(.nakama.api.ImportFacebookFrien"
      "dsRequest\032\026.google.protobuf.Empty\"$\202\323\344\223\002"
      "\036\"\023/v2/friend/facebook:\007account\022d\n\tJoinG"
      "roup\022\034.nakama.api.JoinGroupRequest\032\026.goo"
      "gle.protobuf.Empty\"!\202\323\344\223\002\033\"\031/v2/group/{g"
      "roup_id}/join\022x\n\016JoinTournament\022!.nakama"
      ".api.JoinTournamentRequest\032\026.google.prot"
      "obuf.Empty\"+\202\323\344\223\002%\"#/v2/tournament/{tour"
      "nament_id}/join\022n\n\016KickGroupUsers\022!.naka"
      "ma.api.KickGroupUsersRequest\032\026.google.pr"
      "otobuf.Empty\"!\202\323\344\223\002\033\"\031/v2/group/{group_i"
      "d}/kick\022g\n\nLeaveGroup\022\035.nakama.api.Leave"
      "GroupRequest\032\026.google.protobuf.Empty\"\"\202\323"
      "\344\223\002\034\"\032/v2/group/{group_id}/leave\022c\n\nLink"
      "Custom\022\031.nakama.api.AccountCustom\032\026.goog"
      "le.protobuf.Empty\"\"\202\323\344\223\002\034\"\027/v2/account/l"
      "ink/custom:\001*\022c\n\nLinkDevice\022\031.nakama.api"
      ".AccountDevice\032\026.google.protobuf.Empty\"\""
      "\202\323\344\223\002\034\"\027/v2/account/link/device:\001*\022`\n\tLi"
      "nkEmail\022\030.nakama.api.AccountEmail\032\026.goog"
      "le.protobuf.Empty\"!\202\323\344\223\002\033\"\026/v2/account/l"
      "ink/email:\001*\022s\n\014LinkFacebook\022\037.nakama.ap"
      "i.LinkFacebookRequest\032\026.google.protobuf."
      "Empty\"*\202\323\344\223\002$\"\031/v2/account/link/facebook"
      ":\007account\022o\n\016LinkGameCenter\022\035.nakama.api"
      ".AccountGameCenter\032\026.google.protobuf.Emp"
      "ty\"&\202\323\344\223\002 \"\033/v2/account/link/gamecenter:"
      "\001*\022c\n\nLinkGoogle\022\031.nakama.api.AccountGoo"
      "gle\032\026.google.protobuf.Empty\"\"\202\323\344\223\002\034\"\027/v2"
      "/account/link/google:\001*\022`\n\tLinkSteam\022\030.n"
      "akama.api.AccountSteam\032\026.google.protobuf"
      ".Empty\"!\202\323\344\223\002\033\"\026/v2/account/link/steam:\001"
      "*\022\177\n\023ListChannelMessages\022&.nakama.api.Li"
      "stChannelMessagesRequest\032\036.nakama.api.Ch"
      "annelMessageList\" \202\323\344\223\002\032\022\030/v2/channel/{c"
      "hannel_id}\022N\n\013ListFriends\022\026.google.proto"
      "buf.Empty\032\023.nakama.api.Friends\"\022\202\323\344\223\002\014\022\n"
      "/v2/friend\022U\n\nListGroups\022\035.nakama.api.Li"
      "stGroupsRequest\032\025.nakama.api.GroupList\"\021"
      "\202\323\344\223\002\013\022\t/v2/group\022q\n\016ListGroupUsers\022!.na"
      "kama.api.ListGroupUsersRequest\032\031.nakama."
      "api.GroupUserList\"!\202\323\344\223\002\033\022\031/v2/group/{gr"
      "oup_id}/user\022\220\001\n\026ListLeaderboardRecords\022"
      ").nakama.api.ListLeaderboardRecordsReque"
      "st\032!.nakama.api.LeaderboardRecordList\"(\202"
      "\323\344\223\002\"\022 /v2/leaderboard/{leaderboard_id}\022"
      "\267\001\n!ListLeaderboardRecordsAroundOwner\0224."
      "nakama.api.ListLeaderboardRecordsAroundO"
      "wnerRequest\032!.nakama.api.LeaderboardReco"
      "rdList\"9\202\323\344\223\0023\0221/v2/leaderboard/{leaderb"
      "oard_id}/owner/{owner_id}\022W\n\013ListMatches"
      "\022\036.nakama.api.ListMatchesRequest\032\025.nakam"
      "a.api.MatchList\"\021\202\323\344\223\002\013\022\t/v2/match\022q\n\021Li"
      "stNotifications\022$.nakama.api.ListNotific"
      "ationsRequest\032\034.nakama.api.NotificationL"
      "ist\"\030\202\323\344\223\002\022\022\020/v2/notification\022\242\001\n\022ListSt"
      "orageObjects\022%.nakama.api.ListStorageObj"
      "ectsRequest\032\035.nakama.api.StorageObjectLi"
      "st\"F\202\323\344\223\002@\022\030/v2/storage/{collection}Z$\022\""
      "/v2/storage/{collection}/{user_id}\022i\n\017Li"
      "stTournaments\022\".nakama.api.ListTournamen"
      "tsRequest\032\032.nakama.api.TournamentList\"\026\202"
      "\323\344\223\002\020\022\016/v2/tournament\022\213\001\n\025ListTournament"
      "Records\022(.nakama.api.ListTournamentRecor"
      "dsRequest\032 .nakama.api.TournamentRecordL"
      "ist\"&\202\323\344\223\002 \022\036/v2/tournament/{tournament_"
      "id}\022\262\001\n ListTournamentRecordsAroundOwner"
      "\0223.nakama.api.ListTournamentRecordsAroun"
      "dOwnerRequest\032 .nakama.api.TournamentRec"
      "ordList\"7\202\323\344\223\0021\022//v2/tournament/{tournam"
      "ent_id}/owner/{owner_id}\022p\n\016ListUserGrou"
      "ps\022!.nakama.api.ListUserGroupsRequest\032\031."
      "nakama.api.UserGroupList\" \202\323\344\223\002\032\022\030/v2/us"
      "er/{user_id}/group\022w\n\021PromoteGroupUsers\022"
      "$.nakama.api.PromoteGroupUsersRequest\032\026."
      "google.protobuf.Empty\"$\202\323\344\223\002\036\"\034/v2/group"
      "/{group_id}/promote\022o\n\022ReadStorageObject"
      "s\022%.nakama.api.ReadStorageObjectsRequest"
      "\032\032.nakama.api.StorageObjects\"\026\202\323\344\223\002\020\"\013/v"
      "2/storage:\001*\022\177\n\007RpcFunc\022\017.nakama.api.Rpc"
      "\032\017.nakama.api.Rpc\"R\202\323\344\223\002\'\"\014/v2/rpc/{id}:"
      "\007payloadZ\016\022\014/v2/rpc/{id}\222A\"b \n\017\n\013HttpKey"
      "Auth\022\000\n\r\n\tBearerJwt\022\000\022g\n\014UnlinkCustom\022\031."
      "nakama.api.AccountCustom\032\026.google.protob"
      "uf.Empty\"$\202\323\344\223\002\036\"\031/v2/account/unlink/cus"
      "tom:\001*\022g\n\014UnlinkDevice\022\031.nakama.api.Acco"
      "untDevice\032\026.google.protobuf.Empty\"$\202\323\344\223\002"
      "\036\"\031/v2/account/unlink/device:\001*\022d\n\013Unlin"
      "kEmail\022\030.nakama.api.AccountEmail\032\026.googl"
      "e.protobuf.Empty\"#\202\323\344\223\002\035\"\030/v2/account/un"
      "link/email:\001*\022m\n\016UnlinkFacebook\022\033.nakama"
      ".api.AccountFacebook\032\026.google.protobuf.E"
      "mpty\"&\202\323\344\223\002 \"\033/v2/account/unlink/faceboo"
      "k:\001*\022s\n\020UnlinkGameCenter\022\035.nakama.api.Ac"
      "countGameCenter\032\026.google.protobuf.Empty\""
      "(\202\323\344\223\002\"\"\035/v2/account/unlink/gamecenter:\001"
      "*\022g\n\014UnlinkGoogle\022\031.nakama.api.AccountGo"
      "ogle\032\026.google.protobuf.Empty\"$\202\323\344\223\002\036\"\031/v"
      "2/account/unlink/google:\001*\022d\n\013UnlinkStea"
      "m\022\030.nakama.api.AccountSteam\032\026.google.pro"
      "tobuf.Empty\"#\202\323\344\223\002\035\"\030/v2/account/unlink/"
      "steam:\001*\022a\n\rUpdateAccount\022 .nakama.api.U"
      "pdateAccountRequest\032\026.google.protobuf.Em"
      "pty\"\026\202\323\344\223\002\020\032\013/v2/account:\001*\022f\n\013UpdateGro"
      "up\022\036.nakama.api.UpdateGroupRequest\032\026.goo"
      "gle.protobuf.Empty\"\037\202\323\344\223\002\031\032\024/v2/group/{g"
      "roup_id}:\001*\022\224\001\n\026WriteLeaderboardRecord\022)"
      ".nakama.api.WriteLeaderboardRecordReques"
      "t\032\035.nakama.api.LeaderboardRecord\"0\202\323\344\223\002*"
      "\" /v2/leaderboard/{leaderboard_id}:\006reco"
      "rd\022t\n\023WriteStorageObjects\022&.nakama.api.W"
      "riteStorageObjectsRequest\032\035.nakama.api.S"
      "torageObjectAcks\"\026\202\323\344\223\002\020\032\013/v2/storage:\001*"
      "\022\220\001\n\025WriteTournamentRecord\022(.nakama.api."
      "WriteTournamentRecordRequest\032\035.nakama.ap"
      "i.LeaderboardRecord\".\202\323\344\223\002(\032\036/v2/tournam"
      "ent/{tournament_id}:\006recordB\205\003\n\031com.hero"
      "iclabs.nakama.apiB\rNakamaApiGrpcP\001Z\007apig"
      "rpc\242\002\004NKPB\252\002\006Nakama\222A\274\002\022u\n\rNakama API v2"
      "\"_\n!The Nakama Authors & Contributors\022$h"
      "ttps://github.com/heroiclabs/nakama\032\024hel"
      "lo@heroiclabs.com2\0032.0\032\016127.0.0.1:7350*\001"
      "\0012\020application/json:\020application/jsonZ\?\n"
      "\017\n\tBasicAuth\022\002\010\001\n\r\n\tBearerJwt\022\000\n\035\n\013HttpK"
      "eyAuth\022\016\010\002\032\010http_key \002b\017\n\r\n\tBearerJwt\022\000r"
      ":\n\033Nakama server documentation\022\033https://"
      "heroiclabs.com/docsb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 7587);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "github.com/heroiclabs/nakama/apigrpc/apigrpc.proto", &protobuf_RegisterTypes);
  ::protobuf_annotations_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fempty_2eproto::AddDescriptors();
  ::protobuf_protoc_2dgen_2dswagger_2foptions_2fannotations_2eproto::AddDescriptors();
  ::protobuf_github_2ecom_2fheroiclabs_2fnakama_2fapi_2fapi_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_github_2ecom_2fheroiclabs_2fnakama_2fapigrpc_2fapigrpc_2eproto
namespace nakama {
namespace api {

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace nakama
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)