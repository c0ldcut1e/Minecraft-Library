#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "fuiFile.hpp"
#include "fuiObject.hpp"
#include "fuiRGBA.hpp"
#include "fuiRenderNode.hpp"

namespace mc
{
    class fuiRenderNodeTimeline : public fuiRenderNode
    {
    public:
        fuiRenderNodeTimeline(fuiRenderNode *parentRoot, fuiRenderNode *parent, fuiObject *object, uint32_t depth, uint8_t flags, fuiRGBA *color,
                              uint8_t alpha, bool useLargeBounds, fuiFile *file)
        {
            MLINK_FUNC(fuiRenderNodeTimeline *, 0x02BA8934, fuiRenderNodeTimeline *, fuiRenderNode *, fuiRenderNode *, fuiObject *, uint32_t, uint8_t,
                       fuiRGBA *, uint8_t, bool, fuiFile *)(this, parentRoot, parent, object, depth, flags, color, alpha, useLargeBounds, file);
        }

        void handleConstruction()
        {
            MLINK_FUNC(void, 0x02BD4390, fuiRenderNodeTimeline *)(this);
        }

        void setFrame(uint32_t frame)
        {
            MLINK_FUNC(void, 0x02BA8D8C, fuiRenderNodeTimeline *, uint32_t)(this, frame);
        }

        void setPlaying(bool playing)
        {
            MLINK_FUNC(void, 0x02BA8D58, fuiRenderNodeTimeline *, bool)(this, playing);
        }

        uint32_t childrenProxy;
        fuiRenderNode **childrenBegin;
        fuiRenderNode **childrenEnd;
        fuiRenderNode **childrenCapacity;
        uint32_t removedProxy;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t frameActionsProxy;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
    };
    MC_CHECK_SIZE(fuiRenderNodeTimeline, 0x120);
} // namespace mc
