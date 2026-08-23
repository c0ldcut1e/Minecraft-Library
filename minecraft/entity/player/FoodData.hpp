#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class FoodData
    {
    public:
        int getFoodLevel()
        {
            return MLINK_FUNC(int, 0x024038A4, FoodData *)(this);
        }

        int getLastFoodLevel()
        {
            return MLINK_FUNC(int, 0x024038AC, FoodData *)(this);
        }

        float getSaturationLevel()
        {
            return MLINK_FUNC(float, 0x02403948, FoodData *)(this);
        }

        int foodLevel;
        float foodSaturationLevel;
        float foodExhaustionLevel;
        int foodTickTimer;
        int lastFoodLevel;
    };
    MC_CHECK_SIZE(FoodData, 0x14);
} // namespace mc
