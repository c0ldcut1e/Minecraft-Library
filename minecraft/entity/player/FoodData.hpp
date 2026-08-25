#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/shared_ptr.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class Player;

    class FoodData
    {
    public:
        FoodData()
        {
            MLINK_FUNC(void, 0x024020E4, FoodData *)(this);
        }

        void eat(int nutrition, float saturationModifier)
        {
            MLINK_FUNC(void, 0x02402180, FoodData *, int, float)(this, nutrition, saturationModifier);
        }

        void addExhaustion(float exhaustion)
        {
            MLINK_FUNC(void, 0x02402AB0, FoodData *, float)(this, exhaustion);
        }

        void tick(const mboost::shared_ptr<Player> &player)
        {
            MLINK_FUNC(void, 0x02402C58, FoodData *, const mboost::shared_ptr<Player> &)(this, player);
        }

        void readAdditionalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x02403370, FoodData *, CompoundTag *)(this, tag);
        }

        void addAdditonalSaveData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x0240364C, FoodData *, CompoundTag *)(this, tag);
        }

        int getFoodLevel()
        {
            return MLINK_FUNC(int, 0x024038A4, FoodData *)(this);
        }

        int getLastFoodLevel()
        {
            return MLINK_FUNC(int, 0x024038AC, FoodData *)(this);
        }

        bool needsFood()
        {
            return MLINK_FUNC(bool, 0x024038B4, FoodData *)(this);
        }

        bool isStarving()
        {
            return MLINK_FUNC(bool, 0x024038FC, FoodData *)(this);
        }

        float getSaturationLevel()
        {
            return MLINK_FUNC(float, 0x02403948, FoodData *)(this);
        }

        void setFoodLevel(int level)
        {
            MLINK_FUNC(void, 0x02403950, FoodData *, int)(this, level);
        }

        void setSaturation(float saturation)
        {
            MLINK_FUNC(void, 0x02403958, FoodData *, float)(this, saturation);
        }

        void setExhaustion(float exhaustion)
        {
            MLINK_FUNC(void, 0x02403960, FoodData *, float)(this, exhaustion);
        }

        int foodLevel;
        float foodSaturationLevel;
        float foodExhaustionLevel;
        int foodTickTimer;
        int lastFoodLevel;
    };
    MC_CHECK_SIZE(FoodData, 0x14);
} // namespace mc
