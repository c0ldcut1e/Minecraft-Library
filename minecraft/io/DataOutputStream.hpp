#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "OutputStream.hpp"
#include "internal/not_null_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class DataOutputStream
    {
    public:
        DataOutputStream(OutputStream *stream)
        {
            MLINK_FUNC(DataOutputStream *, 0x02293E44, DataOutputStream *, OutputStream *)(this, stream);
        }
        ~DataOutputStream()
        {
            MLINK_FUNC(void, 0x0228A6AC, DataOutputStream *)(this);
        }

        void close()
        {
            MLINK_FUNC(void, 0x02296A18, DataOutputStream *)(this);
        }

        void flush()
        {
            MLINK_FUNC(void, 0x02297290, DataOutputStream *)(this);
        }

        void writeItem(const mboost::not_null_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x02296F04, DataOutputStream *, mboost::not_null_ptr<ItemInstance>)(this, item);
        }

        void writeNbt(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x02296C44, DataOutputStream *, CompoundTag *)(this, tag);
        }

        uint8_t storage[0x20];
    };
    MC_CHECK_SIZE(DataOutputStream, 0x20);
} // namespace mc
