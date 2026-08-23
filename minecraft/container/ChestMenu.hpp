#pragma once

#include "mlink/MLink.hpp"

#include "AbstractContainerMenu.hpp"
#include "Container.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class ChestMenu : public AbstractContainerMenu
    {
    public:
        void getContainer(const mboost::shared_ptr<Container> &result)
        {
            MLINK_FUNC(void, 0x021FB164, ChestMenu *, const mboost::shared_ptr<Container> &)(this, result);
        }
    };
} // namespace mc
