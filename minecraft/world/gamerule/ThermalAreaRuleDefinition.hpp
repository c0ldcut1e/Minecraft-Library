#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "NamedAreaRuleDefinition.hpp"
#include "entity/Entity.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/AABB.hpp"

namespace mc
{
    class VTable_ThermalAreaRuleDefinition;

    class ThermalAreaRuleDefinition
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

        ThermalAreaRuleDefinition()
        {
            MLINK_FUNC(void, 0x02D0455C, ThermalAreaRuleDefinition *)(this);
        }

        BoostNamedAreaDirection getBoostDirection()
        {
            return MLINK_FUNC(BoostNamedAreaDirection, 0x02D51EC0, ThermalAreaRuleDefinition *)(this);
        }

        bool getConditionsMet(const mboost::shared_ptr<Entity> &entity)
        {
            return MLINK_FUNC(bool, 0x02D51774, ThermalAreaRuleDefinition *, const mboost::shared_ptr<Entity> &)(this, entity);
        }

        void resetConditions()
        {
            MLINK_FUNC(void, 0x02D51A1C, ThermalAreaRuleDefinition *)(this);
        }

        bool setBoostMods(int &firstMod, int &secondMod)
        {
            return MLINK_FUNC(bool, 0x02D51E48, ThermalAreaRuleDefinition *, int &, int &)(this, firstMod, secondMod);
        }

        void updateUseCount()
        {
            MLINK_FUNC(void, 0x02D51A28, ThermalAreaRuleDefinition *)(this);
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
        VTable_ThermalAreaRuleDefinition *vtbl;
        mstd::basic_string<wchar_t> areaName;
        mc::AABB *area;
        double liftForceModifier;
        double staticLift;
        double targetHeight;
        double speedBoost;
        BoostNamedAreaDirection boostDirection;
        int conditionType;
        int conditionValue0;
        int conditionValue1;
        bool field_0xB8;
        uint8_t field_0xB9;
        uint8_t field_0xBA;
        uint8_t field_0xBB;
        int useCount;
    };
    MC_CHECK_SIZE(ThermalAreaRuleDefinition, 0xC0);

    class VTable_ThermalAreaRuleDefinition : public VTable
    {
    public:
        MC_VFUNC(void, ThermalAreaRuleDefinition, __dt__);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getActionType);
        MC_VFUNC(mc::AABB *, ThermalAreaRuleDefinition, getBoundingVolume);
        MC_VFUNC(void, ThermalAreaRuleDefinition, moveBoundingVolume, int, int, int);
        MC_VFUNC(void, ThermalAreaRuleDefinition, writeAttributes);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getChildren);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getChildren2);
        MC_VFUNC(void, ThermalAreaRuleDefinition, addChild);
        MC_VFUNC(void, ThermalAreaRuleDefinition, addAttribute);
        MC_VFUNC(void, ThermalAreaRuleDefinition, onAttributesAdded);
        MC_VFUNC(void, ThermalAreaRuleDefinition, populateGameRule);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getGoal);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getProgress);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getIcon);
        MC_VFUNC(void, ThermalAreaRuleDefinition, getAuxValue);
        MC_VFUNC(void, ThermalAreaRuleDefinition, onUseBlock);
        MC_VFUNC(void, ThermalAreaRuleDefinition, onCollectItem);
        MC_VFUNC(void, ThermalAreaRuleDefinition, evaluateRule);
        MC_VFUNC(void, ThermalAreaRuleDefinition, postProcessPlayer);
        MC_VFUNC(void, ThermalAreaRuleDefinition, WriteXMLData, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, ThermalAreaRuleDefinition, WriteAttributesAsXML, mstd::basic_string<wchar_t> &);
        MC_VFUNC(void, ThermalAreaRuleDefinition, containsBlock);
    };
    MC_CHECK_SIZE(VTable_ThermalAreaRuleDefinition, 0xB8);
} // namespace mc
