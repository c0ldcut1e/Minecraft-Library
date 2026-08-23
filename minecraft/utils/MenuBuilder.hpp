#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{

    class MenuBuilder
    {
    public:
        void ADD(const mboost::shared_ptr<ItemInstance> &Instance, const mboost::shared_ptr<ItemInstance> &InstanceSharedPtr)
        {
            ItemInstance::toShared(InstanceSharedPtr, Instance.get());
            MLINK_FUNC(void, 0x02F0F424, MenuBuilder *, const mboost::shared_ptr<ItemInstance> &)(this, InstanceSharedPtr);
        }

        void ADD(const mboost::shared_ptr<ItemInstance> &item)
        {
            mboost::shared_ptr<mc::ItemInstance> ptr;
            ADD(item, ptr);
        }

        void ITEM_BLOCKSTATE(uint32_t BlockState)
        {
            MLINK_FUNC(void, 0x02ECCD20, MenuBuilder *, uint32_t)(this, BlockState);
        }
    };
} // namespace mc
