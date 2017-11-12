#pragma once

#include <cstdint>
#include <unordered_map>
#include <unordered_set>

#include <vector>
#include "..\Common\Helpers\TimeHelper.hpp"

namespace GameServer
{
    namespace Extension
    {
        namespace detail
        {
            union _set_item_info
            {
                struct
                {
                    uint32_t dwSetItem;
                    uint8_t  bySetItemNum;
                    uint8_t  bySetEffectNum;
                } info;

                uint64_t value;

                _set_item_info()
                    : value(0)
                {
                }

                bool operator<(const _set_item_info& rhs) const
                {
                    return (value < rhs.value);
                }
            };

            class hashing_func {
            public:
                uint64_t operator()(const _set_item_info &obj) const
                {
                    return obj.value;
                }
            };

            class key_equal_fn {
            public:
                bool operator()(const _set_item_info& t1, const _set_item_info& t2) const
                {
                    return (t1.value == t2.value);
                }
            };

            struct _set_item_action
            {
                uint8_t code_result;
                _STD chrono::time_point<_STD chrono::steady_clock> action_added;

                bool is_due(
                    const _STD chrono::time_point<_STD chrono::steady_clock>& current_time) const
                {
                    return _STD chrono::duration_cast<_STD chrono::minutes>(current_time - action_added) > _STD chrono::minutes(1);
                }
            };
            using ContainerSetItemInfo_t = _STD unordered_set<_set_item_info, hashing_func, key_equal_fn>;
            using ContainerSetItemAction_t = _STD unordered_map<_set_item_info, _set_item_action, hashing_func, key_equal_fn>;
        }

        namespace detail
        {
            struct _attack_delay
            {
                TimeHelper::CTimer unit;
                TimeHelper::CTimer siege;
                TimeHelper::CTimer normal;
                mutable _STD unordered_map<int, TimeHelper::CTimer> class_skill[3];
                TimeHelper::CTimer force[6][4];
                TimeHelper::CTimer skill[4][4];

                void reset()
                {
                    unit.abort();
                    siege.abort();
                    normal.abort();
                    for (auto& i : force)
                    {
                        for (auto& j : i)
                            j.abort();
                    }

                    for (auto& i : class_skill)
                    {
                        i.swap(_STD unordered_map<int, TimeHelper::CTimer>{});
                    }

                    for (auto& i : skill)
                    {
                        for (auto& j : i)
                            j.abort();
                    }
                }
            };

            struct _move_info
            {
                _STD chrono::time_point<_STD chrono::steady_clock> m_tpLastMove;
                TimeHelper::CTimer m_timerWarning;
                float m_fLastSpeed;
                int m_nCountMove;
                int m_nCountWarning;

                void reset()
                {
                    m_nCountMove = 0;
                    m_nCountWarning = 0;
                    m_tpLastMove = _STD chrono::high_resolution_clock::now();
                    m_timerWarning.abort();
                }
            };
        }
    }
}
