#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class Player;

    class DamageSource
    {
    public:
        static DamageSource *CreatePlayerAttack(const mboost::shared_ptr<Player> &player)
        {
            return MLINK_FUNC(DamageSource *, 0x02252AC4, const mboost::shared_ptr<Player> &)(player);
        }

        static DamageSource *genericSource()
        {
            return MLink::DereferencePointerFromAddress<DamageSource>(0x104DAC38);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        bool bypassArmor;
        bool bypassInvul;
        bool bypassGraceInvul;
        bool bypassMagic;
        float foodExhaustion;
        bool fire;
        bool projectile;
        bool scalesWithDiffy;
        bool magic;
        bool explosion;
        bool fireProjectile;
        bool field_0x16;
        bool field_0x17;
        uint32_t vtable;
    };
    MC_CHECK_SIZE(DamageSource, 0x1C);
} // namespace mc
