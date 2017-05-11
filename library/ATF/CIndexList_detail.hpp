// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CIndexList_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CIndexListctor_CIndexList2_ptr CIndexListctor_CIndexList2_next(nullptr);
        info::CIndexListctor_CIndexList2_clbk CIndexListctor_CIndexList2_user(nullptr);
        info::CIndexListCopyFront4_ptr CIndexListCopyFront4_next(nullptr);
        info::CIndexListCopyFront4_clbk CIndexListCopyFront4_user(nullptr);
        info::CIndexListFindNode6_ptr CIndexListFindNode6_next(nullptr);
        info::CIndexListFindNode6_clbk CIndexListFindNode6_user(nullptr);
        info::CIndexListGetAllNode8_ptr CIndexListGetAllNode8_next(nullptr);
        info::CIndexListGetAllNode8_clbk CIndexListGetAllNode8_user(nullptr);
        info::CIndexListGetSize10_ptr CIndexListGetSize10_next(nullptr);
        info::CIndexListGetSize10_clbk CIndexListGetSize10_user(nullptr);
        info::CIndexListIsInList12_ptr CIndexListIsInList12_next(nullptr);
        info::CIndexListIsInList12_clbk CIndexListIsInList12_user(nullptr);
        info::CIndexListIsSetting14_ptr CIndexListIsSetting14_next(nullptr);
        info::CIndexListIsSetting14_clbk CIndexListIsSetting14_user(nullptr);
        info::CIndexListPopNode_Front16_ptr CIndexListPopNode_Front16_next(nullptr);
        info::CIndexListPopNode_Front16_clbk CIndexListPopNode_Front16_user(nullptr);
        info::CIndexListPushNode_Back18_ptr CIndexListPushNode_Back18_next(nullptr);
        info::CIndexListPushNode_Back18_clbk CIndexListPushNode_Back18_user(nullptr);
        info::CIndexListResetList20_ptr CIndexListResetList20_next(nullptr);
        info::CIndexListResetList20_clbk CIndexListResetList20_user(nullptr);
        info::CIndexListSetList22_ptr CIndexListSetList22_next(nullptr);
        info::CIndexListSetList22_clbk CIndexListSetList22_user(nullptr);
        info::CIndexListdtor_CIndexList27_ptr CIndexListdtor_CIndexList27_next(nullptr);
        info::CIndexListdtor_CIndexList27_clbk CIndexListdtor_CIndexList27_user(nullptr);
        
        info::CIndexList___index_nodeAllocInfo2_ptr CIndexList___index_nodeAllocInfo2_next(nullptr);
        info::CIndexList___index_nodeAllocInfo2_clbk CIndexList___index_nodeAllocInfo2_user(nullptr);
        info::CIndexList___index_nodector__index_node4_ptr CIndexList___index_nodector__index_node4_next(nullptr);
        info::CIndexList___index_nodector__index_node4_clbk CIndexList___index_nodector__index_node4_user(nullptr);
        info::CIndexList___index_nodedtor__index_node8_ptr CIndexList___index_nodedtor__index_node8_next(nullptr);
        info::CIndexList___index_nodedtor__index_node8_clbk CIndexList___index_nodedtor__index_node8_user(nullptr);
        
        void CIndexListctor_CIndexList2_wrapper(struct CIndexList* _this)
        {
           CIndexListctor_CIndexList2_user(_this, CIndexListctor_CIndexList2_next);
        };
        bool CIndexListCopyFront4_wrapper(struct CIndexList* _this, unsigned int* pdwOutIndex, char* pInfoData)
        {
           return CIndexListCopyFront4_user(_this, pdwOutIndex, pInfoData, CIndexListCopyFront4_next);
        };
        bool CIndexListFindNode6_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListFindNode6_user(_this, dwIndex, pInfoData, CIndexListFindNode6_next);
        };
        struct CIndexList::_index_node* CIndexListGetAllNode8_wrapper(struct CIndexList* _this, unsigned int* pdwMaxNodeNum)
        {
           return CIndexListGetAllNode8_user(_this, pdwMaxNodeNum, CIndexListGetAllNode8_next);
        };
        int CIndexListGetSize10_wrapper(struct CIndexList* _this)
        {
           return CIndexListGetSize10_user(_this, CIndexListGetSize10_next);
        };
        bool CIndexListIsInList12_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListIsInList12_user(_this, dwIndex, pInfoData, CIndexListIsInList12_next);
        };
        bool CIndexListIsSetting14_wrapper(struct CIndexList* _this)
        {
           return CIndexListIsSetting14_user(_this, CIndexListIsSetting14_next);
        };
        bool CIndexListPopNode_Front16_wrapper(struct CIndexList* _this, unsigned int* pdwOutIndex, char* pInfoData)
        {
           return CIndexListPopNode_Front16_user(_this, pdwOutIndex, pInfoData, CIndexListPopNode_Front16_next);
        };
        bool CIndexListPushNode_Back18_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListPushNode_Back18_user(_this, dwIndex, pInfoData, CIndexListPushNode_Back18_next);
        };
        void CIndexListResetList20_wrapper(struct CIndexList* _this)
        {
           CIndexListResetList20_user(_this, CIndexListResetList20_next);
        };
        bool CIndexListSetList22_wrapper(struct CIndexList* _this, unsigned int dwMaxBufNum, unsigned int nInfoSize, bool bUseMultiThread)
        {
           return CIndexListSetList22_user(_this, dwMaxBufNum, nInfoSize, bUseMultiThread, CIndexListSetList22_next);
        };
        void CIndexListdtor_CIndexList27_wrapper(struct CIndexList* _this)
        {
           CIndexListdtor_CIndexList27_user(_this, CIndexListdtor_CIndexList27_next);
        };
        
        bool CIndexList___index_nodeAllocInfo2_wrapper(struct CIndexList::_index_node* _this, unsigned int nSize)
        {
           return CIndexList___index_nodeAllocInfo2_user(_this, nSize, CIndexList___index_nodeAllocInfo2_next);
        };
        void CIndexList___index_nodector__index_node4_wrapper(struct CIndexList::_index_node* _this)
        {
           CIndexList___index_nodector__index_node4_user(_this, CIndexList___index_nodector__index_node4_next);
        };
        void CIndexList___index_nodedtor__index_node8_wrapper(struct CIndexList::_index_node* _this)
        {
           CIndexList___index_nodedtor__index_node8_user(_this, CIndexList___index_nodedtor__index_node8_next);
        };
        
        hook_record CIndexList_functions[] = {
        {   (LPVOID)0x1404392f0L,
            (LPVOID *)&CIndexListctor_CIndexList2_user,
            (LPVOID *)&CIndexListctor_CIndexList2_next,
            (LPVOID)cast_pointer_function(CIndexListctor_CIndexList2_wrapper),
            (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::ctor_CIndexList) },
        {   (LPVOID)0x140439be0L,
            (LPVOID *)&CIndexListCopyFront4_user,
            (LPVOID *)&CIndexListCopyFront4_next,
            (LPVOID)cast_pointer_function(CIndexListCopyFront4_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int*, char*))&CIndexList::CopyFront) },
        {   (LPVOID)0x140439e60L,
            (LPVOID *)&CIndexListFindNode6_user,
            (LPVOID *)&CIndexListFindNode6_next,
            (LPVOID)cast_pointer_function(CIndexListFindNode6_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::FindNode) },
        {   (LPVOID)0x14043a120L,
            (LPVOID *)&CIndexListGetAllNode8_user,
            (LPVOID *)&CIndexListGetAllNode8_next,
            (LPVOID)cast_pointer_function(CIndexListGetAllNode8_wrapper),
            (LPVOID)cast_pointer_function((struct CIndexList::_index_node*(CIndexList::*)(unsigned int*))&CIndexList::GetAllNode) },
        {   (LPVOID)0x14043a100L,
            (LPVOID *)&CIndexListGetSize10_user,
            (LPVOID *)&CIndexListGetSize10_next,
            (LPVOID)cast_pointer_function(CIndexListGetSize10_wrapper),
            (LPVOID)cast_pointer_function((int(CIndexList::*)())&CIndexList::GetSize) },
        {   (LPVOID)0x14043a010L,
            (LPVOID *)&CIndexListIsInList12_user,
            (LPVOID *)&CIndexListIsInList12_next,
            (LPVOID)cast_pointer_function(CIndexListIsInList12_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::IsInList) },
        {   (LPVOID)0x1404399c0L,
            (LPVOID *)&CIndexListIsSetting14_user,
            (LPVOID *)&CIndexListIsSetting14_next,
            (LPVOID)cast_pointer_function(CIndexListIsSetting14_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)())&CIndexList::IsSetting) },
        {   (LPVOID)0x140439a40L,
            (LPVOID *)&CIndexListPopNode_Front16_user,
            (LPVOID *)&CIndexListPopNode_Front16_next,
            (LPVOID)cast_pointer_function(CIndexListPopNode_Front16_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int*, char*))&CIndexList::PopNode_Front) },
        {   (LPVOID)0x140439cd0L,
            (LPVOID *)&CIndexListPushNode_Back18_user,
            (LPVOID *)&CIndexListPushNode_Back18_next,
            (LPVOID)cast_pointer_function(CIndexListPushNode_Back18_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::PushNode_Back) },
        {   (LPVOID)0x1404399f0L,
            (LPVOID *)&CIndexListResetList20_user,
            (LPVOID *)&CIndexListResetList20_next,
            (LPVOID)cast_pointer_function(CIndexListResetList20_wrapper),
            (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::ResetList) },
        {   (LPVOID)0x140439720L,
            (LPVOID *)&CIndexListSetList22_user,
            (LPVOID *)&CIndexListSetList22_next,
            (LPVOID)cast_pointer_function(CIndexListSetList22_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, unsigned int, bool))&CIndexList::SetList) },
        {   (LPVOID)0x140439530L,
            (LPVOID *)&CIndexListdtor_CIndexList27_user,
            (LPVOID *)&CIndexListdtor_CIndexList27_next,
            (LPVOID)cast_pointer_function(CIndexListdtor_CIndexList27_wrapper),
            (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::dtor_CIndexList) },
        
        {   (LPVOID)0x14043ab10L,
            (LPVOID *)&CIndexList___index_nodeAllocInfo2_user,
            (LPVOID *)&CIndexList___index_nodeAllocInfo2_next,
            (LPVOID)cast_pointer_function(CIndexList___index_nodeAllocInfo2_wrapper),
            (LPVOID)cast_pointer_function((bool(CIndexList::_index_node::*)(unsigned int))&CIndexList::_index_node::AllocInfo) },
        {   (LPVOID)0x14043a910L,
            (LPVOID *)&CIndexList___index_nodector__index_node4_user,
            (LPVOID *)&CIndexList___index_nodector__index_node4_next,
            (LPVOID)cast_pointer_function(CIndexList___index_nodector__index_node4_wrapper),
            (LPVOID)cast_pointer_function((void(CIndexList::_index_node::*)())&CIndexList::_index_node::ctor__index_node) },
        {   (LPVOID)0x14043a970L,
            (LPVOID *)&CIndexList___index_nodedtor__index_node8_user,
            (LPVOID *)&CIndexList___index_nodedtor__index_node8_next,
            (LPVOID)cast_pointer_function(CIndexList___index_nodedtor__index_node8_wrapper),
            (LPVOID)cast_pointer_function((void(CIndexList::_index_node::*)())&CIndexList::_index_node::dtor__index_node) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE