#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::session
{
    class JoinRandomSessionSetting
    {
    public:
        ~JoinRandomSessionSetting()
        {
            MLINK_FUNC(void, 0x0357A698, JoinRandomSessionSetting *, uint32_t)(this, 2);
        }

        void *vtable;
    };
    MC_CHECK_SIZE(JoinRandomSessionSetting, 0x4);
} // namespace nn::pia::session
