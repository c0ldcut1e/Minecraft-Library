#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "NamedAreaRuleDefinition.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "utils/AABB.hpp"
#include "world/level/GlideRingGenerator.hpp"

namespace mc
{
    class VTable_TargetAreaRuleDefinition;

    class TargetAreaRuleDefinition
    {
    public:
        TargetAreaRuleDefinition()
        {
            MLINK_FUNC(void, 0x02D043B0, TargetAreaRuleDefinition *)(this);
        }

        int getPointValue()
        {
            return MLINK_FUNC(int, 0x02D6EBBC, TargetAreaRuleDefinition *)(this);
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
        VTable_TargetAreaRuleDefinition *vtbl;
        mstd::basic_string<wchar_t> areaName;
        mc::AABB *area;
        bool primary;
        uint8_t field_0x89;
        uint8_t field_0x8A;
        uint8_t field_0x8B;
        int points;
        int laps;
    };
    MC_CHECK_SIZE(TargetAreaRuleDefinition, 0x94);

    class VTable_TargetAreaRuleDefinition : public VTable
    {
    public:
        MC_VFUNC(void, TargetAreaRuleDefinition, __dt__);
        MC_VFUNC(void, TargetAreaRuleDefinition, getActionType);
        MC_VFUNC(mc::AABB *, TargetAreaRuleDefinition, getBoundingVolume);
        MC_VFUNC(void, TargetAreaRuleDefinition, moveBoundingVolume, int, int, int);
        MC_VFUNC(void, TargetAreaRuleDefinition, writeAttributes);
        MC_VFUNC(void, TargetAreaRuleDefinition, getChildren);
        MC_VFUNC(void, TargetAreaRuleDefinition, getChildren2);
        MC_VFUNC(void, TargetAreaRuleDefinition, addChild);
        MC_VFUNC(void, TargetAreaRuleDefinition, addAttribute);
        MC_VFUNC(void, TargetAreaRuleDefinition, onAttributesAdded);
        MC_VFUNC(void, TargetAreaRuleDefinition, populateGameRule);
        MC_VFUNC(void, TargetAreaRuleDefinition, getGoal);
        MC_VFUNC(void, TargetAreaRuleDefinition, getProgress);
        MC_VFUNC(void, TargetAreaRuleDefinition, getIcon);
        MC_VFUNC(void, TargetAreaRuleDefinition, getAuxValue);
        MC_VFUNC(void, TargetAreaRuleDefinition, onUseBlock);
        MC_VFUNC(void, TargetAreaRuleDefinition, onCollectItem);
        MC_VFUNC(void, TargetAreaRuleDefinition, evaluateRule);
        MC_VFUNC(void, TargetAreaRuleDefinition, postProcessPlayer);
        MC_VFUNC(void, TargetAreaRuleDefinition, WriteXMLData, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, TargetAreaRuleDefinition, WriteAttributesAsXML, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, TargetAreaRuleDefinition, containsBlock);
        MC_VFUNC(int, TargetAreaRuleDefinition, getPointValue);
        MC_VFUNC(GlideRingGenerator::eGlideRingSize, TargetAreaRuleDefinition, getSize);
    };
    MC_CHECK_SIZE(VTable_TargetAreaRuleDefinition, 0xC8);
} // namespace mc
