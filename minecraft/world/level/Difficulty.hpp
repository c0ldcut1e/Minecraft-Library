#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class Difficulty
    {
    public:
        Difficulty(int id, int key)
        {
            MLINK_FUNC(void, 0x0229EE28, Difficulty *, int, int)(this, id, key);
        }

        int getId()
        {
            return MLINK_FUNC(int, 0x0228DEB8, Difficulty *)(this);
        }

        int getKey()
        {
            return MLINK_FUNC(int, 0x0229EEB0, Difficulty *)(this);
        }

        int id;
        int key;
    };
    MC_CHECK_SIZE(Difficulty, 0x8);
} // namespace mc
