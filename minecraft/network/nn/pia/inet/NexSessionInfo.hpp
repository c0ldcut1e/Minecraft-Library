#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::inet
{
    class NexSessionInfo
    {
    public:
        NexSessionInfo()
        {
            MLINK_FUNC(void, 0x03580E08, NexSessionInfo *)(this);
        }

        ~NexSessionInfo()
        {
            MLINK_FUNC(void, 0x03580F20, NexSessionInfo *)(this);
        }

        [[nodiscard]] uint32_t GetGameMode() const
        {
            return MLINK_FUNC(uint32_t, 0x03580F34, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint32_t GetSessionId() const
        {
            return MLINK_FUNC(uint32_t, 0x03580F3C, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint16_t GetCurrentParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03580F4C, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint16_t GetMinParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03580F54, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint16_t GetMaxParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03580F5C, const NexSessionInfo *)(this);
        }

        [[nodiscard]] bool IsOpened() const
        {
            return MLINK_FUNC(bool, 0x03580F64, const NexSessionInfo *)(this);
        }

        void GetApplicationData(void *data, uint32_t size) const
        {
            MLINK_FUNC(void, 0x03580F6C, const NexSessionInfo *, void *, uint32_t)(this, data, size);
        }

        [[nodiscard]] uint32_t GetApplicationDataSize() const
        {
            return MLINK_FUNC(uint32_t, 0x0358104C, const NexSessionInfo *)(this);
        }

        bool GetAttribute(uint8_t index, uint32_t *attribute) const
        {
            return MLINK_FUNC(bool, 0x03581054, const NexSessionInfo *, uint8_t, uint32_t *)(this, index, attribute);
        }

        [[nodiscard]] bool IsRestrictedByUserPassword() const
        {
            return MLINK_FUNC(bool, 0x03581118, const NexSessionInfo *)(this);
        }

        [[nodiscard]] bool IsRestrictedBySystemPassword() const
        {
            return MLINK_FUNC(bool, 0x03581120, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint32_t GetSessionType() const
        {
            return MLINK_FUNC(uint32_t, 0x03581128, const NexSessionInfo *)(this);
        }

        [[nodiscard]] bool IsAutoCloseSession() const
        {
            return MLINK_FUNC(bool, 0x03581130, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint64_t GetHostPrincipalId() const
        {
            return MLINK_FUNC(uint64_t, 0x03581138, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint64_t GetTargetPrincipalId() const
        {
            return MLINK_FUNC(uint64_t, 0x03581144, const NexSessionInfo *)(this);
        }

        [[nodiscard]] uint8_t GetSelectionPriority() const
        {
            return MLINK_FUNC(uint8_t, 0x03581150, const NexSessionInfo *)(this);
        }

        void Clear()
        {
            MLINK_FUNC(void, 0x03581160, NexSessionInfo *)(this);
        }

        void SetGameMode(uint32_t gameMode)
        {
            MLINK_FUNC(void, 0x03581218, NexSessionInfo *, uint32_t)(this, gameMode);
        }

        void SetSessionId(uint32_t newSessionId)
        {
            MLINK_FUNC(void, 0x03581220, NexSessionInfo *, uint32_t)(this, newSessionId);
        }

        void SetCurrentParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03581228, NexSessionInfo *, uint16_t)(this, participantCount);
        }

        void SetMinParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03581230, NexSessionInfo *, uint16_t)(this, participantCount);
        }

        void SetMaxParticipantNum(uint16_t participantCount)
        {
            MLINK_FUNC(void, 0x03581238, NexSessionInfo *, uint16_t)(this, participantCount);
        }

        void SetOpen(bool open)
        {
            MLINK_FUNC(void, 0x03581240, NexSessionInfo *, bool)(this, open);
        }

        void SetAttribute(uint8_t index, uint32_t attribute)
        {
            MLINK_FUNC(void, 0x03581248, NexSessionInfo *, uint8_t, uint32_t)(this, index, attribute);
        }

        void SetApplicationData(const void *data, uint32_t size)
        {
            MLINK_FUNC(void, 0x03581260, NexSessionInfo *, const void *, uint32_t)(this, data, size);
        }

        void SetUserPasswordEnabled(bool enabled)
        {
            MLINK_FUNC(void, 0x035812D4, NexSessionInfo *, bool)(this, enabled);
        }

        void SetSystemPasswordEnabled(bool enabled)
        {
            MLINK_FUNC(void, 0x035812DC, NexSessionInfo *, bool)(this, enabled);
        }

        void SetHostPrincipalId(uint64_t principalId)
        {
            MLINK_FUNC(void, 0x035812F0, NexSessionInfo *, uint64_t)(this, principalId);
        }

        void SetTargetPrincipalId(uint64_t principalId)
        {
            MLINK_FUNC(void, 0x035812FC, NexSessionInfo *, uint64_t)(this, principalId);
        }

        void SetSelectionPriority(uint8_t priority)
        {
            MLINK_FUNC(void, 0x03581308, NexSessionInfo *, uint8_t)(this, priority);
        }

        uint32_t field_0x0;
        uint32_t gameMode;
        uint32_t sessionId;
        uint16_t currentParticipantCount;
        uint16_t minimumParticipantCount;
        uint16_t maximumParticipantCount;
        uint8_t isOpen;
        uint8_t field_0x13;
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
        uint32_t field_0x70;
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
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
        uint32_t field_0x150;
        uint32_t field_0x154;
        uint32_t field_0x158;
        uint32_t field_0x15C;
        uint32_t field_0x160;
        uint32_t field_0x164;
        uint32_t field_0x168;
        uint32_t field_0x16C;
        uint32_t field_0x170;
        uint32_t field_0x174;
        uint32_t field_0x178;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        uint32_t field_0x184;
        uint32_t field_0x188;
        uint32_t field_0x18C;
        uint32_t field_0x190;
        uint32_t field_0x194;
        uint32_t field_0x198;
        uint32_t field_0x19C;
        uint32_t field_0x1A0;
        uint32_t field_0x1A4;
        uint32_t field_0x1A8;
        uint32_t field_0x1AC;
        uint32_t field_0x1B0;
        uint32_t field_0x1B4;
        uint32_t field_0x1B8;
        uint32_t field_0x1BC;
        uint32_t field_0x1C0;
        uint32_t field_0x1C4;
        uint32_t field_0x1C8;
        uint32_t field_0x1CC;
        uint32_t field_0x1D0;
        uint32_t field_0x1D4;
        uint32_t field_0x1D8;
        uint32_t field_0x1DC;
        uint32_t field_0x1E0;
        uint32_t field_0x1E4;
        uint32_t field_0x1E8;
        uint32_t field_0x1EC;
        uint32_t field_0x1F0;
        uint32_t field_0x1F4;
        uint32_t field_0x1F8;
        uint32_t field_0x1FC;
        uint32_t field_0x200;
        uint32_t field_0x204;
        uint32_t field_0x208;
        uint32_t field_0x20C;
        uint32_t field_0x210;
        uint32_t field_0x214;
        uint32_t field_0x218;
        uint32_t field_0x21C;
        uint32_t field_0x220;
        uint32_t field_0x224;
        uint32_t field_0x228;
        uint32_t applicationDataSize;
        uint32_t field_0x230;
        uint32_t field_0x234;
        uint32_t field_0x238;
        uint32_t field_0x23C;
        uint32_t hostPrincipalId;
        uint32_t field_0x244;
        uint32_t field_0x248;
        uint32_t field_0x24C;
        uint32_t field_0x250;
        uint32_t field_0x254;
        uint32_t field_0x258;
        uint32_t field_0x25C;
        uint32_t field_0x260;
        uint32_t field_0x264;
    };
    MC_CHECK_SIZE(NexSessionInfo, 0x268);

    class NexSessionInfoPrivate
    {
    public:
    };
} // namespace nn::pia::inet
