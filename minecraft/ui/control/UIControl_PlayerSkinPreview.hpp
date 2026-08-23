#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#include "client/Minecraft.hpp"
#include "internal/basic_string.hpp"
#include "ui/fui/fuiRect.hpp"

namespace mc
{
    class UIControl_PlayerSkinPreview
    {
    public:
        UIControl_PlayerSkinPreview()
        {
            memset(native, 0, sizeof(native));
            initialized = false;
        }
        ~UIControl_PlayerSkinPreview()
        {
            if (initialized)
            {
                MLINK_FUNC(void, 0x02F0E1C0, void *, uint32_t)(native, 0);
            }
        }

        bool Initialize()
        {
            if (initialized)
            {
                return true;
            }

            const Minecraft *minecraft = Minecraft::GetInstance();
            if (minecraft == nullptr || minecraft->options == nullptr || minecraft->entityRenderDispatcher == nullptr)
            {
                return false;
            }

            MLINK_FUNC(void, 0x02E8D41C, void *)(native);
            initialized = true;
            return true;
        }

        bool IsInitialized() const
        {
            return initialized;
        }

        void Render(fuiRect *region)
        {
            if (!initialized || region == nullptr)
            {
                return;
            }

            MLINK_FUNC(void, 0x02E8E0E0, void *, fuiRect *)(native, region);
        }

        void ResetPoseAnimation()
        {
            if (!initialized)
            {
                return;
            }

            const float poseAmount = -1.0F / 15.0F;
            const float poseTime   = 0.0F;
            memcpy(native + s_previousPoseAmountOffset, &poseAmount, sizeof(poseAmount));
            memcpy(native + s_poseAmountOffset, &poseAmount, sizeof(poseAmount));
            memcpy(native + s_poseTimeOffset, &poseTime, sizeof(poseTime));
        }

        void SetCapeTexture(const mstd::basic_string<wchar_t> &path)
        {
            if (!initialized)
            {
                return;
            }

            auto *capePath = (mstd::basic_string<wchar_t> *) (native + s_capePathOffset);
            *capePath      = path;
        }

        void SetRotation(int degrees)
        {
            if (!initialized)
            {
                return;
            }

            memcpy(native + s_rotationOffset, &degrees, sizeof(degrees));
        }

        void SetTexture(const mstd::basic_string<wchar_t> &path, int backupTexture)
        {
            if (!initialized)
            {
                return;
            }

            MLINK_FUNC(void, 0x02E8E51C, void *, const mstd::basic_string<wchar_t> &, int)(native, path, backupTexture);
        }

        UIControl_PlayerSkinPreview(const UIControl_PlayerSkinPreview &) = delete;

        UIControl_PlayerSkinPreview(UIControl_PlayerSkinPreview &&) = delete;

        UIControl_PlayerSkinPreview &operator=(const UIControl_PlayerSkinPreview &) = delete;

        UIControl_PlayerSkinPreview &operator=(UIControl_PlayerSkinPreview &&) = delete;

        static const size_t s_nativeSize               = 0x13C;
        static const size_t s_capePathOffset           = 0x80;
        static const size_t s_rotationOffset           = 0x100;
        static const size_t s_previousPoseAmountOffset = 0x114;
        static const size_t s_poseAmountOffset         = 0x118;
        static const size_t s_poseTimeOffset           = 0x11C;

        alignas(uint32_t) uint8_t native[s_nativeSize];
        bool initialized;
    };
} // namespace mc
