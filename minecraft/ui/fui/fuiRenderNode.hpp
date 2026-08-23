#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "fuiFile.hpp"
#include "fuiObject.hpp"
#include "internal/VTable.hpp"
#include "utils/Vec2f.hpp"

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
        void gather(bool playing)
        {
            if (vtable != nullptr && vtable->gather != nullptr)
            {
                vtable->gather(this, playing);
            }
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

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        fuiObject *object;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        Vec2f position;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        fuiFile *file;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
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
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        fuiRenderNode *parentRoot;
        fuiRenderNode *parent;
        FJ_FuiNode *fuiNode;
        VTable_fuiRenderNode *vtable;
    };
    MC_CHECK_SIZE(fuiRenderNode, 0xE4);
} // namespace mc
