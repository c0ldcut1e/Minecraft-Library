#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class CameraController
    {
    public:
        double *getCurrentPos()
        {
            return MLINK_FUNC(double *, 0x02BF33A4, CameraController *)(this);
        }

        double *getCurrentRot()
        {
            return MLINK_FUNC(double *, 0x02BF33AC, CameraController *)(this);
        }

        uint32_t field_0x0;
        mstd::vector<void *> field_0x4;
        mstd::vector<void *> field_0x14;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t currentPos;
        uint32_t currentRot;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
    };
    MC_CHECK_SIZE(CameraController, 0x58);
} // namespace mc
