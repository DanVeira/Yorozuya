// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_NOT_ARRANGED_AVATOR_DB.hpp>
#include <_REGED.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_sheet_reged
    {
        unsigned int dwAccountSerial;
        _REGED RegedData[3];
        _NOT_ARRANGED_AVATOR_DB ArrangedData[50];
        char in_szIP[16];
    public:
        _qry_sheet_reged();
        void ctor__qry_sheet_reged();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_sheet_reged, 4280>(), "_qry_sheet_reged");
END_ATF_NAMESPACE
