#include <CDarkHoleDungeonQuestSetupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_ptr CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_next(nullptr);
        Info::CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_clbk CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetupGetErrorMsg4_ptr CDarkHoleDungeonQuestSetupGetErrorMsg4_next(nullptr);
        Info::CDarkHoleDungeonQuestSetupGetErrorMsg4_clbk CDarkHoleDungeonQuestSetupGetErrorMsg4_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_ptr CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_next(nullptr);
        Info::CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_clbk CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetupSetupQuest8_ptr CDarkHoleDungeonQuestSetupSetupQuest8_next(nullptr);
        Info::CDarkHoleDungeonQuestSetupSetupQuest8_clbk CDarkHoleDungeonQuestSetupSetupQuest8_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_ptr CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_clbk CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_ptr CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_clbk CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_ptr CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_clbk CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_ptr CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_clbk CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_ptr CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_clbk CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_ptr CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_clbk CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_user(nullptr);
        
        Info::CDarkHoleDungeonQuestSetup_LastCheckScipt22_ptr CDarkHoleDungeonQuestSetup_LastCheckScipt22_next(nullptr);
        Info::CDarkHoleDungeonQuestSetup_LastCheckScipt22_clbk CDarkHoleDungeonQuestSetup_LastCheckScipt22_user(nullptr);
        
        
        Info::CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_ptr CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_next(nullptr);
        Info::CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_clbk CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_user(nullptr);
        
        
        void CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_wrapper(struct CDarkHoleDungeonQuestSetup* _this)
        {
           CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_user(_this, CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_next);
        };
        char* CDarkHoleDungeonQuestSetupGetErrorMsg4_wrapper(struct CDarkHoleDungeonQuestSetup* _this)
        {
           return CDarkHoleDungeonQuestSetupGetErrorMsg4_user(_this, CDarkHoleDungeonQuestSetupGetErrorMsg4_next);
        };
        struct _dh_quest_setup* CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_wrapper(struct CDarkHoleDungeonQuestSetup* _this, unsigned int dwQuestIndex)
        {
           return CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_user(_this, dwQuestIndex, CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_next);
        };
        bool CDarkHoleDungeonQuestSetupSetupQuest8_wrapper(struct CDarkHoleDungeonQuestSetup* _this, char* pszQuestFileName)
        {
           return CDarkHoleDungeonQuestSetupSetupQuest8_user(_this, pszQuestFileName, CDarkHoleDungeonQuestSetupSetupQuest8_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_next);
        };
        bool CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_wrapper(struct CDarkHoleDungeonQuestSetup* _this, struct strFILE* fstr)
        {
           return CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_user(_this, fstr, CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_next);
        };
        bool CDarkHoleDungeonQuestSetup_LastCheckScipt22_wrapper(struct CDarkHoleDungeonQuestSetup* _this, char* pszQuestFileName)
        {
           return CDarkHoleDungeonQuestSetup_LastCheckScipt22_user(_this, pszQuestFileName, CDarkHoleDungeonQuestSetup_LastCheckScipt22_next);
        };
        
        void CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_wrapper(struct CDarkHoleDungeonQuestSetup* _this)
        {
           CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_user(_this, CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_next);
        };
        
        ::std::array<hook_record, 12> CDarkHoleDungeonQuestSetup_functions = 
        {
            _hook_record {
                (LPVOID)0x14026f930L,
                (LPVOID *)&CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetupctor_CDarkHoleDungeonQuestSetup2_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHoleDungeonQuestSetup::*)())&CDarkHoleDungeonQuestSetup::ctor_CDarkHoleDungeonQuestSetup)
            },
            _hook_record {
                (LPVOID)0x14026fa00L,
                (LPVOID *)&CDarkHoleDungeonQuestSetupGetErrorMsg4_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetupGetErrorMsg4_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetupGetErrorMsg4_wrapper),
                (LPVOID)cast_pointer_function((char*(CDarkHoleDungeonQuestSetup::*)())&CDarkHoleDungeonQuestSetup::GetErrorMsg)
            },
            _hook_record {
                (LPVOID)0x1400994d0L,
                (LPVOID *)&CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetupGetQuestSetupPtr6_wrapper),
                (LPVOID)cast_pointer_function((struct _dh_quest_setup*(CDarkHoleDungeonQuestSetup::*)(unsigned int))&CDarkHoleDungeonQuestSetup::GetQuestSetupPtr)
            },
            _hook_record {
                (LPVOID)0x14026fa80L,
                (LPVOID *)&CDarkHoleDungeonQuestSetupSetupQuest8_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetupSetupQuest8_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetupSetupQuest8_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(char*))&CDarkHoleDungeonQuestSetup::SetupQuest)
            },
            _hook_record {
                (LPVOID)0x1402708d0L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Job_Condition10_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Job_Condition)
            },
            _hook_record {
                (LPVOID)0x140270360L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Job_Setting12_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Job_Setting)
            },
            _hook_record {
                (LPVOID)0x140270760L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Mission_Condition14_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Mission_Condition)
            },
            _hook_record {
                (LPVOID)0x1402700d0L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Mission_Setting16_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Mission_Setting)
            },
            _hook_record {
                (LPVOID)0x140270610L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Quest_Condition18_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Quest_Condition)
            },
            _hook_record {
                (LPVOID)0x14026fea0L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_Analysis_Quest_Setting20_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(struct strFILE*))&CDarkHoleDungeonQuestSetup::_Analysis_Quest_Setting)
            },
            _hook_record {
                (LPVOID)0x140270a20L,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_LastCheckScipt22_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetup_LastCheckScipt22_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetup_LastCheckScipt22_wrapper),
                (LPVOID)cast_pointer_function((bool(CDarkHoleDungeonQuestSetup::*)(char*))&CDarkHoleDungeonQuestSetup::_LastCheckScipt)
            },
            _hook_record {
                (LPVOID)0x14026f9e0L,
                (LPVOID *)&CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_user,
                (LPVOID *)&CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_next,
                (LPVOID)cast_pointer_function(CDarkHoleDungeonQuestSetupdtor_CDarkHoleDungeonQuestSetup27_wrapper),
                (LPVOID)cast_pointer_function((void(CDarkHoleDungeonQuestSetup::*)())&CDarkHoleDungeonQuestSetup::dtor_CDarkHoleDungeonQuestSetup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
