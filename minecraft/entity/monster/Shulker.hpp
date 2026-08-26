#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Shulker : public Monster
    {
    public:
        Shulker(Level *level)
        {
            MLINK_FUNC(void, 0x028BC7B8, Shulker *, Level *)(this, level);
        }

        static Shulker *Create(Level *level)
        {
            return MLINK_FUNC(Shulker *, 0x023E5A74, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x028D1028)();
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x028BCC44, Shulker *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x028BCF30, Shulker *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x028BD0D4, Shulker *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x028BDE70, Shulker *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x028BF9D0, Shulker *)(this);
        }

        float field_0x730;
        float field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
    };
    MC_CHECK_SIZE(Shulker, 0x740);
} // namespace mc
