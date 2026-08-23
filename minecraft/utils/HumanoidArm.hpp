#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class HumanoidArm
    {
    public:
        static inline const HumanoidArm *&LEFT = *(const HumanoidArm **) MLink::CorrectPointerOffset(0x104DDE84);

        static inline const HumanoidArm *&RIGHT = *(const HumanoidArm **) MLink::CorrectPointerOffset(0x104DDE88);

        static const HumanoidArm *getOpposite()
        {
            return MLINK_FUNC(HumanoidArm *, 0x0250ADC8)();
        }
    };
    MC_CHECK_SIZE(HumanoidArm, 0x1);

} // namespace mc
