// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_candidate_info_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_candidate_info_Init2_ptr _candidate_info_Init2_next(nullptr);
        info::_candidate_info_Init2_clbk _candidate_info_Init2_user(nullptr);
        info::_candidate_infoctor__candidate_info4_ptr _candidate_infoctor__candidate_info4_next(nullptr);
        info::_candidate_infoctor__candidate_info4_clbk _candidate_infoctor__candidate_info4_user(nullptr);
        
        void _candidate_info_Init2_wrapper(struct _candidate_info* _this)
        {
           _candidate_info_Init2_user(_this, _candidate_info_Init2_next);
        };
        void _candidate_infoctor__candidate_info4_wrapper(struct _candidate_info* _this)
        {
           _candidate_infoctor__candidate_info4_user(_this, _candidate_infoctor__candidate_info4_next);
        };
        
        hook_record _candidate_info_functions[] = {
        {   (LPVOID)0x1402b62b0L,
            (LPVOID *)&_candidate_info_Init2_user,
            (LPVOID *)&_candidate_info_Init2_next,
            (LPVOID)cast_pointer_function(_candidate_info_Init2_wrapper),
            (LPVOID)cast_pointer_function((void(_candidate_info::*)())&_candidate_info::_Init) },
        {   (LPVOID)0x1402b6260L,
            (LPVOID *)&_candidate_infoctor__candidate_info4_user,
            (LPVOID *)&_candidate_infoctor__candidate_info4_next,
            (LPVOID)cast_pointer_function(_candidate_infoctor__candidate_info4_wrapper),
            (LPVOID)cast_pointer_function((void(_candidate_info::*)())&_candidate_info::ctor__candidate_info) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE