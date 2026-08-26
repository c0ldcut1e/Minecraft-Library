#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/ShoulderRidingEntity.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Parrot : public ShoulderRidingEntity
    {
    public:
        Parrot(Level *level)
        {
            MLINK_FUNC(void, 0x02787C14, Parrot *, Level *)(this, level);
        }

        static Parrot *Create(Level *level)
        {
            return MLINK_FUNC(Parrot *, 0x023E67DC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CFB5C)();
        }

        void setVariant(int variant)
        {
            MLINK_FUNC(void, 0x02787D50, Parrot *, int)(this, variant);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02787EE8, Parrot *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02788158, Parrot *)(this);
        }

        void calculateFlapping()
        {
            MLINK_FUNC(void, 0x02788300, Parrot *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02788458, Parrot *)(this);
        }

        bool isPartyParrot()
        {
            return MLINK_FUNC(bool, 0x027885CC, Parrot *)(this);
        }

        uint32_t field_0x790;
        uint32_t field_0x794;
        uint32_t field_0x798;
        uint32_t field_0x79C;
        uint32_t field_0x7A0;
        float field_0x7A4;
        uint32_t field_0x7A8;
        uint32_t field_0x7AC;
        uint32_t field_0x7B0;
        uint32_t field_0x7B4;
    };
    MC_CHECK_SIZE(Parrot, 0x7B8);
} // namespace mc
