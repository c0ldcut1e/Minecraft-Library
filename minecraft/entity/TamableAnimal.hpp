#pragma once

#include <cstdint>

#include "Animal.hpp"
#include "MinecraftLib.hpp"

namespace mc
{
    class TamableAnimal : public Animal
    {
    public:
        uint32_t field_0x780;
        uint32_t field_0x784;
    };
    MC_CHECK_SIZE(TamableAnimal, 0x788);
} // namespace mc
