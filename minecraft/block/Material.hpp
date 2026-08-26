#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MaterialColor.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class Material
    {
    public:
        Material(const MaterialColor *color)
        {
            MLINK_FUNC(void, 0x0253B6C8, Material *, const MaterialColor *)(this, color);
        }

        ~Material()
        {
            MLINK_FUNC(void, 0x026022F4, Material *, uint32_t)(this, 0);
        }

        static void staticCtor()
        {
            MLINK_FUNC(void, 0x0253B7A8)();
        }

        Material *replaceable()
        {
            return MLINK_FUNC(Material *, 0x0253B748, Material *)(this);
        }

        Material *flammable()
        {
            return MLINK_FUNC(Material *, 0x0253B754, Material *)(this);
        }

        Material *notAlwaysDestroyable()
        {
            return MLINK_FUNC(Material *, 0x0253B760, Material *)(this);
        }

        Material *notPushable()
        {
            return MLINK_FUNC(Material *, 0x0253B76C, Material *)(this);
        }

        Material *underWater()
        {
            return MLINK_FUNC(Material *, 0x0253B778, Material *)(this);
        }

        Material *destroyOnPush()
        {
            return MLINK_FUNC(Material *, 0x0253B784, Material *)(this);
        }

        Material *makeDestroyedByHand()
        {
            return MLINK_FUNC(Material *, 0x0253B790, Material *)(this);
        }

        Material *neverBuildable()
        {
            return MLINK_FUNC(Material *, 0x0253B79C, Material *)(this);
        }

        bool isLiquid()
        {
            return MLINK_FUNC(bool, 0x0253C32C, Material *)(this);
        }

        bool letsWaterThrough()
        {
            return MLINK_FUNC(bool, 0x0253C334, Material *)(this);
        }

        bool isSolid()
        {
            return MLINK_FUNC(bool, 0x0253C3A4, Material *)(this);
        }

        bool blocksLight()
        {
            return MLINK_FUNC(bool, 0x0253C3AC, Material *)(this);
        }

        bool blocksMotion()
        {
            return MLINK_FUNC(bool, 0x0253C3B4, Material *)(this);
        }

        bool isFlammable()
        {
            return MLINK_FUNC(bool, 0x0253C3BC, Material *)(this);
        }

        bool isReplaceable()
        {
            return MLINK_FUNC(bool, 0x0253C3C4, Material *)(this);
        }

        bool isUnderWater()
        {
            return MLINK_FUNC(bool, 0x0253C3CC, Material *)(this);
        }

        bool isSolidBlocking()
        {
            return MLINK_FUNC(bool, 0x0253C3D4, Material *)(this);
        }

        bool isAlwaysDestroyable()
        {
            return MLINK_FUNC(bool, 0x0253C3F8, Material *)(this);
        }

        bool isDestroyedByHand()
        {
            return MLINK_FUNC(bool, 0x0253C408, Material *)(this);
        }

        const MaterialColor *getColor()
        {
            return MLINK_FUNC(const MaterialColor *, 0x0253C410, Material *)(this);
        }

        bool isFlammable_;
        bool isReplaceable_;
        bool isNeverBuildable;
        uint8_t field_0x3;
        const MaterialColor *color;
        uint32_t field_0x8;
        uint32_t pushReaction;
        bool canBeDestroyedByHand;
        bool isUnderWater_;
        uint8_t field_0x12;
        uint8_t field_0x13;
        uint32_t *vtable;
    };
    MC_CHECK_SIZE(Material, 0x18);
} // namespace mc
