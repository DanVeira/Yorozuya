// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "wchar_t.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagSOUNDSENTRYW
    {
        unsigned int cbSize;
        unsigned int dwFlags;
        unsigned int iFSTextEffect;
        unsigned int iFSTextEffectMSec;
        unsigned int iFSTextEffectColorBits;
        unsigned int iFSGrafEffect;
        unsigned int iFSGrafEffectMSec;
        unsigned int iFSGrafEffectColor;
        unsigned int iWindowsEffect;
        unsigned int iWindowsEffectMSec;
        wchar_t *lpszWindowsEffectDLL;
        unsigned int iWindowsEffectOrdinal;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE