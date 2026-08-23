#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundSetExperiencePacket : public Packet
    {
    public:
        ClientboundSetExperiencePacket(float progress, int totalExperience, int level)
        {
            MLINK_FUNC(void, 0x02220A40, ClientboundSetExperiencePacket *, float, int, int)(this, progress, totalExperience, level);
        }

        uint32_t field_0x10;
        uint32_t field_0x14;
        float progress;
        uint32_t totalExperience;
        uint32_t level;
    };
    MC_CHECK_SIZE(ClientboundSetExperiencePacket, 0x28);
} // namespace mc
