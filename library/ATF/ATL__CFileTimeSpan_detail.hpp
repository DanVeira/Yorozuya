// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CFileTimeSpan_info.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace detail
        {
            info::ATL__CFileTimeSpanctor_CFileTimeSpan1_ptr ATL__CFileTimeSpanctor_CFileTimeSpan1_next(nullptr);
            info::ATL__CFileTimeSpanctor_CFileTimeSpan1_clbk ATL__CFileTimeSpanctor_CFileTimeSpan1_user(nullptr);
            info::ATL__CFileTimeSpanctor_CFileTimeSpan2_ptr ATL__CFileTimeSpanctor_CFileTimeSpan2_next(nullptr);
            info::ATL__CFileTimeSpanctor_CFileTimeSpan2_clbk ATL__CFileTimeSpanctor_CFileTimeSpan2_user(nullptr);
            info::ATL__CFileTimeSpanctor_CFileTimeSpan3_ptr ATL__CFileTimeSpanctor_CFileTimeSpan3_next(nullptr);
            info::ATL__CFileTimeSpanctor_CFileTimeSpan3_clbk ATL__CFileTimeSpanctor_CFileTimeSpan3_user(nullptr);
            info::ATL__CFileTimeSpanGetTimeSpan4_ptr ATL__CFileTimeSpanGetTimeSpan4_next(nullptr);
            info::ATL__CFileTimeSpanGetTimeSpan4_clbk ATL__CFileTimeSpanGetTimeSpan4_user(nullptr);
            info::ATL__CFileTimeSpanSetTimeSpan5_ptr ATL__CFileTimeSpanSetTimeSpan5_next(nullptr);
            info::ATL__CFileTimeSpanSetTimeSpan5_clbk ATL__CFileTimeSpanSetTimeSpan5_user(nullptr);
            
            void ATL__CFileTimeSpanctor_CFileTimeSpan1_wrapper(struct CFileTimeSpan* _this, struct CFileTimeSpan* span)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan1_user(_this, span, ATL__CFileTimeSpanctor_CFileTimeSpan1_next);
            };
            void ATL__CFileTimeSpanctor_CFileTimeSpan2_wrapper(struct CFileTimeSpan* _this, int64_t nSpan)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan2_user(_this, nSpan, ATL__CFileTimeSpanctor_CFileTimeSpan2_next);
            };
            void ATL__CFileTimeSpanctor_CFileTimeSpan3_wrapper(struct CFileTimeSpan* _this)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan3_user(_this, ATL__CFileTimeSpanctor_CFileTimeSpan3_next);
            };
            int64_t ATL__CFileTimeSpanGetTimeSpan4_wrapper(struct CFileTimeSpan* _this)
            {
               return ATL__CFileTimeSpanGetTimeSpan4_user(_this, ATL__CFileTimeSpanGetTimeSpan4_next);
            };
            void ATL__CFileTimeSpanSetTimeSpan5_wrapper(struct CFileTimeSpan* _this, int64_t nSpan)
            {
               ATL__CFileTimeSpanSetTimeSpan5_user(_this, nSpan, ATL__CFileTimeSpanSetTimeSpan5_next);
            };
            
            hook_record CFileTimeSpan_functions[] = {
            {   (LPVOID)0x1406735a0L,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan1_user,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan1_next,
                (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan1_wrapper),
                (LPVOID)cast_pointer_function((void(CFileTimeSpan::*)(struct CFileTimeSpan*))&CFileTimeSpan::ctor_CFileTimeSpan) },
            {   (LPVOID)0x1406735d0L,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan2_user,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan2_next,
                (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan2_wrapper),
                (LPVOID)cast_pointer_function((void(CFileTimeSpan::*)(int64_t))&CFileTimeSpan::ctor_CFileTimeSpan) },
            {   (LPVOID)0x140673580L,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan3_user,
                (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan3_next,
                (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan3_wrapper),
                (LPVOID)cast_pointer_function((void(CFileTimeSpan::*)())&CFileTimeSpan::ctor_CFileTimeSpan) },
            {   (LPVOID)0x1406738b0L,
                (LPVOID *)&ATL__CFileTimeSpanGetTimeSpan4_user,
                (LPVOID *)&ATL__CFileTimeSpanGetTimeSpan4_next,
                (LPVOID)cast_pointer_function(ATL__CFileTimeSpanGetTimeSpan4_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CFileTimeSpan::*)())&CFileTimeSpan::GetTimeSpan) },
            {   (LPVOID)0x1406738d0L,
                (LPVOID *)&ATL__CFileTimeSpanSetTimeSpan5_user,
                (LPVOID *)&ATL__CFileTimeSpanSetTimeSpan5_next,
                (LPVOID)cast_pointer_function(ATL__CFileTimeSpanSetTimeSpan5_wrapper),
                (LPVOID)cast_pointer_function((void(CFileTimeSpan::*)(int64_t))&CFileTimeSpan::SetTimeSpan) },
            
            };
            
        }; // end namespace detail
    }; // end namespace ATL
END_ATF_NAMESPACE