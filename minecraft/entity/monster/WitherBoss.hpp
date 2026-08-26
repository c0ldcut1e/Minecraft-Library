#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class WitherBoss : public Monster
    {
    public:
        WitherBoss(Level *level)
        {
            MLINK_FUNC(void, 0x02AACBD0, WitherBoss *, Level *)(this, level);
        }

        static WitherBoss *Create(Level *level)
        {
            return MLINK_FUNC(WitherBoss *, 0x023E65F4, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02AD1D98)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02AAC5CC, WitherBoss *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02AAC838, WitherBoss *)(this);
        }

        void setAerialAttack(bool aerialAttack)
        {
            MLINK_FUNC(void, 0x02AACB40, WitherBoss *, bool)(this, aerialAttack);
        }

        bool getAerialAttack()
        {
            return MLINK_FUNC(bool, 0x02AAD0AC, WitherBoss *)(this);
        }

        int getInvulnerableTicks()
        {
            return MLINK_FUNC(int, 0x02AAD740, WitherBoss *)(this);
        }

        void setInvulnerableTicks(int ticks)
        {
            MLINK_FUNC(void, 0x02AAD7C0, WitherBoss *, int)(this, ticks);
        }

        int getAlternativeTarget(int head)
        {
            return MLINK_FUNC(int, 0x02AAF468, WitherBoss *, int)(this, head);
        }

        bool isPowered()
        {
            return MLINK_FUNC(bool, 0x02AAF4F8, WitherBoss *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02AAFE94, WitherBoss *)(this);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x02AB4114, WitherBoss *)(this);
        }

        uint32_t field_0x730;
        uint32_t field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
        uint32_t field_0x740;
        uint32_t field_0x744;
        uint32_t field_0x748;
        uint32_t field_0x74C;
        uint32_t field_0x750;
        uint32_t field_0x754;
        uint32_t field_0x758;
        uint32_t field_0x75C;
        uint32_t field_0x760;
        uint32_t field_0x764;
        uint32_t field_0x768;
        uint32_t field_0x76C;
        uint32_t field_0x770;
        float field_0x774;
        uint32_t field_0x778;
        uint32_t field_0x77C;
        uint32_t field_0x780;
        uint32_t field_0x784;
        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint32_t field_0x790;
        uint32_t field_0x794;
        uint32_t field_0x798;
        uint32_t field_0x79C;
        uint32_t field_0x7A0;
        uint32_t field_0x7A4;
        uint32_t field_0x7A8;
        uint32_t field_0x7AC;
        uint32_t field_0x7B0;
        uint32_t field_0x7B4;
        uint32_t field_0x7B8;
        uint32_t field_0x7BC;
        uint32_t field_0x7C0;
        uint32_t field_0x7C4;
        uint32_t field_0x7C8;
        uint32_t field_0x7CC;
        uint32_t field_0x7D0;
        uint32_t field_0x7D4;
        uint32_t field_0x7D8;
        uint32_t field_0x7DC;
        uint32_t field_0x7E0;
        uint32_t field_0x7E4;
        uint32_t field_0x7E8;
        uint32_t field_0x7EC;
        uint32_t field_0x7F0;
        uint32_t field_0x7F4;
    };
    MC_CHECK_SIZE(WitherBoss, 0x7F8);
} // namespace mc
