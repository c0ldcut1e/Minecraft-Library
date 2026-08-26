#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/projectile/ThrowableProjectile.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ThrownExpBottle : public ThrowableProjectile
    {
    public:
        ThrownExpBottle(Level *level)
        {
            MLINK_FUNC(ThrownExpBottle *, 0x029F39D4, ThrownExpBottle *, Level *)(this, level);
        }

        ThrownExpBottle(Level *level, const mboost::shared_ptr<LivingEntity> &owner)
        {
            MLINK_FUNC(ThrownExpBottle *, 0x029F3A7C, ThrownExpBottle *, Level *, const mboost::shared_ptr<LivingEntity> &)(this, level, owner);
        }

        ThrownExpBottle(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(ThrownExpBottle *, 0x029F3BE4, ThrownExpBottle *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ThrownExpBottle *bottle)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308B9E4, mboost::shared_ptr<Entity> *, ThrownExpBottle *)(out, bottle);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A130E8)();
        }
    };
    MC_CHECK_SIZE(ThrownExpBottle, 0x3A8);
} // namespace mc
