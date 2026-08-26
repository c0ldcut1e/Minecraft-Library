#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"

namespace mc
{
    class MultiEntityMobPart : public Entity
    {
    public:
        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x026C893C)();
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x026AC0E4, MultiEntityMobPart *)(this);
        }

        bool isPickable()
        {
            return MLINK_FUNC(bool, 0x026AC2D8, MultiEntityMobPart *)(this);
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
    };
    MC_CHECK_SIZE(MultiEntityMobPart, 0x378);
} // namespace mc
