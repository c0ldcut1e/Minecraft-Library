#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/player/Abilities.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class GameType
    {
    public:
        static GameType *byId(int id)
        {
            return MLINK_FUNC(GameType *, 0x02457008, int)(id);
        }

        static const GameType *byId(int id, const GameType *fallback)
        {
            return MLINK_FUNC(const GameType *, 0x02456F84, int, const GameType *)(id, fallback);
        }

        int getId()
        {
            return MLINK_FUNC(int, 0x02456DCC, GameType *)(this);
        }

        int getLabel() const
        {
            return MLINK_FUNC(int, 0x02456DD4, const GameType *)(this);
        }

        int getSliderLabel() const
        {
            return MLINK_FUNC(int, 0x02456DDC, const GameType *)(this);
        }

        bool isBlockPlacingRestricted() const
        {
            return MLINK_FUNC(bool, 0x02456DE4, const GameType *)(this);
        }

        void updatePlayerAbilities(Abilities *abilities)
        {
            MLINK_FUNC(void, 0x02456E24, GameType *, Abilities *)(this, abilities);
        }

        bool isCreative() const
        {
            return MLINK_FUNC(bool, 0x02456F24, const GameType *)(this);
        }

        bool isSurvival() const
        {
            return MLINK_FUNC(bool, 0x02456F54, const GameType *)(this);
        }

        int id;
        mstd::basic_string<wchar_t> name;
        mstd::basic_string<wchar_t> field_0x24;
        int label;
        int sliderLabel;
    };
    MC_CHECK_SIZE(GameType, 0x4C);
} // namespace mc
