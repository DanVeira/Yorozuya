// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "UsStateTBL.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using UsStateTBLAdd2_ptr = int (WINAPIV*)(struct UsStateTBL*, char, char, char, char, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*));
        using UsStateTBLAdd2_clbk = int (WINAPIV*)(struct UsStateTBL*, char, char, char, char, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*), UsStateTBLAdd2_ptr);
        using UsStateTBLAlloc4_ptr = void (WINAPIV*)(struct UsStateTBL*, char, char, char);
        using UsStateTBLAlloc4_clbk = void (WINAPIV*)(struct UsStateTBL*, char, char, char, UsStateTBLAlloc4_ptr);
        using UsStateTBLCleanUp6_ptr = void (WINAPIV*)(struct UsStateTBL*);
        using UsStateTBLCleanUp6_clbk = void (WINAPIV*)(struct UsStateTBL*, UsStateTBLCleanUp6_ptr);
        using UsStateTBLGetHSFMSize8_ptr = char (WINAPIV*)(struct UsStateTBL*);
        using UsStateTBLGetHSFMSize8_clbk = char (WINAPIV*)(struct UsStateTBL*, UsStateTBLGetHSFMSize8_ptr);
        using UsStateTBLGetTransState10_ptr = struct UsStateTBL::_TBLData* (WINAPIV*)(struct UsStateTBL*, char, char);
        using UsStateTBLGetTransState10_clbk = struct UsStateTBL::_TBLData* (WINAPIV*)(struct UsStateTBL*, char, char, UsStateTBLGetTransState10_ptr);
        using UsStateTBLOnMsgProc12_ptr = void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*);
        using UsStateTBLOnMsgProc12_clbk = void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*, UsStateTBLOnMsgProc12_ptr);
        using UsStateTBLSetCallFunction14_ptr = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*));
        using UsStateTBLSetCallFunction14_clbk = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, unsigned int, void*), UsStateTBLSetCallFunction14_ptr);
        using UsStateTBLSetExternCallFunction16_ptr = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int));
        using UsStateTBLSetExternCallFunction16_clbk = void (WINAPIV*)(struct UsStateTBL*, void (WINAPIV*)(struct Us_HFSM*, unsigned int, void*, int), UsStateTBLSetExternCallFunction16_ptr);
        using UsStateTBLSetHFSM18_ptr = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*, void*);
        using UsStateTBLSetHFSM18_clbk = int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*, void*, UsStateTBLSetHFSM18_ptr);
        using UsStateTBLSetHFSMNode20_ptr = void (WINAPIV*)(struct UsStateTBL*, int, unsigned int, unsigned int, int, int);
        using UsStateTBLSetHFSMNode20_clbk = void (WINAPIV*)(struct UsStateTBL*, int, unsigned int, unsigned int, int, int, UsStateTBLSetHFSMNode20_ptr);
        using UsStateTBLSetInitFunction22_ptr = void (WINAPIV*)(struct UsStateTBL*, int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*));
        using UsStateTBLSetInitFunction22_clbk = void (WINAPIV*)(struct UsStateTBL*, int (WINAPIV*)(struct UsStateTBL*, struct Us_HFSM*), UsStateTBLSetInitFunction22_ptr);
        using UsStateTBLctor_UsStateTBL24_ptr = void (WINAPIV*)(struct UsStateTBL*);
        using UsStateTBLctor_UsStateTBL24_clbk = void (WINAPIV*)(struct UsStateTBL*, UsStateTBLctor_UsStateTBL24_ptr);
        using UsStateTBLdtor_UsStateTBL29_ptr = void (WINAPIV*)(struct UsStateTBL*);
        using UsStateTBLdtor_UsStateTBL29_clbk = void (WINAPIV*)(struct UsStateTBL*, UsStateTBLdtor_UsStateTBL29_ptr);
        
        using UsStateTBL___TBLDataInit2_ptr = void (WINAPIV*)(struct UsStateTBL::_TBLData*);
        using UsStateTBL___TBLDataInit2_clbk = void (WINAPIV*)(struct UsStateTBL::_TBLData*, UsStateTBL___TBLDataInit2_ptr);
        using UsStateTBL___TBLDatactor__TBLData4_ptr = void (WINAPIV*)(struct UsStateTBL::_TBLData*);
        using UsStateTBL___TBLDatactor__TBLData4_clbk = void (WINAPIV*)(struct UsStateTBL::_TBLData*, UsStateTBL___TBLDatactor__TBLData4_ptr);
        
        using UsStateTBL___HFSM_Node_InfoInit2_ptr = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*);
        using UsStateTBL___HFSM_Node_InfoInit2_clbk = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*, UsStateTBL___HFSM_Node_InfoInit2_ptr);
        using UsStateTBL___HFSM_Node_Infoctor__HFSM_Node_Info4_ptr = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*);
        using UsStateTBL___HFSM_Node_Infoctor__HFSM_Node_Info4_clbk = void (WINAPIV*)(struct UsStateTBL::_HFSM_Node_Info*, UsStateTBL___HFSM_Node_Infoctor__HFSM_Node_Info4_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE