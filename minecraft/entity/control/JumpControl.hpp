#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Mob.hpp"

namespace mc
{
    class JumpControl
    {
    public:
        JumpControl(Mob *mob)
        {
            MLINK_FUNC(void, 0x0250ADEC, JumpControl *, Mob *)(this, mob);
        }

        void jump()
        {
            MLINK_FUNC(void, 0x0250AE50, JumpControl *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0250AE5C, JumpControl *)(this);
        }

        Mob *mob;
        bool jumpRequested;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t field_0x7;
        void *vtable;
    };
    MC_CHECK_SIZE(JumpControl, 0xC);
} // namespace mc
