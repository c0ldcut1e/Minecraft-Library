#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "entity/decoration/HangingEntity.hpp"

namespace mc
{
    class Painting : public HangingEntity
    {
    public:
        Painting(Level *level)
        {
            MLINK_FUNC(void, 0x02763E6C, Painting *, Level *)(this, level);
        }

        static Painting *Create(Level *level)
        {
            return MLINK_FUNC(Painting *, 0x023E6148, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x027CE9BC)();
        }

        uint32_t field_0x368;
        uint32_t field_0x36C;
    };
    MC_CHECK_SIZE(Painting, 0x370);
} // namespace mc
