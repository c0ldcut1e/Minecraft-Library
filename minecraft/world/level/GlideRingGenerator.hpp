#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/texture/TextureAtlasSprite.hpp"
#include "internal/vector.hpp"
#include "utils/AABB.hpp"

namespace mc
{
    class GlideRingGenerator
    {
    public:
        enum eGlideRingSize : int
        {
            eGlideRingSize_Small  = 0,
            eGlideRingSize_Medium = 1,
            eGlideRingSize_Large  = 2
        };

        enum eGlideRingSection : int
        {
            eGlideRingSection_FirstPositiveEdge    = 0,
            eGlideRingSection_FirstNegativeEdge    = 1,
            eGlideRingSection_SecondNegativeEdge   = 2,
            eGlideRingSection_SecondPositiveEdge   = 3,
            eGlideRingSection_FirstNegativeCorner  = 4,
            eGlideRingSection_FirstPositiveCorner  = 5,
            eGlideRingSection_SecondNegativeCorner = 6,
            eGlideRingSection_SecondPositiveCorner = 7
        };

        enum eGlideRingOrientation : int
        {
            eGlideRingOrientation_XY = 0,
            eGlideRingOrientation_YZ = 1,
            eGlideRingOrientation_XZ = 2
        };

        static void BuildRing(mstd::vector<BlockPos> &positions, const AABB *area, eGlideRingSize size)
        {
            MLINK_FUNC(void, 0x024207A4, mstd::vector<BlockPos> &, const AABB *, eGlideRingSize)(positions, area, size);
        }

        static TextureAtlasSprite *getIcon(eGlideRingSize size)
        {
            return MLINK_FUNC(TextureAtlasSprite *, 0x02420A90, eGlideRingSize)(size);
        }

        static void GetSectionPositions(mstd::vector<BlockPos> &positions, const BlockPos &center, eGlideRingSize size, eGlideRingSection section,
                                        eGlideRingOrientation orientation)
        {
            MLINK_FUNC(void, 0x024202E0, mstd::vector<BlockPos> &, const BlockPos &, eGlideRingSize, eGlideRingSection,
                       eGlideRingOrientation)(positions, center, size, section, orientation);
        }

        static void registerIcons(MC_UNDEFINED_TYPE(uint32_t *, IconRegister) iconRegister)
        {
            MLINK_FUNC(void, 0x024209FC, MC_UNDEFINED_TYPE(uint32_t *, IconRegister))(iconRegister);
        }
    };
} // namespace mc
