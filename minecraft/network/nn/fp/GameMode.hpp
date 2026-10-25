#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

namespace nn::fp
{
    struct GameMode
    {
        uint32_t joinAvailabilityFlag;
        uint32_t matchmakeType;
        uint32_t joinGameId;
        uint32_t joinGameMode;
        uint32_t ownerPrincipalId;
        uint32_t joinGroupId;
        uint8_t applicationArg[0x14];
    };
    MC_CHECK_SIZE(GameMode, 0x2C);

    uint32_t UpdateGameMode(const GameMode *gameMode, const wchar_t *description,
                            uint32_t unk) asm("UpdateGameMode__Q2_2nn2fpFPCQ3_2nn2fp8GameModePCwUi");
} // namespace nn::fp
