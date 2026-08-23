#pragma once

#include <cstdint>

namespace mc
{
    enum EBiomeId : uint8_t
    {
        UNK_0         = 0,
        PLAINS        = 1,
        DESERT_ACACIA = 2,
        TAIGA         = 3,
        UNK_4         = 4,
        UNK_5         = 5,
        SWAMP         = 6,
        UNK_7         = 7,
        HELL          = 8,
        END           = 9,
        TUNDRA        = 10,
        UNK_11        = 11,
        UNK_12        = 12,
        UNK_13        = 13,
        JUNGLE        = 14
    }; // Theres more than just 14 but I couldn't figure out what any above 14 are so I left them out
}
