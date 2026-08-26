#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "network/listener/PacketListener.hpp"
#include "network/packet/Packet.hpp"
#include "sound/SoundEvent.hpp"
#include "sound/SoundSource.hpp"

namespace mc
{
    class PacketListener;

    class ClientboundSoundPacket : public Packet
    {
    public:
        enum ESoundInstances : int
        {
            eSoundInstances_None               = -1,
            eSoundInstances_FollowLocalPlayer  = 0,
            eSoundInstances_FollowEntityPlayer = 1,
        };

        ClientboundSoundPacket()
        {
            MLINK_FUNC(void, 0x02228F88, ClientboundSoundPacket *)(this);
        }

        ClientboundSoundPacket(const SoundEvent *sound, SoundSource::ESoundSource source, double xPos, double yPos, double zPos, float volume,
                               float pitch)
        {
            MLINK_FUNC(void, 0x02229070, ClientboundSoundPacket *, const SoundEvent *, SoundSource::ESoundSource, double, double, double, float,
                       float)(this, sound, source, xPos, yPos, zPos, volume, pitch);
        }

        ClientboundSoundPacket(const SoundEvent *sound, float volume, float pitch)
        {
            MLINK_FUNC(void, 0x02229214, ClientboundSoundPacket *, const SoundEvent *, float, float)(this, sound, volume, pitch);
        }

        ClientboundSoundPacket(ESoundInstances soundInstance, const SoundEvent *sound, float volume, float pitch, bool looping, int entityId)
        {
            MLINK_FUNC(void, 0x0222931C, ClientboundSoundPacket *, ESoundInstances, const SoundEvent *, float, float, bool,
                       int)(this, soundInstance, sound, volume, pitch, looping, entityId);
        }

        ~ClientboundSoundPacket()
        {
            MLINK_FUNC(void, 0x022815B4, ClientboundSoundPacket *, uint32_t)(this, 0);
        }

        int GetEntityId()
        {
            return MLINK_FUNC(int, 0x02229AC0, ClientboundSoundPacket *)(this);
        }

        int GetEstimatedSize()
        {
            return MLINK_FUNC(int, 0x02229CC4, ClientboundSoundPacket *)(this);
        }

        bool GetLooping()
        {
            return MLINK_FUNC(bool, 0x02229AC8, ClientboundSoundPacket *)(this);
        }

        int GetPacketId()
        {
            return MLINK_FUNC(int, 0x022815AC, ClientboundSoundPacket *)(this);
        }

        float GetPitch()
        {
            return MLINK_FUNC(float, 0x02229AB0, ClientboundSoundPacket *)(this);
        }

        bool GetPlayUi()
        {
            return MLINK_FUNC(bool, 0x02229AB8, ClientboundSoundPacket *)(this);
        }

        const SoundEvent *GetSound()
        {
            return MLINK_FUNC(const SoundEvent *, 0x022299D8, ClientboundSoundPacket *)(this);
        }

        ESoundInstances GetSoundInstance()
        {
            return MLINK_FUNC(ESoundInstances, 0x02229AD0, ClientboundSoundPacket *)(this);
        }

        SoundSource::ESoundSource GetSource()
        {
            return MLINK_FUNC(SoundSource::ESoundSource, 0x022299E0, ClientboundSoundPacket *)(this);
        }

        float GetVolume()
        {
            return MLINK_FUNC(float, 0x02229AA8, ClientboundSoundPacket *)(this);
        }

        double GetX()
        {
            return MLINK_FUNC(double, 0x022299E8, ClientboundSoundPacket *)(this);
        }

        double GetY()
        {
            return MLINK_FUNC(double, 0x02229A28, ClientboundSoundPacket *)(this);
        }

        double GetZ()
        {
            return MLINK_FUNC(double, 0x02229A68, ClientboundSoundPacket *)(this);
        }

        void Handle(PacketListener *listener)
        {
            MLINK_FUNC(void, 0x02229AD8, ClientboundSoundPacket *, PacketListener *)(this, listener);
        }

        void Read(DataInputStream *input)
        {
            MLINK_FUNC(void, 0x02229594, ClientboundSoundPacket *, DataInputStream *)(this, input);
        }

        void Write(DataOutputStream *output)
        {
            MLINK_FUNC(void, 0x02229868, ClientboundSoundPacket *, DataOutputStream *)(this, output);
        }

        uint32_t weakThisObject;
        uint32_t weakThisCount;
        const SoundEvent *sound;
        SoundSource::ESoundSource source;
        int x;
        int y;
        int z;
        float volume;
        float pitch;
        bool playUi;
        bool looping;
        uint8_t field_0x36;
        uint8_t field_0x37;
        ESoundInstances soundInstance;
        int entityId;
    };
    MC_CHECK_SIZE(ClientboundSoundPacket, 0x40);
} // namespace mc
