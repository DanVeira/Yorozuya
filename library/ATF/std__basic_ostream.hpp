// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  basic_ostream<char,char_traits<char> >
        {
            template<>
            struct _Sentry_base
            {
                basic_ostream<char,char_traits<char> > *_Myostr;
            };
            template<>
            struct  sentry : _Sentry_base
            {
                bool _Ok;
            };
            BYTE gap0[104];
        };
    }; // end namespace std
END_ATF_NAMESPACE


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  basic_ostream<wchar_t,char_traits<wchar_t> >
        {
            template<>
            struct _Sentry_base
            {
                basic_ostream<wchar_t,char_traits<wchar_t> > *_Myostr;
            };
            template<>
            struct  sentry : _Sentry_base
            {
                bool _Ok;
            };
            BYTE gap0[104];
        };
    }; // end namespace std
END_ATF_NAMESPACE