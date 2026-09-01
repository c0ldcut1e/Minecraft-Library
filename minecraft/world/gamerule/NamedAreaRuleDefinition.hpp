#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "utils/AABB.hpp"

namespace mc
{
    class VTable_NamedAreaRuleDefinition;

    class NamedAreaRuleDefinition
    {
    public:
        NamedAreaRuleDefinition()
        {
            MLINK_FUNC(void, 0x02CFC6C8, NamedAreaRuleDefinition *)(this);
        }

        bool containsBlock(int blockId, const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02CFCA0C, NamedAreaRuleDefinition *, int, const BlockPos &)(this, blockId, pos);
        }

        AABB *getArea()
        {
            return MLINK_FUNC(AABB *, 0x02CFC97C, NamedAreaRuleDefinition *)(this);
        }

        AABB *getBoundingVolume()
        {
            return MLINK_FUNC(AABB *, 0x02CFC984, NamedAreaRuleDefinition *)(this);
        }

        void getName(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02CFC994, NamedAreaRuleDefinition *, mstd::basic_string<wchar_t> &)(this, result);
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
        VTable_NamedAreaRuleDefinition *vtbl;
        mstd::basic_string<wchar_t> areaName;
        mc::AABB *area;
    };
    MC_CHECK_SIZE(NamedAreaRuleDefinition, 0x88);

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
