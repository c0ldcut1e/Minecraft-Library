#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class ACTUuid
    {
    public:
        bool operator==(const ACTUuid &uuid) const
        {
            return MLINK_FUNC(bool, 0x034A2574, const ACTUuid *, const ACTUuid &)(this, uuid);
        }

        bool operator!=(const ACTUuid &uuid) const
        {
            return !(*this == uuid);
        }

        uint8_t uuid[0x10];
    };
    MC_CHECK_SIZE(ACTUuid, 0x10);
} // namespace mc
