#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/projectile/Fireball.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/HitResult.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class WitherSkull : public Fireball
    {
    public:
        WitherSkull(Level *level)
        {
            MLINK_FUNC(WitherSkull *, 0x02AA2730, WitherSkull *, Level *)(this, level);
        }

        WitherSkull(Level *level, const mboost::shared_ptr<LivingEntity> &owner, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(WitherSkull *, 0x02AA27EC, WitherSkull *, Level *, const mboost::shared_ptr<LivingEntity> &, double, double,
                       double)(this, level, owner, xPower, yPower, zPower);
        }

        WitherSkull(Level *level, double xPos, double yPos, double zPos, double xPower, double yPower, double zPower)
        {
            MLINK_FUNC(WitherSkull *, 0x02AA29C0, WitherSkull *, Level *, double, double, double, double, double,
                       double)(this, level, xPos, yPos, zPos, xPower, yPower, zPower);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, WitherSkull *witherSkull)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308CF8C, mboost::shared_ptr<Entity> *, WitherSkull *)(out, witherSkull);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02AD0E50)();
        }

        bool isOnFire()
        {
            return MLINK_FUNC(bool, 0x02AA2B28, WitherSkull *)(this);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x02AA2CC0, WitherSkull *)(this);
        }

        bool isDangerous()
        {
            return MLINK_FUNC(bool, 0x02AA2CD0, WitherSkull *)(this);
        }

        void setDangerous(bool dangerous)
        {
            MLINK_FUNC(void, 0x02AA2D50, WitherSkull *, bool)(this, dangerous);
        }

        float getInertia()
        {
            return MLINK_FUNC(float, 0x02AA2DE0, WitherSkull *)(this);
        }

        void onHit(const HitResult *hitResult)
        {
            MLINK_FUNC(void, 0x02AA2E50, WitherSkull *, const HitResult *)(this, hitResult);
        }

        bool shouldBurn()
        {
            return MLINK_FUNC(bool, 0x02AA3770, WitherSkull *)(this);
        }
    };
    MC_CHECK_SIZE(WitherSkull, 0x378);
} // namespace mc
