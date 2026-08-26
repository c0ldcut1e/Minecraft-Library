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
    class ThrownEnderpearl : public ThrowableProjectile
    {
    public:
        ThrownEnderpearl(Level *level)
        {
            MLINK_FUNC(ThrownEnderpearl *, 0x029F1D40, ThrownEnderpearl *, Level *)(this, level);
        }

        ThrownEnderpearl(Level *level, const mboost::shared_ptr<LivingEntity> &owner)
        {
            MLINK_FUNC(ThrownEnderpearl *, 0x029F1E18, ThrownEnderpearl *, Level *, const mboost::shared_ptr<LivingEntity> &)(this, level, owner);
        }

        ThrownEnderpearl(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(ThrownEnderpearl *, 0x029F208C, ThrownEnderpearl *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, ThrownEnderpearl *enderpearl)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308A0D8, mboost::shared_ptr<Entity> *, ThrownEnderpearl *)(out, enderpearl);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02A12E88)();
        }

        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
    };
    MC_CHECK_SIZE(ThrownEnderpearl, 0x3B0);
} // namespace mc
