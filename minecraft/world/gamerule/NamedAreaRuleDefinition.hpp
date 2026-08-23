#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "utils/AABB.hpp"

namespace mc
{
    class VTable_NamedAreaRuleDefinition;

    class NamedAreaRuleDefinition
    {
    public:
        enum BoostNamedAreaDirection : int
        {
            EAST       = 0,
            WEST       = 1,
            SOUTH      = 2,
            NORTH      = 3,
            OMNI_EAST  = 4,
            OMNI_WEST  = 5,
            OMNI_SOUTH = 6,
            OMNI_NORTH = 7
        };

        NamedAreaRuleDefinition()
        {
            MLINK_FUNC(void, 0x02D0455C, NamedAreaRuleDefinition *)(this);
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
        uint32_t field_0x2c;
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
        VTable_NamedAreaRuleDefinition *vtbl;
        mstd::basic_string<wchar_t> areaName;
        mc::AABB *boundingBox;
        double liftForceModifier;
        double staticLift;
        double targetHeight;
        double speedBoost;
        BoostNamedAreaDirection boostDirection;
        uint32_t conditionType;
        uint32_t conditionValue0;
        uint32_t conditionValue1;
        bool field_0xB8;
        bool field_0xB9;
        bool field_0xBA;
        bool field_0xBB;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
    };
    MC_CHECK_SIZE(NamedAreaRuleDefinition, 0x100);

    class VTable_NamedAreaRuleDefinition : public VTable
    {
    public:
        MC_VFUNC(void, NamedAreaRuleDefinition, __dt__);
        MC_VFUNC(void, NamedAreaRuleDefinition, getActionType);
        MC_VFUNC(mc::AABB *, NamedAreaRuleDefinition, getBoundingVolume);
        MC_VFUNC(void, NamedAreaRuleDefinition, moveBoundingVolume, int, int, int);
        MC_VFUNC(void, NamedAreaRuleDefinition, writeAttributes);
        MC_VFUNC(void, NamedAreaRuleDefinition, getChildren);
        MC_VFUNC(void, NamedAreaRuleDefinition, getChildren2);
        MC_VFUNC(void, NamedAreaRuleDefinition, addChild);
        MC_VFUNC(void, NamedAreaRuleDefinition, addAttribute);
        MC_VFUNC(void, NamedAreaRuleDefinition, onAttributesAdded);
        MC_VFUNC(void, NamedAreaRuleDefinition, populateGameRule);
        MC_VFUNC(void, NamedAreaRuleDefinition, getGoal);
        MC_VFUNC(void, NamedAreaRuleDefinition, getProgress);
        MC_VFUNC(void, NamedAreaRuleDefinition, getIcon);
        MC_VFUNC(void, NamedAreaRuleDefinition, getAuxValue);
        MC_VFUNC(void, NamedAreaRuleDefinition, onUseBlock);
        MC_VFUNC(void, NamedAreaRuleDefinition, onCollectItem);
        MC_VFUNC(void, NamedAreaRuleDefinition, evaluateRule);
        MC_VFUNC(void, NamedAreaRuleDefinition, postProcessPlayer);
        MC_VFUNC(void, NamedAreaRuleDefinition, WriteXMLData, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, NamedAreaRuleDefinition, WriteAttributesAsXML, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, NamedAreaRuleDefinition, containsBlock);
    };
    MC_CHECK_SIZE(VTable_NamedAreaRuleDefinition, 0xB8);
} // namespace mc
