#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "AbstractClientPlayer.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class GameType;

    class RemotePlayer : public AbstractClientPlayer
    {
    public:
        RemotePlayer() = default;

        RemotePlayer(Level *level, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x03268E1C, RemotePlayer *, Level *, const mstd::basic_string<wchar_t> &)(this, level, name);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0332D9F4)();
        }

        GameType *GetGameType()
        {
            return MLINK_FUNC(GameType *, 0x032692F8, RemotePlayer *)(this);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x03268F14, RemotePlayer *)(this);
        }

        uint32_t field_0x868;
        uint32_t field_0x86C;
        uint32_t field_0x870;
        uint32_t field_0x874;
        uint32_t field_0x878;
        uint32_t field_0x87C;
        uint32_t field_0x880;
        GameType *gameType;
    };
    MC_CHECK_SIZE(RemotePlayer, 0x888);
}; // namespace mc
