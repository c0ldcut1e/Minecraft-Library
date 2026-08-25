#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/common/Socket.hpp"

namespace nn::pia::common
{
    class SocketStreamBase
    {
    public:
        SocketStreamBase()
        {
            MLINK_FUNC(void, 0x0383BC34, SocketStreamBase *)(this);
        }

        ~SocketStreamBase()
        {
            MLINK_FUNC(void, 0x0383BC80, SocketStreamBase *)(this);
        }

        void Cleanup()
        {
            MLINK_FUNC(void, 0x0383BCEC, SocketStreamBase *)(this);
        }

        Result ImportSocket(Socket *socket)
        {
            Result result;
            MLINK_FUNC(void, 0x0383BCF8, SocketStreamBase *, Result *, Socket *)(this, &result, socket);
            return result;
        }

        Result Startup()
        {
            Result result;
            MLINK_FUNC(void, 0x0383BCA8, SocketStreamBase *, Result *)(this, &result);
            return result;
        }

        bool started;
        uint8_t field_0x1;
        uint8_t field_0x2;
        uint8_t field_0x3;
        Socket *socket;
        mc::VTable *vtable;
    };
    MC_CHECK_SIZE(SocketStreamBase, 0xC);
} // namespace nn::pia::common
