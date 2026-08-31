#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "fuiRenderNode.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class FJ_Cursor;

    class FJ_FuiNode
    {
    public:
        ~FJ_FuiNode()
        {
            MLINK_FUNC(void, 0x02AFB230, FJ_FuiNode *, uint32_t)(this, 0);
        }

        static FJ_FuiNode *Construct(FJ_FuiNode *storage, fuiRenderNode *renderNode)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB13C, FJ_FuiNode *, fuiRenderNode *)(storage, renderNode);
        }

        static FJ_FuiNode *Create(fuiRenderNode *renderNode)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB1CC, fuiRenderNode *)(renderNode);
        }

        FJ_Cursor *asFJCursor()
        {
            return MLINK_FUNC(FJ_Cursor *, 0x02AFC434, FJ_FuiNode *)(this);
        }

        FJ_FuiNode *asMovieClip()
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFC9E4, FJ_FuiNode *)(this);
        }

        void decHeight(float height)
        {
            MLINK_FUNC(void, 0x02AFCFB8, FJ_FuiNode *, float)(this, height);
        }

        void decX(float x)
        {
            MLINK_FUNC(void, 0x02AFCDC0, FJ_FuiNode *, float)(this, x);
        }

        void decY(float y)
        {
            MLINK_FUNC(void, 0x02AFCEBC, FJ_FuiNode *, float)(this, y);
        }

        FJ_FuiNode *getChildAt(int index)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB570, FJ_FuiNode *, int)(this, index);
        }

        int currentFrame()
        {
            return MLINK_FUNC(int, 0x02AFCD84, FJ_FuiNode *)(this);
        }

        FJ_FuiNode *getChildByName(const mstd::basic_string<char> &name)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB444, FJ_FuiNode *, const mstd::basic_string<char> &)(this, name);
        }

        fuiRenderNode *getRenderNodeChildAt(int index)
        {
            return MLINK_FUNC(fuiRenderNode *, 0x02AFB53C, FJ_FuiNode *, int)(this, index);
        }

        fuiRenderNode *getRenderNodeChildByName(const mstd::basic_string<char> &name)
        {
            return MLINK_FUNC(fuiRenderNode *, 0x02AFB4C8, FJ_FuiNode *, const mstd::basic_string<char> &)(this, name);
        }

        float getHeight()
        {
            return MLINK_FUNC(float, 0x02AFB340, FJ_FuiNode *)(this);
        }

        int getNumChildren()
        {
            return MLINK_FUNC(int, 0x02AFB408, FJ_FuiNode *)(this);
        }

        FJ_FuiNode *getParent()
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02AFB59C, FJ_FuiNode *)(this);
        }

        fuiRenderNode *getRenderNodeParent()
        {
            return MLINK_FUNC(fuiRenderNode *, 0x02AFB564, FJ_FuiNode *)(this);
        }

        MC_UNDEFINED_TYPE(uint32_t *, FJ_FuiNodeStage) getStage()
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t *, FJ_FuiNodeStage), 0x02AFB1FC, FJ_FuiNode *)(this);
        }

        float getWidth()
        {
            return MLINK_FUNC(float, 0x02AFB32C, FJ_FuiNode *)(this);
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

        void incHeight(float height)
        {
            MLINK_FUNC(void, 0x02AFD02C, FJ_FuiNode *, float)(this, height);
        }

        void incX(float x)
        {
            MLINK_FUNC(void, 0x02AFCE34, FJ_FuiNode *, float)(this, x);
        }

        void incY(float y)
        {
            MLINK_FUNC(void, 0x02AFCF30, FJ_FuiNode *, float)(this, y);
        }

        bool isFJCursor()
        {
            return MLINK_FUNC(bool, 0x02AFC480, FJ_FuiNode *)(this);
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

        void setTabIndex(int index)
        {
            MLINK_FUNC(void, 0x02AFD120, FJ_FuiNode *, int)(this, index);
        }

        void setWidth(float width)
        {
            MLINK_FUNC(void, 0x02AFD0A0, FJ_FuiNode *, float)(this, width);
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
        int tabIndex;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        VTable *vtable;
    };
    MC_CHECK_SIZE(FJ_FuiNode, 0x20);
} // namespace mc
