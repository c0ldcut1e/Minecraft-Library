#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/PathfinderMob.hpp"
#include "world/Level.hpp"

namespace mc
{
    class WaterAnimal : public PathfinderMob
    {
    public:
        WaterAnimal() = default;

        WaterAnimal(Level *level)
        {
            MLINK_FUNC(void, 0x02A54CC0, WaterAnimal *, Level *)(this, level);
        }

        bool isWaterMob()
        {
            return MLINK_FUNC(bool, 0x02A54D58, WaterAnimal *)(this);
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x02A54D60, WaterAnimal *)(this);
        }

        bool checkSpawnObstruction()
        {
            return MLINK_FUNC(bool, 0x02A54FDC, WaterAnimal *)(this);
        }

        void aiStep()
        {
            MLINK_FUNC(void, 0x02A55308, WaterAnimal *)(this);
        }

        void baseTick()
        {
            MLINK_FUNC(void, 0x02A55534, WaterAnimal *)(this);
        }

        bool isPushedByWater()
        {
            return MLINK_FUNC(bool, 0x02A55664, WaterAnimal *)(this);
        }

        bool breathesAir()
        {
            return MLINK_FUNC(bool, 0x02A5566C, WaterAnimal *)(this);
        }

        float field_0x730;
        float field_0x734;
        uint32_t field_0x738;
        uint32_t field_0x73C;
    };
    MC_CHECK_SIZE(WaterAnimal, 0x740);
} // namespace mc
