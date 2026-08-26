#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Silverfish : public Monster
    {
    public:
        class SilverfishWakeUpFriendsGoal
        {
        public:
            void notifyHurt()
            {
                MLINK_FUNC(void, 0x029470BC, SilverfishWakeUpFriendsGoal *)(this);
            }

            void tick()
            {
                MLINK_FUNC(void, 0x0294760C, SilverfishWakeUpFriendsGoal *)(this);
            }

            uint32_t requiredControlFlags;
            uint32_t vtable;
            Silverfish *silverfish;
            int wakeUpCooldown;
        };
        MC_CHECK_SIZE(SilverfishWakeUpFriendsGoal, 0x10);

        Silverfish(Level *level)
        {
            MLINK_FUNC(void, 0x02946C30, Silverfish *, Level *)(this, level);
        }

        static Silverfish *Create(Level *level)
        {
            return MLINK_FUNC(Silverfish *, 0x023E65AC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297D3A8)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02946DD0, Silverfish *)(this);
        }

        float getRidingHeight()
        {
            return MLINK_FUNC(float, 0x02946F7C, Silverfish *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02946F88, Silverfish *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02946F94, Silverfish *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x029471E8, Silverfish *)(this);
        }

        bool isDarkEnoughToSpawn()
        {
            return MLINK_FUNC(bool, 0x0294733C, Silverfish *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x02947344, Silverfish *)(this);
        }

        SilverfishWakeUpFriendsGoal wakeUpFriendsGoal;
    };
    MC_CHECK_SIZE(Silverfish, 0x740);
} // namespace mc
