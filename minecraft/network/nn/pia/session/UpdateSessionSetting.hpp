#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::session
{
    class UpdateSessionSetting
    {
    public:
        UpdateSessionSetting()
        {
            MLINK_FUNC(void, 0x03836D10, UpdateSessionSetting *)(this);
        }

        ~UpdateSessionSetting()
        {
            MLINK_FUNC(void, 0x03836D58, UpdateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetModificationFlag() const
        {
            return MLINK_FUNC(uint32_t, 0x03836CD8, const UpdateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsModificationFlagSet(uint32_t modificationFlag) const
        {
            return MLINK_FUNC(bool, 0x03836CE0, const UpdateSessionSetting *, uint32_t)(this, modificationFlag);
        }

        [[nodiscard]] bool IsSetApplicationData() const
        {
            return MLINK_FUNC(bool, 0x03836CF0, const UpdateSessionSetting *)(this);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x03836D04, UpdateSessionSetting *)(this);
        }

        uint32_t modificationFlags;
        void *field_0x4;
    };
    MC_CHECK_SIZE(UpdateSessionSetting, 0x8);
} // namespace nn::pia::session
