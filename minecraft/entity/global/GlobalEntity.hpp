#pragma once

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"

namespace mc
{
    class GlobalEntity : public Entity
    {
    };
    MC_CHECK_SIZE(GlobalEntity, 0x350);
} // namespace mc
