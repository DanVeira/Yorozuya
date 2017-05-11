// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_POINTL.hpp"
#include "_RECTL.hpp"
#include "tagEMR.hpp"
#include "tagXFORM.hpp"


START_ATF_NAMESPACE
    struct tagEMRPLGBLT
    {
        tagEMR emr;
        _RECTL rclBounds;
        _POINTL aptlDest[3];
        int xSrc;
        int ySrc;
        int cxSrc;
        int cySrc;
        tagXFORM xformSrc;
        unsigned int crBkColorSrc;
        unsigned int iUsageSrc;
        unsigned int offBmiSrc;
        unsigned int cbBmiSrc;
        unsigned int offBitsSrc;
        unsigned int cbBitsSrc;
        int xMask;
        int yMask;
        unsigned int iUsageMask;
        unsigned int offBmiMask;
        unsigned int cbBmiMask;
        unsigned int offBitsMask;
        unsigned int cbBitsMask;
    };
END_ATF_NAMESPACE