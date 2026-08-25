#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundSetExperiencePacket : public Packet, public mboost::enable_shared_from_this<ClientboundSetExperiencePacket>
    {
    public:
        ClientboundSetExperiencePacket(float progress, int totalExperience, int level)
        {
            MLINK_FUNC(void, 0x02220A40, ClientboundSetExperiencePacket *, float, int, int)(this, progress, totalExperience, level);
        }

        float progress;
        uint32_t totalExperience;
        uint32_t level;
    };
    MC_CHECK_SIZE(ClientboundSetExperiencePacket, 0x24);
} // namespace mc
