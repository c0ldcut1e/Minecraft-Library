#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"
#include "world/Level.hpp"

namespace mc
{
    class EyeOfEnderSignal : public Entity
    {
    public:
        EyeOfEnderSignal(Level *level)
        {
            MLINK_FUNC(EyeOfEnderSignal *, 0x023AB55C, EyeOfEnderSignal *, Level *)(this, level);
        }

        EyeOfEnderSignal(Level *level, double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(EyeOfEnderSignal *, 0x0236D61C, EyeOfEnderSignal *, Level *, double, double, double)(this, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, EyeOfEnderSignal *signal)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308A3F0, mboost::shared_ptr<Entity> *, EyeOfEnderSignal *)(out, signal);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x023E6FB0)();
        }

        void signalTo(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x0236D750, EyeOfEnderSignal *, const BlockPos *)(this, &pos);
        }

        bool shouldRenderAtSqrDistance(double distance)
        {
            return MLINK_FUNC(bool, 0x023BF84C, EyeOfEnderSignal *, double)(this, distance);
        }

        void lerpMotion(double x, double y, double z)
        {
            MLINK_FUNC(void, 0x023BF8E0, EyeOfEnderSignal *, double, double, double)(this, x, y, z);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x023BFA08, EyeOfEnderSignal *)(this);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x023C0988, EyeOfEnderSignal *, CompoundTag *)(this, tag);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x023C098C, EyeOfEnderSignal *, CompoundTag *)(this, tag);
        }

        float getBrightness()
        {
            return MLINK_FUNC(float, 0x023C0990, EyeOfEnderSignal *)(this);
        }

        int getLightColor()
        {
            return MLINK_FUNC(int, 0x023C099C, EyeOfEnderSignal *)(this);
        }

        bool isAttackable()
        {
            return MLINK_FUNC(bool, 0x023C09A8, EyeOfEnderSignal *)(this);
        }

        uint32_t field_0x350;
        double targetX;
        double targetY;
        double targetZ;
        int life;
        bool surviveAfterDeath;
        uint8_t field_0x375;
        uint8_t field_0x376;
        uint8_t field_0x377;
    };
    MC_CHECK_SIZE(EyeOfEnderSignal, 0x378);
} // namespace mc
