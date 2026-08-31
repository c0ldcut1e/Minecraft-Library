#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "fuiFile.hpp"
#include "fuiObject.hpp"
#include "fuiRGBA.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    class FJ_FuiNode;
    class fuiMatrix;
    class fuiRect;
    class fuiRenderNode;

    class VTable_fuiRenderNode : public VTable
    {
    public:
        MC_VFUNC(void, fuiRenderNode, __dt);
        MC_VFUNC(void, fuiRenderNode, shutdown);
        MC_VFUNC(void, fuiRenderNode, gather, bool);
        MC_VFUNC(void, fuiRenderNode, preRender);
        MC_VFUNC(void, fuiRenderNode, render, fuiRect *, fuiMatrix *);
        MC_VFUNC(void, fuiRenderNode, handleAddedToStage);
        MC_VFUNC(fuiRenderNode *, fuiRenderNode, findNode, const char *);
        MC_VFUNC(fuiRenderNode *, fuiRenderNode, getNodeFromPath, const char *);
        MC_VFUNC(void, fuiRenderNode, setVisibility, bool);
        MC_VFUNC(void, fuiRenderNode, setX, float);
        MC_VFUNC(void, fuiRenderNode, setY, float);
        MC_VFUNC(void, fuiRenderNode, setWidth, float);
        MC_VFUNC(void, fuiRenderNode, setHeight, float);
        MC_VFUNC(float, fuiRenderNode, getWidth);
        MC_VFUNC(float, fuiRenderNode, getHeight);
        MC_VFUNC(void, fuiRenderNode, getParentSpaceBounds, fuiRect *);
        MC_VFUNC(void, fuiRenderNode, generateGlobalMatrix);
    };
    MC_CHECK_SIZE(VTable_fuiRenderNode, 0x90);

    class fuiRenderNode
    {
    public:
        ~fuiRenderNode()
        {
            MLINK_FUNC(void, 0x02BAF014, fuiRenderNode *, uint32_t)(this, 0);
        }

        static fuiRenderNode *Construct(fuiRenderNode *storage, fuiRenderNode *parentRoot, fuiRenderNode *parent, fuiObject *object, uint32_t depth,
                                        MC_UNDEFINED_TYPE(uint32_t, eFuiObjectType) objectType, uint8_t flags, fuiRGBA *color, uint8_t alpha,
                                        bool useLargeBounds, fuiFile *file)
        {
            return MLINK_FUNC(fuiRenderNode *, 0x02BA8210, fuiRenderNode *, fuiRenderNode *, fuiRenderNode *, fuiObject *, uint32_t,
                              MC_UNDEFINED_TYPE(uint32_t, eFuiObjectType), uint8_t, fuiRGBA *, uint8_t, bool,
                              fuiFile *)(storage, parentRoot, parent, object, depth, objectType, flags, color, alpha, useLargeBounds, file);
        }

        void disableCtor()
        {
            MLINK_FUNC(void, 0x02BA8BA8, fuiRenderNode *)(this);
        }

        void gather(bool playing)
        {
            if (vtable != nullptr && vtable->gather != nullptr)
            {
                vtable->gather(this, playing);
            }
        }

        fuiRenderNode *getNodeFromPath(const char *path)
        {
            return MLINK_FUNC(fuiRenderNode *, 0x02BAF130, fuiRenderNode *, const char *)(this, path);
        }

        float getAlpha()
        {
            return MLINK_FUNC(float, 0x02BAF660, fuiRenderNode *)(this);
        }

        float getHeight()
        {
            return MLINK_FUNC(float, 0x02BAFC20, fuiRenderNode *)(this);
        }

        float getWidth()
        {
            return MLINK_FUNC(float, 0x02BAFBE4, fuiRenderNode *)(this);
        }

        float getX()
        {
            return MLINK_FUNC(float, 0x02BAF8F4, fuiRenderNode *)(this);
        }

        float getY()
        {
            return MLINK_FUNC(float, 0x02BAF8FC, fuiRenderNode *)(this);
        }

        bool isVisible()
        {
            return MLINK_FUNC(bool, 0x02BAF64C, fuiRenderNode *)(this);
        }

        void preRender()
        {
            if (vtable != nullptr && vtable->preRender != nullptr)
            {
                vtable->preRender(this);
            }
        }

        void render(fuiRect *rect, fuiMatrix *matrix)
        {
            if (vtable != nullptr && vtable->render != nullptr)
            {
                vtable->render(this, rect, matrix);
            }
        }

        void setVisible(bool visible)
        {
            if (vtable != nullptr && vtable->setVisibility != nullptr)
            {
                vtable->setVisibility(this, visible);
            }
        }

        void setAlpha(float alpha)
        {
            MLINK_FUNC(void, 0x02BAF658, fuiRenderNode *, float)(this, alpha);
        }

        void setHeight(float height)
        {
            MLINK_FUNC(void, 0x02BAFB50, fuiRenderNode *, float)(this, height);
        }

        void setScaleX(float scale)
        {
            MLINK_FUNC(void, 0x02BAF924, fuiRenderNode *, float)(this, scale);
        }

        void setScaleY(float scale)
        {
            MLINK_FUNC(void, 0x02BAFAB8, fuiRenderNode *, float)(this, scale);
        }

        void setWidth(float width)
        {
            MLINK_FUNC(void, 0x02BAF9BC, fuiRenderNode *, float)(this, width);
        }

        void setX(float x)
        {
            if (vtable != nullptr && vtable->setX != nullptr)
            {
                vtable->setX(this, x);
            }
        }

        void setY(float y)
        {
            if (vtable != nullptr && vtable->setY != nullptr)
            {
                vtable->setY(this, y);
            }
        }

        uint32_t flags;
        uint8_t objectFlags;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t field_0x7;
        uint32_t depth;
        uint32_t field_0xC;
        fuiObject *object;
        MC_UNDEFINED_TYPE(uint32_t, eFuiObjectType) objectType;
        float field_0x18;
        float field_0x1C;
        float field_0x20;
        float field_0x24;
        float field_0x28;
        float field_0x2C;
        float field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        float field_0x3C;
        float field_0x40;
        float field_0x44;
        fuiFile *file;
        float field_0x4C;
        float field_0x50;
        float field_0x54;
        float field_0x58;
        float field_0x5C;
        float field_0x60;
        float field_0x64;
        float field_0x68;
        float field_0x6C;
        float field_0x70;
        float field_0x74;
        float field_0x78;
        char field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        float field_0xBC;
        float field_0xC0;
        float field_0xC4;
        float field_0xC8;
        uint32_t field_0xCC;
        uint8_t field_0xD0;
        uint8_t field_0xD1;
        uint8_t field_0xD2;
        uint8_t field_0xD3;
        fuiRenderNode *parentRoot;
        fuiRenderNode *parent;
        FJ_FuiNode *fuiNode;
        VTable_fuiRenderNode *vtable;
    };
    MC_CHECK_SIZE(fuiRenderNode, 0xE4);
} // namespace mc
