// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct CUnmannedTraderSubClassInfoVtbl
    {
        bool (WINAPIV *LoadXML)(struct CUnmannedTraderSubClassInfo *_this, struct TiXmlElement *, struct CLogFile *, unsigned int, unsigned int);
		struct CUnmannedTraderSubClassInfo *(WINAPIV *Create)(struct CUnmannedTraderSubClassInfo *_this, unsigned int);
        bool (WINAPIV *GetGroupID)(struct CUnmannedTraderSubClassInfo *_this, char, unsigned __int16, char *);
    };
END_ATF_NAMESPACE