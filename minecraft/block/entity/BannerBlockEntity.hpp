#pragma once

#include <cstdint>

#include "BlockEntity.hpp"
#include "MinecraftLib.hpp"
#include "internal/vector.hpp"
#include "item/DyeColor.hpp"
#include "mlink/MLink.hpp"
#include "nbt/CompoundTag.hpp"
#include "nbt/ListTag.hpp"

namespace mc
{
    class BannerBlockEntity : public BlockEntity
    {
    public:
        void load(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x020958D4, BannerBlockEntity *, CompoundTag *)(this, tag);
        }

        void createPatternList()
        {
            MLINK_FUNC(void, 0x02097054, BannerBlockEntity *)(this);
        }

        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        DyeColor *baseColor;
        ListTag *patternTags;
        bool patternListCreated;
        mstd::vector<MC_UNDEFINED_TYPE(const void *, BannerPattern)> *patterns;
        mstd::vector<const DyeColor *> *colors;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
    };

    MC_CHECK_SIZE(BannerBlockEntity, 0x88);
} // namespace mc
