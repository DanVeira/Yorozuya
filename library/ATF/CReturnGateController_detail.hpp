// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CReturnGateController_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CReturnGateControllerctor_CReturnGateController2_ptr CReturnGateControllerctor_CReturnGateController2_next(nullptr);
        info::CReturnGateControllerctor_CReturnGateController2_clbk CReturnGateControllerctor_CReturnGateController2_user(nullptr);
        info::CReturnGateControllerCleanUp4_ptr CReturnGateControllerCleanUp4_next(nullptr);
        info::CReturnGateControllerCleanUp4_clbk CReturnGateControllerCleanUp4_user(nullptr);
        info::CReturnGateControllerClose6_ptr CReturnGateControllerClose6_next(nullptr);
        info::CReturnGateControllerClose6_clbk CReturnGateControllerClose6_user(nullptr);
        info::CReturnGateControllerDestroy8_ptr CReturnGateControllerDestroy8_next(nullptr);
        info::CReturnGateControllerDestroy8_clbk CReturnGateControllerDestroy8_user(nullptr);
        info::CReturnGateControllerEnter10_ptr CReturnGateControllerEnter10_next(nullptr);
        info::CReturnGateControllerEnter10_clbk CReturnGateControllerEnter10_user(nullptr);
        info::CReturnGateControllerGetEmpty12_ptr CReturnGateControllerGetEmpty12_next(nullptr);
        info::CReturnGateControllerGetEmpty12_clbk CReturnGateControllerGetEmpty12_user(nullptr);
        info::CReturnGateControllerGetGate14_ptr CReturnGateControllerGetGate14_next(nullptr);
        info::CReturnGateControllerGetGate14_clbk CReturnGateControllerGetGate14_user(nullptr);
        info::CReturnGateControllerInit16_ptr CReturnGateControllerInit16_next(nullptr);
        info::CReturnGateControllerInit16_clbk CReturnGateControllerInit16_user(nullptr);
        info::CReturnGateControllerInstance18_ptr CReturnGateControllerInstance18_next(nullptr);
        info::CReturnGateControllerInstance18_clbk CReturnGateControllerInstance18_user(nullptr);
        info::CReturnGateControllerIsExistOwner20_ptr CReturnGateControllerIsExistOwner20_next(nullptr);
        info::CReturnGateControllerIsExistOwner20_clbk CReturnGateControllerIsExistOwner20_user(nullptr);
        info::CReturnGateControllerOnLoop22_ptr CReturnGateControllerOnLoop22_next(nullptr);
        info::CReturnGateControllerOnLoop22_clbk CReturnGateControllerOnLoop22_user(nullptr);
        info::CReturnGateControllerOpen24_ptr CReturnGateControllerOpen24_next(nullptr);
        info::CReturnGateControllerOpen24_clbk CReturnGateControllerOpen24_user(nullptr);
        info::CReturnGateControllerProcessEnter26_ptr CReturnGateControllerProcessEnter26_next(nullptr);
        info::CReturnGateControllerProcessEnter26_clbk CReturnGateControllerProcessEnter26_user(nullptr);
        info::CReturnGateControllerSendEnterResult28_ptr CReturnGateControllerSendEnterResult28_next(nullptr);
        info::CReturnGateControllerSendEnterResult28_clbk CReturnGateControllerSendEnterResult28_user(nullptr);
        info::CReturnGateControllerUpdateClose30_ptr CReturnGateControllerUpdateClose30_next(nullptr);
        info::CReturnGateControllerUpdateClose30_clbk CReturnGateControllerUpdateClose30_user(nullptr);
        info::CReturnGateControllerdtor_CReturnGateController34_ptr CReturnGateControllerdtor_CReturnGateController34_next(nullptr);
        info::CReturnGateControllerdtor_CReturnGateController34_clbk CReturnGateControllerdtor_CReturnGateController34_user(nullptr);
        
        void CReturnGateControllerctor_CReturnGateController2_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerctor_CReturnGateController2_user(_this, CReturnGateControllerctor_CReturnGateController2_next);
        };
        void CReturnGateControllerCleanUp4_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerCleanUp4_user(_this, CReturnGateControllerCleanUp4_next);
        };
        void CReturnGateControllerClose6_wrapper(struct CReturnGateController* _this, struct CReturnGate* pkGate)
        {
           CReturnGateControllerClose6_user(_this, pkGate, CReturnGateControllerClose6_next);
        };
        void CReturnGateControllerDestroy8_wrapper()
        {
           CReturnGateControllerDestroy8_user(CReturnGateControllerDestroy8_next);
        };
        bool CReturnGateControllerEnter10_wrapper(struct CReturnGateController* _this, unsigned int uiGateInx, struct CPlayer* pkObj)
        {
           return CReturnGateControllerEnter10_user(_this, uiGateInx, pkObj, CReturnGateControllerEnter10_next);
        };
        struct CReturnGate* CReturnGateControllerGetEmpty12_wrapper(struct CReturnGateController* _this)
        {
           return CReturnGateControllerGetEmpty12_user(_this, CReturnGateControllerGetEmpty12_next);
        };
        struct CReturnGate* CReturnGateControllerGetGate14_wrapper(struct CReturnGateController* _this, unsigned int uiInx)
        {
           return CReturnGateControllerGetGate14_user(_this, uiInx, CReturnGateControllerGetGate14_next);
        };
        bool CReturnGateControllerInit16_wrapper(struct CReturnGateController* _this, unsigned int uiSize)
        {
           return CReturnGateControllerInit16_user(_this, uiSize, CReturnGateControllerInit16_next);
        };
        struct CReturnGateController* CReturnGateControllerInstance18_wrapper()
        {
           return CReturnGateControllerInstance18_user(CReturnGateControllerInstance18_next);
        };
        bool CReturnGateControllerIsExistOwner20_wrapper(struct CReturnGateController* _this, struct CPlayer* pkObj)
        {
           return CReturnGateControllerIsExistOwner20_user(_this, pkObj, CReturnGateControllerIsExistOwner20_next);
        };
        void CReturnGateControllerOnLoop22_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerOnLoop22_user(_this, CReturnGateControllerOnLoop22_next);
        };
        bool CReturnGateControllerOpen24_wrapper(struct CReturnGateController* _this, struct CPlayer* pkOwner)
        {
           return CReturnGateControllerOpen24_user(_this, pkOwner, CReturnGateControllerOpen24_next);
        };
        int CReturnGateControllerProcessEnter26_wrapper(struct CReturnGateController* _this, unsigned int uiGateInx, struct CPlayer* pkObj)
        {
           return CReturnGateControllerProcessEnter26_user(_this, uiGateInx, pkObj, CReturnGateControllerProcessEnter26_next);
        };
        void CReturnGateControllerSendEnterResult28_wrapper(struct CReturnGateController* _this, int iResult, struct CPlayer* pkObj)
        {
           CReturnGateControllerSendEnterResult28_user(_this, iResult, pkObj, CReturnGateControllerSendEnterResult28_next);
        };
        void CReturnGateControllerUpdateClose30_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerUpdateClose30_user(_this, CReturnGateControllerUpdateClose30_next);
        };
        void CReturnGateControllerdtor_CReturnGateController34_wrapper(struct CReturnGateController* _this)
        {
           CReturnGateControllerdtor_CReturnGateController34_user(_this, CReturnGateControllerdtor_CReturnGateController34_next);
        };
        
        hook_record CReturnGateController_functions[] = {
        {   (LPVOID)0x140250040L,
            (LPVOID *)&CReturnGateControllerctor_CReturnGateController2_user,
            (LPVOID *)&CReturnGateControllerctor_CReturnGateController2_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerctor_CReturnGateController2_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::ctor_CReturnGateController) },
        {   (LPVOID)0x1402509d0L,
            (LPVOID *)&CReturnGateControllerCleanUp4_user,
            (LPVOID *)&CReturnGateControllerCleanUp4_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerCleanUp4_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::CleanUp) },
        {   (LPVOID)0x140250f70L,
            (LPVOID *)&CReturnGateControllerClose6_user,
            (LPVOID *)&CReturnGateControllerClose6_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerClose6_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)(struct CReturnGate*))&CReturnGateController::Close) },
        {   (LPVOID)0x1402501a0L,
            (LPVOID *)&CReturnGateControllerDestroy8_user,
            (LPVOID *)&CReturnGateControllerDestroy8_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerDestroy8_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CReturnGateController::Destroy) },
        {   (LPVOID)0x1402508b0L,
            (LPVOID *)&CReturnGateControllerEnter10_user,
            (LPVOID *)&CReturnGateControllerEnter10_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerEnter10_wrapper),
            (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(unsigned int, struct CPlayer*))&CReturnGateController::Enter) },
        {   (LPVOID)0x140250c30L,
            (LPVOID *)&CReturnGateControllerGetEmpty12_user,
            (LPVOID *)&CReturnGateControllerGetEmpty12_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerGetEmpty12_wrapper),
            (LPVOID)cast_pointer_function((struct CReturnGate*(CReturnGateController::*)())&CReturnGateController::GetEmpty) },
        {   (LPVOID)0x140250980L,
            (LPVOID *)&CReturnGateControllerGetGate14_user,
            (LPVOID *)&CReturnGateControllerGetGate14_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerGetGate14_wrapper),
            (LPVOID)cast_pointer_function((struct CReturnGate*(CReturnGateController::*)(unsigned int))&CReturnGateController::GetGate) },
        {   (LPVOID)0x140250220L,
            (LPVOID *)&CReturnGateControllerInit16_user,
            (LPVOID *)&CReturnGateControllerInit16_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerInit16_wrapper),
            (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(unsigned int))&CReturnGateController::Init) },
        {   (LPVOID)0x1402500e0L,
            (LPVOID *)&CReturnGateControllerInstance18_user,
            (LPVOID *)&CReturnGateControllerInstance18_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerInstance18_wrapper),
            (LPVOID)cast_pointer_function((struct CReturnGateController*(*)())&CReturnGateController::Instance) },
        {   (LPVOID)0x140250ce0L,
            (LPVOID *)&CReturnGateControllerIsExistOwner20_user,
            (LPVOID *)&CReturnGateControllerIsExistOwner20_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerIsExistOwner20_wrapper),
            (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(struct CPlayer*))&CReturnGateController::IsExistOwner) },
        {   (LPVOID)0x140250920L,
            (LPVOID *)&CReturnGateControllerOnLoop22_user,
            (LPVOID *)&CReturnGateControllerOnLoop22_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerOnLoop22_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::OnLoop) },
        {   (LPVOID)0x1402506a0L,
            (LPVOID *)&CReturnGateControllerOpen24_user,
            (LPVOID *)&CReturnGateControllerOpen24_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerOpen24_wrapper),
            (LPVOID)cast_pointer_function((bool(CReturnGateController::*)(struct CPlayer*))&CReturnGateController::Open) },
        {   (LPVOID)0x140250dd0L,
            (LPVOID *)&CReturnGateControllerProcessEnter26_user,
            (LPVOID *)&CReturnGateControllerProcessEnter26_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerProcessEnter26_wrapper),
            (LPVOID)cast_pointer_function((int(CReturnGateController::*)(unsigned int, struct CPlayer*))&CReturnGateController::ProcessEnter) },
        {   (LPVOID)0x140251000L,
            (LPVOID *)&CReturnGateControllerSendEnterResult28_user,
            (LPVOID *)&CReturnGateControllerSendEnterResult28_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerSendEnterResult28_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)(int, struct CPlayer*))&CReturnGateController::SendEnterResult) },
        {   (LPVOID)0x140250e90L,
            (LPVOID *)&CReturnGateControllerUpdateClose30_user,
            (LPVOID *)&CReturnGateControllerUpdateClose30_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerUpdateClose30_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::UpdateClose) },
        {   (LPVOID)0x1402500a0L,
            (LPVOID *)&CReturnGateControllerdtor_CReturnGateController34_user,
            (LPVOID *)&CReturnGateControllerdtor_CReturnGateController34_next,
            (LPVOID)cast_pointer_function(CReturnGateControllerdtor_CReturnGateController34_wrapper),
            (LPVOID)cast_pointer_function((void(CReturnGateController::*)())&CReturnGateController::dtor_CReturnGateController) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE