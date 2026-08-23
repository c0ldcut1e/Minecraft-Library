#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/not_null_ptr.hpp"

namespace mc
{
    class ItemInstance;

    namespace InteractionResult
    {
        enum EInteractionResult : uint32_t
        {
            SUCCESS = 0,
            PASS    = 1,
            FAIL    = 2,
        };
    }

    class InteractionResultHolder
    {
    public:
        InteractionResultHolder(InteractionResult::EInteractionResult result, const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x021A336C, InteractionResultHolder *, InteractionResult::EInteractionResult,
                       const mboost::not_null_ptr<ItemInstance> &)(this, result, item);
        }

        InteractionResult::EInteractionResult result;
        mboost::not_null_ptr<ItemInstance> item;
    };

    MC_CHECK_SIZE(InteractionResultHolder, 0xC);
} // namespace mc
