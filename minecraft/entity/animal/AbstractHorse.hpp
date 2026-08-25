#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "world/Level.hpp"

namespace mc
{
    class AbstractHorse : public Animal
    {
    public:
        AbstractHorse() = default;

        AbstractHorse(Level *level)
        {
            MLINK_FUNC(void, 0x0201A1C8, AbstractHorse *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x020B16EC)();
        }

        bool canBeControlledByRider()
        {
            return MLINK_FUNC(bool, 0x02022350, AbstractHorse *)(this);
        }

        bool canEatGrass()
        {
            return MLINK_FUNC(bool, 0x0201F184, AbstractHorse *)(this);
        }

        bool canMate(const mboost::shared_ptr<Animal> &other)
        {
            return MLINK_FUNC(bool, 0x02021C1C, AbstractHorse *, const mboost::shared_ptr<Animal> &)(this, other);
        }

        bool canParent()
        {
            return MLINK_FUNC(bool, 0x02021C24, AbstractHorse *)(this);
        }

        void createInventory()
        {
            MLINK_FUNC(void, 0x0201BF70, AbstractHorse *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0201A5D4, AbstractHorse *)(this);
        }

        float getEatAnim(float partialTicks)
        {
            return MLINK_FUNC(float, 0x020224D8, AbstractHorse *, float)(this, partialTicks);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x02023030, AbstractHorse *)(this);
        }

        float getFoalScale()
        {
            return MLINK_FUNC(float, 0x0201A890, AbstractHorse *)(this);
        }

        int getInventorySize()
        {
            return MLINK_FUNC(int, 0x0201BDB8, AbstractHorse *)(this);
        }

        int getMaxSpawnClusterSize()
        {
            return MLINK_FUNC(int, 0x0201D31C, AbstractHorse *)(this);
        }

        int getMaxTemper()
        {
            return MLINK_FUNC(int, 0x0201D324, AbstractHorse *)(this);
        }

        float getMouthAnim(float partialTicks)
        {
            return MLINK_FUNC(float, 0x02022500, AbstractHorse *, float)(this, partialTicks);
        }

        float getSoundVolume()
        {
            return MLINK_FUNC(float, 0x0201D32C, AbstractHorse *)(this);
        }

        float getStandAnim(float partialTicks)
        {
            return MLINK_FUNC(float, 0x020224EC, AbstractHorse *, float)(this, partialTicks);
        }

        int getTailCounter()
        {
            return MLINK_FUNC(int, 0x0201A014, AbstractHorse *)(this);
        }

        int getTemper()
        {
            return MLINK_FUNC(int, 0x0201AA74, AbstractHorse *)(this);
        }

        bool isArmor(const mboost::not_null_ptr<ItemInstance> &item)
        {
            return MLINK_FUNC(bool, 0x02023040, AbstractHorse *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        bool isBred()
        {
            return MLINK_FUNC(bool, 0x0201A9E0, AbstractHorse *)(this);
        }

        bool isEating()
        {
            return MLINK_FUNC(bool, 0x0201A94C, AbstractHorse *)(this);
        }

        bool isImmobile()
        {
            return MLINK_FUNC(bool, 0x0201E434, AbstractHorse *)(this);
        }

        bool isJumping()
        {
            return MLINK_FUNC(bool, 0x0201A914, AbstractHorse *)(this);
        }

        bool isSaddled()
        {
            return MLINK_FUNC(bool, 0x020022A8, AbstractHorse *)(this);
        }

        bool isStanding()
        {
            return MLINK_FUNC(bool, 0x0201A9CC, AbstractHorse *)(this);
        }

        bool isTamed()
        {
            return MLINK_FUNC(bool, 0x0201A78C, AbstractHorse *)(this);
        }

        void makeMad()
        {
            MLINK_FUNC(void, 0x0201F58C, AbstractHorse *)(this);
        }

        int modifyTemper(int delta)
        {
            return MLINK_FUNC(int, 0x0201AA84, AbstractHorse *, int)(this, delta);
        }

        bool onLadder()
        {
            return MLINK_FUNC(bool, 0x02023028, AbstractHorse *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x0201D250, AbstractHorse *)(this);
        }

        bool removeWhenFarAway()
        {
            return MLINK_FUNC(bool, 0x02023660, AbstractHorse *)(this);
        }

        void setBred(bool bred)
        {
            MLINK_FUNC(void, 0x0201A9F4, AbstractHorse *, bool)(this, bred);
        }

        void setIsJumping(bool jumping)
        {
            MLINK_FUNC(void, 0x0201A934, AbstractHorse *, bool)(this, jumping);
        }

        void setOwnerUUID(const mstd::basic_string<wchar_t> &ownerUuid)
        {
            MLINK_FUNC(void, 0x0201A7A0, AbstractHorse *, const mstd::basic_string<wchar_t> &)(this, ownerUuid);
        }

        void setSaddled(bool saddled)
        {
            MLINK_FUNC(void, 0x0201AA0C, AbstractHorse *, bool)(this, saddled);
        }

        void setTamed(bool tamed)
        {
            MLINK_FUNC(void, 0x0201A91C, AbstractHorse *, bool)(this, tamed);
        }

        void setTemper(int temper)
        {
            MLINK_FUNC(void, 0x0201AA7C, AbstractHorse *, int)(this, temper);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x0201F18C, AbstractHorse *)(this);
        }

        void travel(float strafe, float vertical, float forward)
        {
            MLINK_FUNC(void, 0x0201FA4C, AbstractHorse *, float, float, float)(this, strafe, vertical, forward);
        }

        void updateEquipment()
        {
            MLINK_FUNC(void, 0x0201C770, AbstractHorse *)(this);
        }

        void updateSize(bool baby)
        {
            MLINK_FUNC(void, 0x0201A89C, AbstractHorse *, bool)(this, baby);
        }

        bool wearsArmor()
        {
            return MLINK_FUNC(bool, 0x02023038, AbstractHorse *)(this);
        }

        void *field_0x780;
        void *field_0x784;
        void *field_0x788;
        int field_0x78C;
        int field_0x790;
        int field_0x794;
        int field_0x798;
        int field_0x79C;
        int field_0x7A0;
        uint32_t field_0x7A4;
        uint8_t field_0x7A8;
        uint8_t field_0x7A9;
        uint8_t field_0x7AA;
        uint8_t field_0x7AB;
        int field_0x7AC;
        void *field_0x7B0;
        uint32_t field_0x7B4;
        float field_0x7B8;
        uint8_t field_0x7BC;
        uint8_t field_0x7BD;
        uint8_t field_0x7BE;
        uint8_t field_0x7BF;
        float field_0x7C0;
        float field_0x7C4;
        float field_0x7C8;
        float field_0x7CC;
        float field_0x7D0;
        uint32_t field_0x7D4;
        uint8_t field_0x7D8;
        uint8_t field_0x7D9;
        uint8_t field_0x7DA;
        uint8_t field_0x7DB;
        int field_0x7DC;
        void *field_0x7E0;
        void *field_0x7E4;
        void *field_0x7E8;
    };
    MC_CHECK_SIZE(AbstractHorse, 0x7EC);
} // namespace mc
