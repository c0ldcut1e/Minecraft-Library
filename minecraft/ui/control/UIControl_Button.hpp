#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "UIControl_Base.hpp"
#include "internal/basic_string.hpp"
#include "ui/UIString.hpp"
#include "ui/fui/fuiRenderNode.hpp"
#include "ui/scene/UIScene.hpp"

namespace mc
{

    class UIControl_Button : public UIControl_Base
    {
    public:
        UIControl_Button()
        {
            MLINK_FUNC(void, 0x02DBE7B0, UIControl_Button *)(this);
        }

        void init(UIString *label, int id)
        {
            MLINK_FUNC(void, 0x02DBE848, UIControl_Button *, UIString *, int)(this, label, id);
        }

        void ReInit()
        {
            MLINK_FUNC(void, 0x02DBEA04, UIControl_Button *)(this);
        }

        void setEnable(bool enabled, bool applyNow)
        {
            MLINK_FUNC(void, 0x02DBEA9C, UIControl_Button *, bool, bool)(this, enabled, applyNow);
        }

        void setFocus(bool focused)
        {
            MLINK_FUNC(void, 0x02DBEB84, UIControl_Button *, bool)(this, focused);
        }

        bool setupControl(UIScene *scene, fuiRenderNode *fuiNode, const mstd::basic_string<char> &name)
        {
            return MLINK_FUNC(bool, 0x02DBE830, UIControl_Button *, UIScene *, fuiRenderNode *, const mstd::basic_string<char> &)(this, scene,
                                                                                                                                  fuiNode, name);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x02DBEB24, UIControl_Button *)(this);
        }

        uint32_t field_0x5C;
    };
    MC_CHECK_SIZE(UIControl_Button, 0x60);
} // namespace mc
