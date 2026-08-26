#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class LevelSource
    {
    public:
        ~LevelSource()
        {
            MLINK_FUNC(void, 0x02602534, LevelSource *, uint32_t)(this, 0);
        }

        uint32_t vtable;
    };
    MC_CHECK_SIZE(LevelSource, 0x4);
} // namespace mc
