#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "PacketListener.hpp"
#include "Socket.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class PacketListener;

    class Connection
    {
    public:
        Connection(Socket *socket, const mstd::basic_string<wchar_t> &name, PacketListener *packetListener)
        {
            MLINK_FUNC(void, 0x02230548, Connection *, Socket *, const mstd::basic_string<wchar_t> &, PacketListener *)(this, socket, name,
                                                                                                                        packetListener);
        }

        void flush()
        {
            MLINK_FUNC(void, 0x02230C3C, Connection *)(this);
        }

        void send(const mboost::shared_ptr<Packet> &packet)
        {
            MLINK_FUNC(void, 0x02230920, Connection *, mboost::shared_ptr<Packet>)(this, packet);
        }

        void setListener(PacketListener *packetListener)
        {
            MLINK_FUNC(void, 0x02230918, Connection *, PacketListener *)(this, packetListener);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02230F7C, Connection *)(this);
        }

        Socket *socket;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t packetDelayMilliseconds;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
        uint32_t field_0x150;
        uint32_t field_0x154;
    };
    MC_CHECK_SIZE(Connection, 0x158);
} // namespace mc
