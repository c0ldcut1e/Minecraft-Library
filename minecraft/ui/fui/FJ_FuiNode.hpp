#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "fuiRenderNode.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class FJ_FuiNode
    {
    public:
        FJ_FuiNode *asMovieClip()
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFC9E4, FJ_FuiNode *)(this);
        }

        int currentFrame()
        {
            return MLINK_FUNC(int, 0x02AFCD84, FJ_FuiNode *)(this);
        }

        FJ_FuiNode *getChildByName(const mstd::basic_string<char> &name)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB444, FJ_FuiNode *, const mstd::basic_string<char> &)(this, name);
        }

        float getX()
        {
            return MLINK_FUNC(float, 0x02AFB304, FJ_FuiNode *)(this);
        }

        float getY()
        {
            return MLINK_FUNC(float, 0x02AFB318, FJ_FuiNode *)(this);
        }

        void gotoAndStop(int frame)
        {
            MLINK_FUNC(void, 0x02AFCBCC, FJ_FuiNode *, int)(this, frame);
        }

        bool isVisible()
        {
            return MLINK_FUNC(bool, 0x02AFD13C, FJ_FuiNode *)(this);
        }

        void setScaleX(float scale)
        {
            MLINK_FUNC(void, 0x02AFB354, FJ_FuiNode *, float)(this, scale);
        }

        void setScaleY(float scale)
        {
            MLINK_FUNC(void, 0x02AFB368, FJ_FuiNode *, float)(this, scale);
        }

        void setVisible(bool visible)
        {
            MLINK_FUNC(void, 0x02AFD128, FJ_FuiNode *, bool)(this, visible);
        }

        void setX(float x)
        {
            MLINK_FUNC(void, 0x02AFCDAC, FJ_FuiNode *, float)(this, x);
        }

        void setY(float y)
        {
            MLINK_FUNC(void, 0x02AFCEA8, FJ_FuiNode *, float)(this, y);
        }

        fuiRenderNode *renderNode;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
    };
    MC_CHECK_SIZE(FJ_FuiNode, 0x20);
} // namespace mc
