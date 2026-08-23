#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "gamerule/NamedAreaRuleDefinition.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class LevelRuleset
    {
    public:
        LevelRuleset()
        {
            MLINK_FUNC(void, 0x02D035E0, LevelRuleset *)(this);
        }

        void addChild(uint32_t rule)
        {
            MLINK_FUNC(void, 0x02D081B4, LevelRuleset *, uint32_t)(this, rule);
        }

        void getThermalAreas(mstd::vector<NamedAreaRuleDefinition *> *vec)
        {
            MLINK_FUNC(void, 0x02D0A950, LevelRuleset *, mstd::vector<NamedAreaRuleDefinition *> *)(this, vec);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1c;
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
    };
    MC_CHECK_SIZE(LevelRuleset, 0x88);
} // namespace mc
