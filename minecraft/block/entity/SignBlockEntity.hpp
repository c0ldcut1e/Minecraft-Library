#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "BlockEntity.hpp"
#include "MinecraftLib.hpp"
#include "entity/player/Player.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "network/packet/Packet.hpp"

namespace mc
{
    class SignBlockEntity : public BlockEntity
    {
    public:
        static uint64_t getType()
        {
            return MLINK_FUNC(uint64_t, 0x0297BF48)();
        }

        bool executeClickCommands(const mboost::shared_ptr<Player> &player)
        {
            return MLINK_FUNC(bool, 0x02915610, SignBlockEntity *, mboost::shared_ptr<Player>)(this, player);
        }

        const mboost::shared_ptr<Packet> &getUpdatePacket()
        {
            return MLINK_FUNC(const mboost::shared_ptr<Packet> &, 0x029144B8, SignBlockEntity *)(this);
        }

        void SetMessage(int index, const mstd::basic_string<wchar_t> &message)
        {
            MLINK_FUNC(void, 0x02913680, SignBlockEntity *, int, const mstd::basic_string<wchar_t> &)(this, index, message);
        }

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
    };
    MC_CHECK_SIZE(SignBlockEntity, 0xD0);
} // namespace mc
