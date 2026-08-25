#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Packet.hpp"
#include "internal/enable_shared_from_this.hpp"

namespace mc
{
    class LevelSoundPacket : public Packet, public mboost::enable_shared_from_this<LevelSoundPacket>
    {
    public:
        enum ESound
        {
            mob_wolf_howl = 467
        };

        LevelSoundPacket(int soundId, double xPos, double yPos, double zPos, float volume, float pitch)
        {
            MLINK_FUNC(void, 0x02B1A7F4, LevelSoundPacket *, int, double, double, double, float, float)(this, soundId, xPos, yPos, zPos, volume,
                                                                                                        pitch);
        }

        int soundId;
        int x;
        int y;
        int z;
        float volume;
        float pitch;
    };
    MC_CHECK_SIZE(LevelSoundPacket, 0x30);
} // namespace mc
