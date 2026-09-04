#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Block.hpp"
#include "BlockPos.hpp"
#include "BlockState.hpp"
#include "Material.hpp"
#include "MaterialColor.hpp"
#include "internal/basic_string.hpp"
#include "utils/Direction.hpp"
#include "world/level/LevelSource.hpp"

namespace mc
{
    class HalfTransparentBlock : public Block
    {
    public:
        HalfTransparentBlock() = default;

        HalfTransparentBlock(const mstd::basic_string<wchar_t> &name, Material *material, bool transparent)
        {
            MLINK_FUNC(void, 0x024DB9F4, HalfTransparentBlock *, const mstd::basic_string<wchar_t> &, Material *, bool)(this, name, material,
                                                                                                                        transparent);
        }

        HalfTransparentBlock(const mstd::basic_string<wchar_t> &name, Material *material, bool transparent, const MaterialColor *color)
        {
            MLINK_FUNC(void, 0x024DBAD4, HalfTransparentBlock *, const mstd::basic_string<wchar_t> &, Material *, bool,
                       const MaterialColor *)(this, name, material, transparent, color);
        }

        ~HalfTransparentBlock()
        {
            MLINK_FUNC(void, 0x0252D4E8, HalfTransparentBlock *, uint32_t)(this, 0);
        }

        bool isSolidRender(const BlockState *blockState)
        {
            return MLINK_FUNC(bool, 0x024DBB8C, HalfTransparentBlock *, const BlockState *)(this, blockState);
        }

        bool shouldRenderFace(const BlockState *blockState, LevelSource *levelSource, const BlockPos &pos, const Direction *direction)
        {
            return MLINK_FUNC(bool, 0x024DBB94, HalfTransparentBlock *, const BlockState *, LevelSource *, const BlockPos &,
                              const Direction *)(this, blockState, levelSource, pos, direction);
        }

        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
    };
    MC_CHECK_SIZE(HalfTransparentBlock, 0xB4);
} // namespace mc
