#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "LevelGenerationOptions.hpp"
#include "MinecraftLib.hpp"
#include "world/level/LevelRuleset.hpp"

namespace mc
{
    class GameRuleManager
    {
    public:
        GameRuleManager()
        {
            MLINK_FUNC(void, 0x02D318F0, GameRuleManager *)(this);
        }

        LevelRuleset *getGameRuleDefinitions()
        {
            return MLINK_FUNC(LevelRuleset *, 0x02D3789C, GameRuleManager *)(this);
        }

        LevelGenerationOptions *getLevelGenerationOptions()
        {
            return MLINK_FUNC(LevelGenerationOptions *, 0x02D36824, GameRuleManager *)(this);
        }

        LevelGenerationOptions *currentLevelGenerationOptions;
        LevelRuleset *currentGameRuleDefinitions;
        MC_UNDEFINED_TYPE(uint32_t *, LevelGenerators) levelGenerators;
        MC_UNDEFINED_TYPE(uint32_t *, LevelRules) levelRules;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(GameRuleManager, 0x14);
} // namespace mc
