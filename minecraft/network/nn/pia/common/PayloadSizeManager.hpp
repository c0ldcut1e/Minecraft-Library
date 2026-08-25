#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/Result.hpp"

namespace nn::pia::common
{
    class PayloadSizeManager
    {
    public:
        PayloadSizeManager()
        {
            MLINK_FUNC(void, 0x0354125C, PayloadSizeManager *)(this);
        }

        ~PayloadSizeManager()
        {
            MLINK_FUNC(void, 0x0354149C, PayloadSizeManager *)(this);
        }

        static Result CreateInstance()
        {
            Result result;
            MLINK_FUNC(void, 0x035412B0, Result *)(&result);
            return result;
        }

        static PayloadSizeManager *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<PayloadSizeManager>(0x104D1D74);
        }

        static void DestroyInstance()
        {
            MLINK_FUNC(void, 0x035414B0)();
        }

        Result SetMtuSize(uint32_t size)
        {
            Result result;
            MLINK_FUNC(void, 0x0354152C, PayloadSizeManager *, Result *, uint32_t)(this, &result, size);
            return result;
        }

        uint32_t mtuSize;
        uint32_t minimumMtuSize;
        uint32_t maximumMtuSize;
        uint32_t field_0xC;
        uint32_t field_0x10;
    };
    MC_CHECK_SIZE(PayloadSizeManager, 0x14);
} // namespace nn::pia::common
