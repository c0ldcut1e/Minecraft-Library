#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "ui/control/UIControl_Base.hpp"
#include "ui/fui/fuiRenderNode.hpp"
#include "ui/scene/UIScene.hpp"

namespace mc
{
    class UIControl_Cursor : public UIControl_Base
    {
    public:
        UIControl_Cursor()
        {
            MLINK_FUNC(void, 0x02DBF328, UIControl_Cursor *)(this);
        }

        bool setupControl(UIScene *scene, fuiRenderNode *node, const mstd::basic_string<char> &name)
        {
            return MLINK_FUNC(bool, 0x02DBF394, UIControl_Cursor *, UIScene *, fuiRenderNode *, const mstd::basic_string<char> &)(this, scene, node,
                                                                                                                                  name);
        }
    };
    MC_CHECK_SIZE(UIControl_Cursor, 0x5C);
} // namespace mc
