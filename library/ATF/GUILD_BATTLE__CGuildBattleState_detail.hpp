// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "GUILD_BATTLE__CGuildBattleState_info.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace detail
        {
            info::GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_ptr GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_clbk GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateEnter4_ptr GUILD_BATTLE__CGuildBattleStateEnter4_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateEnter4_clbk GUILD_BATTLE__CGuildBattleStateEnter4_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateFin6_ptr GUILD_BATTLE__CGuildBattleStateFin6_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateFin6_clbk GUILD_BATTLE__CGuildBattleStateFin6_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateGetTerm8_ptr GUILD_BATTLE__CGuildBattleStateGetTerm8_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateGetTerm8_clbk GUILD_BATTLE__CGuildBattleStateGetTerm8_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateLog10_ptr GUILD_BATTLE__CGuildBattleStateLog10_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateLog10_clbk GUILD_BATTLE__CGuildBattleStateLog10_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateLoop12_ptr GUILD_BATTLE__CGuildBattleStateLoop12_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStateLoop12_clbk GUILD_BATTLE__CGuildBattleStateLoop12_user(nullptr);
            info::GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_ptr GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next(nullptr);
            info::GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_clbk GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user(nullptr);
            
            void GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this)
            {
               GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user(_this, GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next);
            };
            int GUILD_BATTLE__CGuildBattleStateEnter4_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateEnter4_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateEnter4_next);
            };
            int GUILD_BATTLE__CGuildBattleStateFin6_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateFin6_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateFin6_next);
            };
            struct ATL::CTimeSpan* GUILD_BATTLE__CGuildBattleStateGetTerm8_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CGuildBattleStateGetTerm8_user(_this, result, GUILD_BATTLE__CGuildBattleStateGetTerm8_next);
            };
            void GUILD_BATTLE__CGuildBattleStateLog10_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, char* szMsg)
            {
               GUILD_BATTLE__CGuildBattleStateLog10_user(_this, szMsg, GUILD_BATTLE__CGuildBattleStateLog10_next);
            };
            int GUILD_BATTLE__CGuildBattleStateLoop12_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CGuildBattleStateLoop12_user(_this, pkBattle, GUILD_BATTLE__CGuildBattleStateLoop12_next);
            };
            void GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_wrapper(struct GUILD_BATTLE::CGuildBattleState* _this)
            {
               GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user(_this, GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next);
            };
            
            hook_record CGuildBattleState_functions[] = {
            {   (LPVOID)0x1403dee30L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStatector_CGuildBattleState2_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)())&GUILD_BATTLE::CGuildBattleState::ctor_CGuildBattleState) },
            {   (LPVOID)0x14007f760L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateEnter4_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateEnter4_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateEnter4_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Enter) },
            {   (LPVOID)0x14007f7a0L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateFin6_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateFin6_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateFin6_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Fin) },
            {   (LPVOID)0x14007f7c0L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateGetTerm8_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateGetTerm8_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateGetTerm8_wrapper),
                (LPVOID)cast_pointer_function((struct ATL::CTimeSpan*(GUILD_BATTLE::CGuildBattleState::*)(struct ATL::CTimeSpan*))&GUILD_BATTLE::CGuildBattleState::GetTerm) },
            {   (LPVOID)0x1403dee60L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLog10_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLog10_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateLog10_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)(char*))&GUILD_BATTLE::CGuildBattleState::Log) },
            {   (LPVOID)0x14007f780L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLoop12_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStateLoop12_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStateLoop12_wrapper),
                (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattleState::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CGuildBattleState::Loop) },
            {   (LPVOID)0x14007f740L,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_user,
                (LPVOID *)&GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_next,
                (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleStatedtor_CGuildBattleState14_wrapper),
                (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleState::*)())&GUILD_BATTLE::CGuildBattleState::dtor_CGuildBattleState) },
            
            };
            
        }; // end namespace detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE