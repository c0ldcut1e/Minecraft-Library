#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "GameMode.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class Player;

    class MultiPlayerGameMode : public GameMode
    {
    public:
        void adjustPlayer(const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x0319229C, MultiPlayerGameMode *, mboost::shared_ptr<Player>)(this, player);
        }

        bool canHurtPlayer()
        {
            return MLINK_FUNC(bool, 0x032190BC, MultiPlayerGameMode *)(this);
        }

        bool destroyBlock(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0319EB20, MultiPlayerGameMode *, const BlockPos &)(this, pos);
        }

        bool hasExperience()
        {
            return MLINK_FUNC(bool, 0x0321C1E4, MultiPlayerGameMode *)(this);
        }

        bool hasInfiniteItems()
        {
            return MLINK_FUNC(bool, 0x03197EDC, MultiPlayerGameMode *)(this);
        }

        void initPlayer(const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x0319222C, MultiPlayerGameMode *, mboost::shared_ptr<Player>)(this, player);
        }

        bool isInputAllowed(int action)
        {
            return MLINK_FUNC(bool, 0x0319E76C, MultiPlayerGameMode *, int)(this, action);
        }

        void MakeSpectateSound()
        {
            MLINK_FUNC(void, 0x031A2820, MultiPlayerGameMode *)(this);
        }

        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
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
    };
    MC_CHECK_SIZE(MultiPlayerGameMode, 0x68);
} // namespace mc
