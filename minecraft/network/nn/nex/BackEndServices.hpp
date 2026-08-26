#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "AccountManagementProtocolClient.hpp"
#include "Credentials.hpp"
#include "MinecraftLib.hpp"
#include "StreamManager.hpp"

namespace nn::nex
{
    class BackEndServices
    {
    public:
        [[nodiscard]] bool TerminateJobIsInProgress() const
        {
            return MLINK_FUNC(bool, 0x037B9EC4, const BackEndServices *)(this);
        }

        void TerminateImpl()
        {
            MLINK_FUNC(void, 0x037B9FBC, BackEndServices *)(this);
        }

        [[nodiscard]] StreamManager *GetStreamManager()
        {
            return MLINK_FUNC(StreamManager *, 0x037BA6BC, BackEndServices *)(this);
        }

        [[nodiscard]] AccountManagementProtocolClient *GetAuthenticationClient()
        {
            return MLINK_FUNC(AccountManagementProtocolClient *, 0x037BC008, BackEndServices *)(this);
        }

        [[nodiscard]] bool IsConnected() const
        {
            return MLINK_FUNC(bool, 0x037BA74C, const BackEndServices *)(this);
        }

        void ReleaseCredentials()
        {
            MLINK_FUNC(void, 0x037BBFC4, BackEndServices *)(this);
        }

        void PostLogoutCleanup()
        {
            MLINK_FUNC(void, 0x037BC004, BackEndServices *)(this);
        }

        void CreateStreamManager()
        {
            MLINK_FUNC(void, 0x037BCC40, BackEndServices *)(this);
        }

        [[nodiscard]] bool LoginJobIsInProgress() const
        {
            return MLINK_FUNC(bool, 0x037BCD1C, const BackEndServices *)(this);
        }

        [[nodiscard]] bool LogoutJobIsInProgress() const
        {
            return MLINK_FUNC(bool, 0x037BCD44, const BackEndServices *)(this);
        }

        void SetEffectiveLoginTimeout(int timeout)
        {
            MLINK_FUNC(void, 0x037BCD6C, BackEndServices *, int)(this, timeout);
        }

        [[nodiscard]] bool EffectiveTimeoutIsSet() const
        {
            return MLINK_FUNC(bool, 0x037BCD74, const BackEndServices *)(this);
        }

        void CancelLoginJob()
        {
            MLINK_FUNC(void, 0x037BEA68, BackEndServices *)(this);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        Credentials *credentials;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
    };
    MC_CHECK_SIZE(BackEndServices, 0xE8);
} // namespace nn::nex
