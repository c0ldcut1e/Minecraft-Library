#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "fuiFile.hpp"
#include "fuiObject.hpp"
#include "fuiRGBA.hpp"
#include "fuiRenderNode.hpp"

namespace mc
{
    class fuiRenderNodeBitmap : public fuiRenderNode
    {
    public:
        fuiRenderNodeBitmap(fuiRenderNode *parentRoot, fuiRenderNode *parent, fuiObject *object, uint32_t depth, uint8_t flags, fuiRGBA *color,
                            uint8_t alpha, bool useLargeBounds, fuiFile *file)
        {
            MLINK_FUNC(fuiRenderNodeBitmap *, 0x02BA8A9C, fuiRenderNodeBitmap *, fuiRenderNode *, fuiRenderNode *, fuiObject *, uint32_t, uint8_t,
                       fuiRGBA *, uint8_t, bool, fuiFile *)(this, parentRoot, parent, object, depth, flags, color, alpha, useLargeBounds, file);
        }
    };
} // namespace mc
