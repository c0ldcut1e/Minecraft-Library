#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::session
{
    class ISessionInfoList
    {
    public:
        ~ISessionInfoList()
        {
            MLINK_FUNC(void, 0x0357FFA4, ISessionInfoList *, uint32_t)(this, 2);
        }

        void *vtable;
    };
    MC_CHECK_SIZE(ISessionInfoList, 0x4);
} // namespace nn::pia::session
