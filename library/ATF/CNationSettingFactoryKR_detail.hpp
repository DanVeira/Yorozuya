// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingFactoryKR_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CNationSettingFactoryKRctor_CNationSettingFactoryKR2_ptr CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next(nullptr);
        info::CNationSettingFactoryKRctor_CNationSettingFactoryKR2_clbk CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user(nullptr);
        info::CNationSettingFactoryKRCreate4_ptr CNationSettingFactoryKRCreate4_next(nullptr);
        info::CNationSettingFactoryKRCreate4_clbk CNationSettingFactoryKRCreate4_user(nullptr);
        
        void CNationSettingFactoryKRctor_CNationSettingFactoryKR2_wrapper(struct CNationSettingFactoryKR* _this)
        {
           CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user(_this, CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next);
        };
        struct CNationSettingData* CNationSettingFactoryKRCreate4_wrapper(struct CNationSettingFactoryKR* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryKRCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryKRCreate4_next);
        };
        
        hook_record CNationSettingFactoryKR_functions[] = {
        {   (LPVOID)0x140219480L,
            (LPVOID *)&CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user,
            (LPVOID *)&CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryKRctor_CNationSettingFactoryKR2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingFactoryKR::*)())&CNationSettingFactoryKR::ctor_CNationSettingFactoryKR) },
        {   (LPVOID)0x14022ae30L,
            (LPVOID *)&CNationSettingFactoryKRCreate4_user,
            (LPVOID *)&CNationSettingFactoryKRCreate4_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryKRCreate4_wrapper),
            (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryKR::*)(int, char*, bool))&CNationSettingFactoryKR::Create) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE