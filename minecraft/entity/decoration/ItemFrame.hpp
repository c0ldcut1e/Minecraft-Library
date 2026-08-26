#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/decoration/HangingEntity.hpp"

namespace mc
{
    class ItemFrame : public HangingEntity
    {
    public:
        ItemFrame(Level *level)
        {
            MLINK_FUNC(void, 0x024D4A4C, ItemFrame *, Level *)(this, level);
        }

        static ItemFrame *Create(Level *level)
        {
            return MLINK_FUNC(ItemFrame *, 0x023E52AC, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252CC3C)();
        }

        uint32_t field_0x368;
        uint32_t field_0x36C;
    };
    MC_CHECK_SIZE(ItemFrame, 0x370);
} // namespace mc
