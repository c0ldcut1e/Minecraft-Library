#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    enum class eCustomGameModeHostOption : uint32_t
    {
        GlidePowerups = 6,
        GlideSolo     = 14,
    };

    class GameModeOptions
    {
    public:
        GameModeOptions()
        {
            MLINK_FUNC(void, 0x02C2D338, GameModeOptions *)(this);
        }

        GameModeOptions(uint32_t options)
        {
            MLINK_FUNC(void, 0x02C2D380, GameModeOptions *, uint32_t)(this, options);
        }

        static GameModeOptions *GetSetting()
        {
            return MLINK_FUNC(GameModeOptions *, 0x02CE336C)();
        }

        static uint32_t Parse(mstd::basic_string<wchar_t> &definition)
        {
            return MLINK_FUNC(uint32_t, 0x02C2D1E4, mstd::basic_string<wchar_t> &)(definition);
        }

        uint32_t Get(eCustomGameModeHostOption option)
        {
            return MLINK_FUNC(uint32_t, 0x02C22580, GameModeOptions *, eCustomGameModeHostOption)(this, option);
        }

        void Set(eCustomGameModeHostOption option, uint32_t value)
        {
            MLINK_FUNC(void, 0x02C2D3D0, GameModeOptions *, eCustomGameModeHostOption, uint32_t)(this, option, value);
        }

        uint32_t field_0x0;
    };
    MC_CHECK_SIZE(GameModeOptions, 0x4);
} // namespace mc
