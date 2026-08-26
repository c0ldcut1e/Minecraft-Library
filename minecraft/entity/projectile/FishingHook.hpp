#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class FishingHook : public Entity
    {
    public:
        FishingHook(Level *level, const mboost::shared_ptr<Player> &owner)
        {
            MLINK_FUNC(void, 0x02417444, FishingHook *, Level *, const mboost::shared_ptr<Player> &)(this, level, owner);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0246D1A0)();
        }

        void setLureSpeed(int lureSpeed)
        {
            MLINK_FUNC(void, 0x02417578, FishingHook *, int)(this, lureSpeed);
        }

        void setLuck(int luck)
        {
            MLINK_FUNC(void, 0x02417580, FishingHook *, int)(this, luck);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0241C414, FishingHook *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0241E5E0, FishingHook *)(this);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
    };
    MC_CHECK_SIZE(FishingHook, 0x388);
} // namespace mc
