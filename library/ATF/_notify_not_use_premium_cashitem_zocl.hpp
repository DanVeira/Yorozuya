// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _notify_not_use_premium_cashitem_zocl
    {
        unsigned __int16 wItemSerial;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _notify_not_use_premium_cashitem_zocl*);
            return (org_ptr(0x1400f0850L))(this);
        };
    };
END_ATF_NAMESPACE