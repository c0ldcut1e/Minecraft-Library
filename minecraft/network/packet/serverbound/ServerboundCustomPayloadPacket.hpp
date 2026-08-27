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

    class ServerboundCustomPayloadPacket : public Packet, public mboost::enable_shared_from_this<ServerboundCustomPayloadPacket>
    {
    public:
        ServerboundCustomPayloadPacket()
        {
            MLINK_FUNC(void, 0x028ABA0C, ServerboundCustomPayloadPacket *)(this);
        }

        ServerboundCustomPayloadPacket(const mstd::basic_string<wchar_t> &identifierValue, ArrayWithLength<uint8_t> dataValue)
        {
            MLINK_FUNC(void, 0x028ABBCC, ServerboundCustomPayloadPacket *, const mstd::basic_string<wchar_t> &,
                       ArrayWithLength<uint8_t>)(this, identifierValue, dataValue);
        }

        ~ServerboundCustomPayloadPacket()
        {
            MLINK_FUNC(void, 0x028ABAC8, ServerboundCustomPayloadPacket *, uint32_t)(this, 0);
        }

        static mboost::shared_ptr<Packet> create()
        {
            return MLINK_FUNC(mboost::shared_ptr<Packet>, 0x027C97D8)();
        }

        int getPacketId()
        {
            return MLINK_FUNC(int, 0x028D005C, ServerboundCustomPayloadPacket *)(this);
        }

        void read(DataInputStream *input)
        {
            MLINK_FUNC(void, 0x028ABCD0, ServerboundCustomPayloadPacket *, DataInputStream *)(this, input);
        }

        void write(DataOutputStream *output)
        {
            MLINK_FUNC(void, 0x028ABE70, ServerboundCustomPayloadPacket *, DataOutputStream *)(this, output);
        }

        void handle(PacketListener *listener)
        {
            MLINK_FUNC(void, 0x028ABF04, ServerboundCustomPayloadPacket *, PacketListener *)(this, listener);
        }

        mstd::basic_string<wchar_t> getIdentifier()
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x028AC0F0, ServerboundCustomPayloadPacket *)(this);
        }

        ArrayWithLength<uint8_t> getData()
        {
            return MLINK_FUNC(ArrayWithLength<uint8_t>, 0x028AC168, ServerboundCustomPayloadPacket *)(this);
        }

        mstd::basic_string<wchar_t> identifier;
        ArrayWithLength<uint8_t> data;
    };
    MC_CHECK_SIZE(ServerboundCustomPayloadPacket, 0x40);
} // namespace mc
