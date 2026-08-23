#pragma once

#include <cstdint>

#include "IUIScene_AbstractContainerMenu.hpp"
#include "UIScene.hpp"

namespace mc
{
    class UIScene_AbstractContainerMenu : public UIScene
    {
    public:
        IUIScene_AbstractContainerMenu *GetContainerMenuInterface()
        {
            return *(IUIScene_AbstractContainerMenu **) ((uintptr_t) this + 0x354);
        }
    };
} // namespace mc
