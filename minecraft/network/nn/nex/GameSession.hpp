#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Gathering.hpp"
#include "MinecraftLib.hpp"

namespace nn::nex
{
    class GameSession : public Gathering
    {
    public:
        ~GameSession()
        {
            MLINK_FUNC(void, 0x036E9E58, GameSession *, uint32_t)(this, 2);
        }

        uint8_t dataVersion;
        uint8_t field_0x31;
        uint8_t field_0x32;
        uint8_t field_0x33;
    };
    MC_CHECK_SIZE(GameSession, 0x34);
} // namespace nn::nex
