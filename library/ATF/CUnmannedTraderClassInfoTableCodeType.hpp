// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogFile.hpp"
#include "CUnmannedTraderItemCodeInfo.hpp"
#include "CUnmannedTraderClassInfo.hpp"
#include "CUnmannedTraderClassInfoTableType.hpp"
#include "std__vector.hpp"


START_ATF_NAMESPACE
    struct  CUnmannedTraderClassInfoTableCodeType : CUnmannedTraderClassInfoTableType
    {
        std::vector<CUnmannedTraderItemCodeInfo> m_vecCodeList;
    public:
        CUnmannedTraderClassInfoTableCodeType(unsigned int dwID)
			: CUnmannedTraderClassInfoTableType(dwID)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
            (org_ptr(0x140377040L))(this, dwID);
        };
        void ctor_CUnmannedTraderClassInfoTableCodeType(unsigned int dwID)
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
            (org_ptr(0x140377040L))(this, dwID);
        };
        struct CUnmannedTraderClassInfo* Create(unsigned int dwID)
        {
            using org_ptr = struct CUnmannedTraderClassInfo* (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, unsigned int);
            return (org_ptr(0x140377980L))(this, dwID);
        };
        bool GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass)
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, char, uint16_t, char*);
            return (org_ptr(0x1403773a0L))(this, byTableCode, wItemTableIndex, byClass);
        };
        bool GetGroupID(char byTableCode, uint16_t wItemTableIndex, char* byClass, char* bySubClass)
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, char, uint16_t, char*, char*);
            return (org_ptr(0x140377a50L))(this, byTableCode, wItemTableIndex, byClass, bySubClass);
        };
        bool LoadXML(struct TiXmlElement* elemClass, struct CLogFile* kLogger, unsigned int dwDivisionID)
        {
            using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*, struct TiXmlElement*, struct CLogFile*, unsigned int);
            return (org_ptr(0x140377190L))(this, elemClass, kLogger, dwDivisionID);
        };
        ~CUnmannedTraderClassInfoTableCodeType()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*);
            (org_ptr(0x140377100L))(this);
        };
        void dtor_CUnmannedTraderClassInfoTableCodeType()
        {
            using org_ptr = void (WINAPIV*)(struct CUnmannedTraderClassInfoTableCodeType*);
            (org_ptr(0x140377100L))(this);
        };
    };
END_ATF_NAMESPACE