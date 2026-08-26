#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/animal/AbstractHorse.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Horse : public AbstractHorse
    {
    public:
        Horse(Level *level)
        {
            MLINK_FUNC(void, 0x02505A5C, Horse *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252EFCC)();
        }

        void clearLayeredTextureInfo()
        {
            MLINK_FUNC(void, 0x02506350, Horse *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x02505BC4, Horse *)(this);
        }

        int getDyedArmorColor()
        {
            return MLINK_FUNC(int, 0x02507320, Horse *)(this);
        }

        int getVariant()
        {
            return MLINK_FUNC(int, 0x02505E28, Horse *)(this);
        }

        bool isArmor(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x0250A8C4, Horse *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        bool isWearingDyedArmor()
        {
            return MLINK_FUNC(bool, 0x02507298, Horse *)(this);
        }

        bool removeWhenFarAway()
        {
            return MLINK_FUNC(bool, 0x0250AAD8, Horse *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02507B48, Horse *)(this);
        }

        void setArmorType(const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x025075F4, Horse *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        void setVariant(int variant)
        {
            MLINK_FUNC(void, 0x025063D0, Horse *, int)(this, variant);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02507C98, Horse *)(this);
        }

        void updateEquipment()
        {
            MLINK_FUNC(void, 0x025078D4, Horse *)(this);
        }

        bool wearsArmor()
        {
            return MLINK_FUNC(bool, 0x0250A8BC, Horse *)(this);
        }

        mstd::basic_string<wchar_t> field_0x7F0;
        uint32_t *field_0x810;
        uint32_t field_0x814;
        bool field_0x818;
        uint32_t field_0x81C;
    };
    MC_CHECK_SIZE(Horse, 0x820);
} // namespace mc
