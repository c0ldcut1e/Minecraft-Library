#pragma once

#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#include "INetworkPlayer.hpp"
#include "MinecraftLib.hpp"
#include "entity/player/PlayerUID.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    inline constexpr uint32_t kFakeNetworkPlayerVtable = 0x10352CA8;

    class Socket;

    class FakeNetworkPlayer : public INetworkPlayer
    {
    public:
        FakeNetworkPlayer() : vtable((VTable *) MLink::CorrectPointerOffset(kFakeNetworkPlayerVtable)), nameCapacity(7)
        {
            memset(this, 0, sizeof(FakeNetworkPlayer));
        }

        void Initialize(const wchar_t *nameValue, const PlayerUID &uidValue, uint8_t smallIdValue)
        {
            for (size_t index = 0; index < 7 && (nameValue[index] != 0); index++)
            {
                name[index] = nameValue[index];
                nameLength++;
            }

            uid     = uidValue;
            smallId = smallIdValue;
        }

        void SetSocket(Socket *socketValue)
        {
            MLINK_FUNC(void, 0x02D53B08, FakeNetworkPlayer *, Socket *)(this, socketValue);
        }

        VTable *vtable;
        Socket *socket;
        uint32_t field_0x8;
        uint32_t field_0xC;
        PlayerUID uid;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        wchar_t name[8];
        uint32_t field_0x4C;
        uint32_t nameLength;
        uint32_t nameCapacity{};
        uint8_t smallId;
        uint8_t field_0x59;
        uint8_t field_0x5A;
        uint8_t field_0x5B;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
    };
    MC_CHECK_SIZE(FakeNetworkPlayer, 0x80);
} // namespace mc
