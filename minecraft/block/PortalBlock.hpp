#pragma once

#include "HalfTransparentBlock.hpp"

namespace mc
{
    class PortalBlock : public HalfTransparentBlock
    {
    public:
        PortalBlock()
        {
            MLINK_FUNC(void, 0x02742FF4, PortalBlock *)(this);
        }

        ~PortalBlock()
        {
            MLINK_FUNC(void, 0x027CD7F0, PortalBlock *, uint32_t)(this, 0);
        }

        static uint32_t getDataForAxis(Direction::Axis *axis)
        {
            return MLINK_FUNC(uint32_t, 0x02743644, Direction::Axis *)(axis);
        }
    };
    MC_CHECK_SIZE(PortalBlock, 0xB4);
} // namespace mc
