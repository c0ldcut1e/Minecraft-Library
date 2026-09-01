#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"
#include "utils/AABB.hpp"
#include "world/gamerule/ConsoleGameRules.hpp"
#include "world/gamerule/NamedAreaRuleDefinition.hpp"
#include "world/gamerule/TargetAreaRuleDefinition.hpp"
#include "world/gamerule/ThermalAreaRuleDefinition.hpp"

namespace mc
{
    class LevelRuleset
    {
    public:
        LevelRuleset()
        {
            MLINK_FUNC(void, 0x02D035E0, LevelRuleset *)(this);
        }

        MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition) addChild(ConsoleGameRules::EGameRuleType ruleType)
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition), 0x02D081B4, LevelRuleset *,
                              ConsoleGameRules::EGameRuleType)(this, ruleType);
        }

        void addUniqueRule(ConsoleGameRules::EGameRuleType ruleType, MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition) rule)
        {
            MLINK_FUNC(void, 0x02D05C60, LevelRuleset *, ConsoleGameRules::EGameRuleType,
                       MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition))(this, ruleType, rule);
        }

        void getRingsWithinArea(mstd::vector<TargetAreaRuleDefinition *> *vec, AABB *area)
        {
            MLINK_FUNC(void, 0x02D0A228, LevelRuleset *, mstd::vector<TargetAreaRuleDefinition *> *, AABB *)(this, vec, area);
        }

        MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition) getRuleByType(ConsoleGameRules::EGameRuleType ruleType)
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition), 0x02D0AFFC, LevelRuleset *,
                              ConsoleGameRules::EGameRuleType)(this, ruleType);
        }

        void getTargetAreas(mstd::vector<TargetAreaRuleDefinition *> *vec)
        {
            MLINK_FUNC(void, 0x02D0A174, LevelRuleset *, mstd::vector<TargetAreaRuleDefinition *> *)(this, vec);
        }

        void getThermalAreas(mstd::vector<ThermalAreaRuleDefinition *> *vec)
        {
            MLINK_FUNC(void, 0x02D0A950, LevelRuleset *, mstd::vector<ThermalAreaRuleDefinition *> *)(this, vec);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
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
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        mstd::vector<mc::NamedAreaRuleDefinition *> namedAreas;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, RandomItemSetRuleDefinition)> randomItemSets;
        mboost::unordered::unordered_map<ConsoleGameRules::EGameRuleType, MC_UNDEFINED_TYPE(uint32_t *, GameRuleDefinition)> rulesByType;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, CollisionExceptionGameRuleDefinition)> collisionExceptions;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, CheckpointRuleDefinition)> checkpoints;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, PowerupRuleDefinition)> powerups;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, KillboxRuleDefinition)> killboxes;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
    };
    MC_CHECK_SIZE(LevelRuleset, 0xFC);
} // namespace mc
