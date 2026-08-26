#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/TamableAnimal.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ShoulderRidingEntity : public TamableAnimal
    {
    public:
        ShoulderRidingEntity() = default;

        ShoulderRidingEntity(Level *level)
        {
            MLINK_FUNC(void, 0x028BBFC8, ShoulderRidingEntity *, Level *)(this, level);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x028BC3E0, ShoulderRidingEntity *)(this);
        }

        bool canSitOnShoulder()
        {
            return MLINK_FUNC(bool, 0x028BC3FC, ShoulderRidingEntity *)(this);
        }

        uint32_t field_0x788;
        uint32_t field_0x78C;
    };
    MC_CHECK_SIZE(ShoulderRidingEntity, 0x790);
} // namespace mc
