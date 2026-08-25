#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Animal.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Sheep : public Animal
    {
    public:
        Sheep(Level *level)
        {
            MLINK_FUNC(void, 0x0287F8B8, Sheep *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x028CE45C)();
        }

        static Sheep *Create(Level *level)
        {
            return MLINK_FUNC(Sheep *, 0x023E6688, Level *)(level);
        }

        void registerGoals()
        {
            MLINK_FUNC(void, 0x028802C0, Sheep *)(this);
        }

        void customServerAiStep()
        {
            MLINK_FUNC(void, 0x028805CC, Sheep *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02880620, Sheep *)(this);
        }

        void registerAttributes()
        {
            MLINK_FUNC(void, 0x02880658, Sheep *)(this);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x028807E8, Sheep *)(this);
        }

        float getHeadEatPositionScale(float partialTick)
        {
            return MLINK_FUNC(float, 0x028808A8, Sheep *, float)(this, partialTick);
        }

        float getHeadEatAngleScale(float partialTick)
        {
            return MLINK_FUNC(float, 0x02880964, Sheep *, float)(this, partialTick);
        }

        bool isSheared()
        {
            return MLINK_FUNC(bool, 0x02880A48, Sheep *)(this);
        }

        void setSheared(bool sheared)
        {
            MLINK_FUNC(void, 0x02880B88, Sheep *, bool)(this, sheared);
        }

        void ate()
        {
            MLINK_FUNC(void, 0x02883084, Sheep *)(this);
        }

        float getEyeHeight()
        {
            return MLINK_FUNC(float, 0x028831F8, Sheep *)(this);
        }

        uint32_t craftingMenu;
        uint32_t craftingInventory;
        uint32_t craftingInventoryControl;
        int eatAnimationTick;
        uint32_t eatBlockGoal;
        uint32_t field_0x794;
    };
    MC_CHECK_SIZE(Sheep, 0x798);
} // namespace mc
