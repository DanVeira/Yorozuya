// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _qry_case_inputgmoney
    {
        unsigned int in_pusherserial;
        char in_w_pushername[17];
        unsigned int tmp_guildindex;
        unsigned int in_guildserial;
        unsigned int dwAddGold;
        unsigned int dwAddDalant;
        char in_date[4];
        long double out_totalgold;
        long double out_totaldalant;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_inputgmoney*);
            return (org_ptr(0x1400ad290L))(this);
        };
    };
END_ATF_NAMESPACE