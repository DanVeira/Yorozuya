// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _post_storage_list
    {
        struct __list
        {
            unsigned int dwSerial;
            char byIndex;
            char byState;
            char wszSendName[17];
            char wszTitle[21];
            int nK;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned __int64 lnUID;
            unsigned int dwGold;
            unsigned __int16 wStorageIndex;
        };
        unsigned int dwCount;
        __list List[50];
    };
END_ATF_NAMESPACE
