#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "entity/Entity.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "internal/shared_ptr.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "network/listener/PacketListener.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class ClientboundSetPassengersPacket : public Packet, public mboost::enable_shared_from_this<ClientboundSetPassengersPacket>
    {
    public:
        ClientboundSetPassengersPacket()
        {
            MLINK_FUNC(void, 0x022213A4, ClientboundSetPassengersPacket *)(this);
        }

        ClientboundSetPassengersPacket(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x022215A0, ClientboundSetPassengersPacket *, mboost::shared_ptr<Entity>)(this, entity);
        }
        ~ClientboundSetPassengersPacket()
        {
            MLINK_FUNC(void, 0x02221450, ClientboundSetPassengersPacket *, uint32_t)(this, 0);
        }

        int GetPacketId()
        {
            return MLINK_FUNC(int, 0x02280F28, ClientboundSetPassengersPacket *)(this);
        }

        ArrayWithLength<int> GetPassengers()
        {
            return MLINK_FUNC(ArrayWithLength<int>, 0x02221C8C, ClientboundSetPassengersPacket *)(this);
        }

        int GetVehicle()
        {
            return MLINK_FUNC(int, 0x02221CB0, ClientboundSetPassengersPacket *)(this);
        }

        void Handle(PacketListener *listener)
        {
            MLINK_FUNC(void, 0x02221AA0, ClientboundSetPassengersPacket *, PacketListener *)(this, listener);
        }

        void Read(DataInputStream *input)
        {
            MLINK_FUNC(void, 0x022219B4, ClientboundSetPassengersPacket *, DataInputStream *)(this, input);
        }

        void Write(DataOutputStream *output)
        {
            MLINK_FUNC(void, 0x02221A2C, ClientboundSetPassengersPacket *, DataOutputStream *)(this, output);
        }

        int vehicle;
        ArrayWithLength<int> passengers;
        uint32_t field_0x24;
    };
    MC_CHECK_SIZE(ClientboundSetPassengersPacket, 0x28);
} // namespace mc
