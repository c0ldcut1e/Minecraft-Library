#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractHorse.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class SkeletonHorse : public AbstractHorse
    {
    public:
        SkeletonHorse(Level *level)
        {
            MLINK_FUNC(void, 0x0294AB84, SkeletonHorse *, Level *)(this, level);
        }

        static SkeletonHorse *Create(Level *level)
        {
            return MLINK_FUNC(SkeletonHorse *, 0x023E62F8, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0297D6A8)();
        }

        void setTrap(bool trap)
        {
            MLINK_FUNC(void, 0x0294996C, SkeletonHorse *, bool)(this, trap);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0294C0B8, SkeletonHorse *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x0294C294, SkeletonHorse *)(this);
        }

        uint32_t field_0x7F0;
        uint32_t field_0x7F4;
        uint32_t field_0x7F8;
        bool isTrap;
        uint8_t field_0x7FD;
        uint8_t field_0x7FE;
        uint8_t field_0x7FF;
        int trapTime;
        uint32_t field_0x804;
    };
    MC_CHECK_SIZE(SkeletonHorse, 0x808);
} // namespace mc
