#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/player/Player.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class AbstractContainerMenu
    {
    public:
        mstd::vector<mboost::shared_ptr<ItemInstance>> &getItems()
        {
            return MLINK_FUNC(mstd::vector<mboost::shared_ptr<ItemInstance>> &, 0x02033EA0, AbstractContainerMenu *)(this);
        }

        void setItem(uint32_t slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x0203FACC, AbstractContainerMenu *, uint32_t, mboost::shared_ptr<ItemInstance>)(this, slot, item);
        }

        void setSynched(const mboost::shared_ptr<Player> &player, bool unk1)
        {
            MLINK_FUNC(void, 0x02041014, AbstractContainerMenu *, mboost::shared_ptr<Player>, bool)(this, player, unk1);
        }
    };
} // namespace mc
