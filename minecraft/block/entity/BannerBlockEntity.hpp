#pragma once

#include "mlink/MLink.hpp"

#include "BlockEntity.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class BannerBlockEntity : public BlockEntity
    {
    public:
        void load(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x020958D4, BannerBlockEntity *, CompoundTag *)(this, tag);
        }
    };
} // namespace mc
