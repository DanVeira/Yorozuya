// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCommonDialog.hpp"
#include "tagFINDREPLACEA.hpp"


START_ATF_NAMESPACE
    struct  CFindReplaceDialog : CCommonDialog
    {
        tagFINDREPLACEA m_fr;
        char m_szFindWhat[128];
        char m_szReplaceWith[128];
    };
END_ATF_NAMESPACE