// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CNormalGuildBattleGuild.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace info
        {
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin2_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*);
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin2_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, GUILD_BATTLE__CNormalGuildBattleGuildAskJoin2_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin4_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin4_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildAskJoin4_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin6_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildAskJoin6_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildAskJoin6_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildctor_CNormalGuildBattleGuild8_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
            using GUILD_BATTLE__CNormalGuildBattleGuildctor_CNormalGuildBattleGuild8_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char, GUILD_BATTLE__CNormalGuildBattleGuildctor_CNormalGuildBattleGuild8_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildCleanUpBattle10_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildCleanUpBattle10_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildCleanUpBattle10_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildClear12_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildClear12_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildClear12_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildClearInBattleState14_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildClearInBattleState14_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildClearInBattleState14_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildDecPvpPoint16_ptr = long double (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildDecPvpPoint16_clbk = long double (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildDecPvpPoint16_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetANSIGuildName18_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetANSIGuildName18_clbk = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetANSIGuildName18_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetColorInx20_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetColorInx20_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetColorInx20_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetColorName22_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetColorName22_clbk = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetColorName22_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetEmptyMember24_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetEmptyMember24_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetEmptyMember24_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGoalCnt26_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGoalCnt26_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetGoalCnt26_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuild28_ptr = struct CGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuild28_clbk = struct CGuild* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetGuild28_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildName30_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildName30_clbk = char* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetGuildName30_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildRace32_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildRace32_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetGuildRace32_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildSerial34_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetGuildSerial34_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetGuildSerial34_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetJoinMemberCnt36_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetJoinMemberCnt36_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetJoinMemberCnt36_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetKillCountSum38_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetKillCountSum38_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetKillCountSum38_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMaxJoinMemberCount40_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMaxJoinMemberCount40_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetMaxJoinMemberCount40_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMember42_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMember42_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildGetMember42_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPlayer44_ptr = struct CPlayer* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPlayer44_clbk = struct CPlayer* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPlayer44_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPtr46_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPtr46_clbk = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildGetMemberPtr46_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetScore48_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetScore48_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetScore48_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetTopGoalMember50_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetTopGoalMember50_clbk = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetTopGoalMember50_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetTopKillMember52_ptr = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGetTopKillMember52_clbk = struct GUILD_BATTLE::CNormalGuildBattleGuildMember* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildGetTopKillMember52_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildGoal54_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
            using GUILD_BATTLE__CNormalGuildBattleGuildGoal54_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, GUILD_BATTLE__CNormalGuildBattleGuildGoal54_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildIncPvpPoint56_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, long double, char, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildIncPvpPoint56_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, long double, char, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildIncPvpPoint56_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsJoinMember58_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsJoinMember58_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildIsJoinMember58_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsMember60_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsMember60_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildIsMember60_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsReStart62_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildIsReStart62_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildIsReStart62_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildJoin64_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, char, int*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildJoin64_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, char, int*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildJoin64_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildKill66_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*);
            using GUILD_BATTLE__CNormalGuildBattleGuildKill66_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, struct GUILD_BATTLE::CNormalGuildBattleGuildMember*, GUILD_BATTLE__CNormalGuildBattleGuildKill66_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildLeaveGuild68_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, bool, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildLeaveGuild68_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, bool, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildLeaveGuild68_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildLogIn70_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildLogIn70_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, char, char*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildLogIn70_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildMoveMap72_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*);
            using GUILD_BATTLE__CNormalGuildBattleGuildMoveMap72_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, GUILD_BATTLE__CNormalGuildBattleGuildMoveMap72_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildMoveMember74_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildMoveMember74_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleField*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildMoveMember74_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildNetClose76_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildNetClose76_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, bool, unsigned int, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildNetClose76_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildNotifyLeftMinuteBeforeStart78_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
            using GUILD_BATTLE__CNormalGuildBattleGuildNotifyLeftMinuteBeforeStart78_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char, GUILD_BATTLE__CNormalGuildBattleGuildNotifyLeftMinuteBeforeStart78_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnBindPosAll80_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnBindPosAll80_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildReturnBindPosAll80_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnHQPosAll82_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnHQPosAll82_clbk = char (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildReturnHQPosAll82_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnStartPosAll84_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleField*);
            using GUILD_BATTLE__CNormalGuildBattleGuildReturnStartPosAll84_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleField*, GUILD_BATTLE__CNormalGuildBattleGuildReturnStartPosAll84_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildRewardItem86_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*);
            using GUILD_BATTLE__CNormalGuildBattleGuildRewardItem86_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleLogger*, GUILD_BATTLE__CNormalGuildBattleGuildRewardItem86_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendDeleteNotifyPositionMember88_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendDeleteNotifyPositionMember88_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, GUILD_BATTLE__CNormalGuildBattleGuildSendDeleteNotifyPositionMember88_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendGetGravityStone90_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*, int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendGetGravityStone90_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*, int, GUILD_BATTLE__CNormalGuildBattleGuildSendGetGravityStone90_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg92_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg92_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildSendMsg92_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg94_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg94_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, int, GUILD_BATTLE__CNormalGuildBattleGuildSendMsg94_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg96_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendMsg96_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char*, char*, unsigned int, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildSendMsg96_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendOhterNotifyCommitteeMemberPosition98_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendOhterNotifyCommitteeMemberPosition98_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*, GUILD_BATTLE__CNormalGuildBattleGuildSendOhterNotifyCommitteeMemberPosition98_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendRegenBall100_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendRegenBall100_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, GUILD_BATTLE__CNormalGuildBattleGuildSendRegenBall100_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendSelfNotifyCommitteeMemberPositionList102_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendSelfNotifyCommitteeMemberPositionList102_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CPlayer*, GUILD_BATTLE__CNormalGuildBattleGuildSendSelfNotifyCommitteeMemberPositionList102_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendStartNotifyCommitteeMemberPosition104_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSendStartNotifyCommitteeMemberPosition104_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, int, GUILD_BATTLE__CNormalGuildBattleGuildSendStartNotifyCommitteeMemberPosition104_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetColorInx106_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetColorInx106_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, char, GUILD_BATTLE__CNormalGuildBattleGuildSetColorInx106_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetGuild108_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetGuild108_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, struct CGuild*, GUILD_BATTLE__CNormalGuildBattleGuildSetGuild108_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetReStartFlag110_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleGuildSetReStartFlag110_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, unsigned int, GUILD_BATTLE__CNormalGuildBattleGuildSetReStartFlag110_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuildUpdateScore112_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuildUpdateScore112_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuildUpdateScore112_ptr);
            using GUILD_BATTLE__CNormalGuildBattleGuilddtor_CNormalGuildBattleGuild114_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*);
            using GUILD_BATTLE__CNormalGuildBattleGuilddtor_CNormalGuildBattleGuild114_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleGuild*, GUILD_BATTLE__CNormalGuildBattleGuilddtor_CNormalGuildBattleGuild114_ptr);
            
        }; // end namespace info
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE