#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/pair.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class UIScene;
    class UIGroup;

    class UILayer
    {
    public:
        void updateFocusState(bool unk1)
        {
            MLINK_FUNC(void, 0x02E7F95C, UILayer *, bool)(this, unk1);
        }

        mstd::vector<UIScene *> scenes;
        mstd::vector<UIScene *> components;
        mstd::vector<UIScene *> field_0x20;
        mstd::vector<UIScene *> field_0x30;
        mboost::unordered::unordered_map<int, mstd::pair<int, bool>> componentVisibilty;
        bool field_0x58;
        bool field_0x59;
        bool field_0x5A;
        bool field_0x5B;
        int field_0x5C;
        int field_0x60;
        UIGroup *group;
    };
    MC_CHECK_SIZE(UILayer, 0x68);
} // namespace mc
