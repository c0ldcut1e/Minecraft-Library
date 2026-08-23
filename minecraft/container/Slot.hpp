#pragma once

#include "Container.hpp"
#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class Slot
    {
    public:
        int slot;
        mboost::shared_ptr<Container> container;
        int index;
        int x;
        int y;
        VTable *vtable;
    };
    MC_CHECK_SIZE(Slot, 0x1C);
} // namespace mc
