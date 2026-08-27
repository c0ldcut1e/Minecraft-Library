#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class PacketListener;

    class ClientboundCustomPayloadPacket : public Packet, public mboost::enable_shared_from_this<ClientboundCustomPayloadPacket>
    {
    public:
        ClientboundCustomPayloadPacket()
        {
            MLINK_FUNC(void, 0x021E032C, ClientboundCustomPayloadPacket *)(this);
        }

        ClientboundCustomPayloadPacket(const mstd::basic_string<wchar_t> &identifierValue, ArrayWithLength<uint8_t> dataValue)
        {
            MLINK_FUNC(void, 0x021E03E8, ClientboundCustomPayloadPacket *, const mstd::basic_string<wchar_t> &,
                       ArrayWithLength<uint8_t>)(this, identifierValue, dataValue);
        }

        ~ClientboundCustomPayloadPacket()
        {
            MLINK_FUNC(void, 0x021E0500, ClientboundCustomPayloadPacket *, uint32_t)(this, 0);
        }

        static mboost::shared_ptr<Packet> create()
        {
            return MLINK_FUNC(mboost::shared_ptr<Packet>, 0x027CC2B4)();
        }

        int getPacketId()
        {
            return MLINK_FUNC(int, 0x02206B34, ClientboundCustomPayloadPacket *)(this);
        }

        void read(DataInputStream *input)
        {
            MLINK_FUNC(void, 0x021E0604, ClientboundCustomPayloadPacket *, DataInputStream *)(this, input);
        }

        void write(DataOutputStream *output)
        {
            MLINK_FUNC(void, 0x021E07A0, ClientboundCustomPayloadPacket *, DataOutputStream *)(this, output);
        }

        void handle(PacketListener *listener)
        {
            MLINK_FUNC(void, 0x021E0834, ClientboundCustomPayloadPacket *, PacketListener *)(this, listener);
        }

        int getEstimatedSize()
        {
            return MLINK_FUNC(int, 0x021E0A20, ClientboundCustomPayloadPacket *)(this);
        }

        mstd::basic_string<wchar_t> getIdentifier()
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x021E0A38, ClientboundCustomPayloadPacket *)(this);
        }

        ArrayWithLength<uint8_t> getData()
        {
            return MLINK_FUNC(ArrayWithLength<uint8_t>, 0x021E0AB0, ClientboundCustomPayloadPacket *)(this);
        }

        mstd::basic_string<wchar_t> identifier;
        ArrayWithLength<uint8_t> data;
        uint32_t length;
    };
    MC_CHECK_SIZE(ClientboundCustomPayloadPacket, 0x44);
} // namespace mc
