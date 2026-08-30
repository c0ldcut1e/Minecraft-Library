#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/vector.hpp"
#include "network/nn/pia/Result.hpp"
#include "network/nn/pia/common/FixedString.hpp"
#include "network/nn/pia/common/InetAddress.hpp"
#include "network/nn/pia/inet/ParamVariant.hpp"
#include "network/nn/pia/inet/SessionType.hpp"
#include "network/nn/pia/session/CreateSessionSetting.hpp"

namespace nn::pia::inet
{
    class NexCreateSessionSetting : public session::CreateSessionSetting
    {
    public:
        NexCreateSessionSetting()
        {
            MLINK_FUNC(void, 0x035734CC, NexCreateSessionSetting *)(this);
        }

        ~NexCreateSessionSetting()
        {
            MLINK_FUNC(void, 0x03573808, NexCreateSessionSetting *, uint32_t)(this, 2);
        }

        void SetGameMode(uint32_t gameMode)
        {
            MLINK_FUNC(void, 0x035738CC, NexCreateSessionSetting *, uint32_t)(this, gameMode);
        }

        [[nodiscard]] uint32_t GetGameMode() const
        {
            return MLINK_FUNC(uint32_t, 0x035738E0, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetGameMode() const
        {
            return MLINK_FUNC(bool, 0x035738E8, const NexCreateSessionSetting *)(this);
        }

        void SetSessionType(SessionType sessionType)
        {
            MLINK_FUNC(void, 0x035738F4, NexCreateSessionSetting *, SessionType)(this, sessionType);
        }

        [[nodiscard]] SessionType GetSessionType() const
        {
            return MLINK_FUNC(SessionType, 0x0357392C, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsAutoCloseSession() const
        {
            return MLINK_FUNC(bool, 0x03573934, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetSessionType() const
        {
            return MLINK_FUNC(bool, 0x0357393C, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetSessionMatchmakeKeyword() const
        {
            return MLINK_FUNC(bool, 0x03573948, const NexCreateSessionSetting *)(this);
        }

        Result SetAttribute(uint32_t index, uint32_t attribute)
        {
            Result result;
            MLINK_FUNC(void, 0x03573954, NexCreateSessionSetting *, Result *, uint32_t, uint32_t)(this, &result, index, attribute);
            return result;
        }

        [[nodiscard]] uint32_t GetAttribute(uint32_t index) const
        {
            return MLINK_FUNC(uint32_t, 0x03573A38, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        [[nodiscard]] bool IsSetAttribute(uint32_t index) const
        {
            return MLINK_FUNC(bool, 0x03573A58, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        Result SetApplicationData(const void *applicationData, uint32_t applicationDataSize)
        {
            Result result;
            MLINK_FUNC(void, 0x03573A7C, NexCreateSessionSetting *, Result *, const void *, uint32_t)(this, &result, applicationData,
                                                                                                      applicationDataSize);
            return result;
        }

        Result GetApplicationData(void *applicationData, uint32_t applicationDataSize) const
        {
            Result result;
            MLINK_FUNC(void, 0x03573BDC, const NexCreateSessionSetting *, Result *, void *, uint32_t)(this, &result, applicationData,
                                                                                                      applicationDataSize);
            return result;
        }

        [[nodiscard]] uint32_t GetApplicationDataSize() const
        {
            return MLINK_FUNC(uint32_t, 0x03573D08, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetApplicationData() const
        {
            return MLINK_FUNC(bool, 0x03573D10, const NexCreateSessionSetting *)(this);
        }

        void SetOpenSession(bool openSession)
        {
            MLINK_FUNC(void, 0x03573D1C, NexCreateSessionSetting *, bool)(this, openSession);
        }

        [[nodiscard]] bool IsOpenSession() const
        {
            return MLINK_FUNC(bool, 0x03573D30, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetOpenSession() const
        {
            return MLINK_FUNC(bool, 0x03573D38, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] const common::FixedString128 *GetSessionUserPassword() const
        {
            return MLINK_FUNC(const common::FixedString128 *, 0x03573D44, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetSessionUserPassword() const
        {
            return MLINK_FUNC(bool, 0x03573D4C, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetMatchmakeSessionOption() const
        {
            return MLINK_FUNC(uint32_t, 0x03573D58, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetMatchmakeSessionOption() const
        {
            return MLINK_FUNC(bool, 0x03573D60, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint8_t GetSelectionPriority() const
        {
            return MLINK_FUNC(uint8_t, 0x03573D6C, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetSelectionPriority() const
        {
            return MLINK_FUNC(bool, 0x03573D74, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetRatingValue() const
        {
            return MLINK_FUNC(uint32_t, 0x03573D80, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetRatingValue() const
        {
            return MLINK_FUNC(bool, 0x03573D88, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetDisconnectionRate() const
        {
            return MLINK_FUNC(uint32_t, 0x03573D94, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetDisconnectionRate() const
        {
            return MLINK_FUNC(bool, 0x03573D9C, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetViolationRate() const
        {
            return MLINK_FUNC(uint32_t, 0x03573DA8, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetViolationRate() const
        {
            return MLINK_FUNC(bool, 0x03573DB0, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool GetUseGeoIp() const
        {
            return MLINK_FUNC(bool, 0x03573DBC, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetUseGeoIp() const
        {
            return MLINK_FUNC(bool, 0x03573DC4, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetCountryCode() const
        {
            return MLINK_FUNC(uint32_t, 0x03573DD0, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetCountryCode() const
        {
            return MLINK_FUNC(bool, 0x03573DD8, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] const common::InetAddress *GetOverrideIpAddress() const
        {
            return MLINK_FUNC(const common::InetAddress *, 0x03573DE4, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetOverrideIpAddress() const
        {
            return MLINK_FUNC(bool, 0x03573DEC, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetScoreBasedParameter() const
        {
            return MLINK_FUNC(bool, 0x03573DF8, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] const common::FixedString32 *GetAdditionalScoreBasedParameterValueKey(uint32_t index) const
        {
            return MLINK_FUNC(const common::FixedString32 *, 0x03573E84, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        [[nodiscard]] const ParamVariant *GetAdditionalScoreBasedParameterValue(uint32_t index) const
        {
            return MLINK_FUNC(const ParamVariant *, 0x03573EA4, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        [[nodiscard]] const common::FixedString32 *GetAdditionalScoreBasedParameterStringKey(uint32_t index) const
        {
            return MLINK_FUNC(const common::FixedString32 *, 0x03573EB4, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        [[nodiscard]] const common::FixedString256 *GetAdditionalScoreBasedParameterString(uint32_t index) const
        {
            return MLINK_FUNC(const common::FixedString256 *, 0x03573ECC, const NexCreateSessionSetting *, uint32_t)(this, index);
        }

        void CopyApplicationDataToVector(mstd::vector<uint8_t> *applicationData) const
        {
            MLINK_FUNC(void, 0x03573EE4, const NexCreateSessionSetting *, mstd::vector<uint8_t> *)(this, applicationData);
        }

        void Trace(uint64_t traceId) const
        {
            MLINK_FUNC(void, 0x03573F6C, const NexCreateSessionSetting *, uint64_t)(this, traceId);
        }

        [[nodiscard]] uint16_t GetExtraParticipantNum() const
        {
            return MLINK_FUNC(uint16_t, 0x03573F70, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] uint32_t GetCommunityId() const
        {
            return MLINK_FUNC(uint32_t, 0x03573F78, const NexCreateSessionSetting *)(this);
        }

        [[nodiscard]] bool IsSetCommunityId() const
        {
            return MLINK_FUNC(bool, 0x03573F80, const NexCreateSessionSetting *)(this);
        }

        void Copy(const NexCreateSessionSetting &other)
        {
            MLINK_FUNC(void, 0x03573F8C, NexCreateSessionSetting *, const NexCreateSessionSetting *)(this, &other);
        }

        void Reset()
        {
            MLINK_FUNC(void, 0x035740FC, NexCreateSessionSetting *)(this);
        }

        uint32_t gameMode;
        SessionType sessionType;
        bool isAutoCloseSession;
        uint8_t field_0x15;
        uint8_t field_0x16;
        uint8_t field_0x17;
        uint32_t attribute0;
        uint32_t attribute1;
        uint32_t attribute2;
        uint32_t attribute3;
        uint32_t attribute4;
        uint32_t attribute5;
        uint32_t applicationData_0x30;
        uint32_t applicationData_0x34;
        uint32_t applicationData_0x38;
        uint32_t applicationData_0x3C;
        uint32_t applicationData_0x40;
        uint32_t applicationData_0x44;
        uint32_t applicationData_0x48;
        uint32_t applicationData_0x4C;
        uint32_t applicationData_0x50;
        uint32_t applicationData_0x54;
        uint32_t applicationData_0x58;
        uint32_t applicationData_0x5C;
        uint32_t applicationData_0x60;
        uint32_t applicationData_0x64;
        uint32_t applicationData_0x68;
        uint32_t applicationData_0x6C;
        uint32_t applicationData_0x70;
        uint32_t applicationData_0x74;
        uint32_t applicationData_0x78;
        uint32_t applicationData_0x7C;
        uint32_t applicationData_0x80;
        uint32_t applicationData_0x84;
        uint32_t applicationData_0x88;
        uint32_t applicationData_0x8C;
        uint32_t applicationData_0x90;
        uint32_t applicationData_0x94;
        uint32_t applicationData_0x98;
        uint32_t applicationData_0x9C;
        uint32_t applicationData_0xA0;
        uint32_t applicationData_0xA4;
        uint32_t applicationData_0xA8;
        uint32_t applicationData_0xAC;
        uint32_t applicationData_0xB0;
        uint32_t applicationData_0xB4;
        uint32_t applicationData_0xB8;
        uint32_t applicationData_0xBC;
        uint32_t applicationData_0xC0;
        uint32_t applicationData_0xC4;
        uint32_t applicationData_0xC8;
        uint32_t applicationData_0xCC;
        uint32_t applicationData_0xD0;
        uint32_t applicationData_0xD4;
        uint32_t applicationData_0xD8;
        uint32_t applicationData_0xDC;
        uint32_t applicationData_0xE0;
        uint32_t applicationData_0xE4;
        uint32_t applicationData_0xE8;
        uint32_t applicationData_0xEC;
        uint32_t applicationData_0xF0;
        uint32_t applicationData_0xF4;
        uint32_t applicationData_0xF8;
        uint32_t applicationData_0xFC;
        uint32_t applicationData_0x100;
        uint32_t applicationData_0x104;
        uint32_t applicationData_0x108;
        uint32_t applicationData_0x10C;
        uint32_t applicationData_0x110;
        uint32_t applicationData_0x114;
        uint32_t applicationData_0x118;
        uint32_t applicationData_0x11C;
        uint32_t applicationData_0x120;
        uint32_t applicationData_0x124;
        uint32_t applicationData_0x128;
        uint32_t applicationData_0x12C;
        uint32_t applicationData_0x130;
        uint32_t applicationData_0x134;
        uint32_t applicationData_0x138;
        uint32_t applicationData_0x13C;
        uint32_t applicationData_0x140;
        uint32_t applicationData_0x144;
        uint32_t applicationData_0x148;
        uint32_t applicationData_0x14C;
        uint32_t applicationData_0x150;
        uint32_t applicationData_0x154;
        uint32_t applicationData_0x158;
        uint32_t applicationData_0x15C;
        uint32_t applicationData_0x160;
        uint32_t applicationData_0x164;
        uint32_t applicationData_0x168;
        uint32_t applicationData_0x16C;
        uint32_t applicationData_0x170;
        uint32_t applicationData_0x174;
        uint32_t applicationData_0x178;
        uint32_t applicationData_0x17C;
        uint32_t applicationData_0x180;
        uint32_t applicationData_0x184;
        uint32_t applicationData_0x188;
        uint32_t applicationData_0x18C;
        uint32_t applicationData_0x190;
        uint32_t applicationData_0x194;
        uint32_t applicationData_0x198;
        uint32_t applicationData_0x19C;
        uint32_t applicationData_0x1A0;
        uint32_t applicationData_0x1A4;
        uint32_t applicationData_0x1A8;
        uint32_t applicationData_0x1AC;
        uint32_t applicationData_0x1B0;
        uint32_t applicationData_0x1B4;
        uint32_t applicationData_0x1B8;
        uint32_t applicationData_0x1BC;
        uint32_t applicationData_0x1C0;
        uint32_t applicationData_0x1C4;
        uint32_t applicationData_0x1C8;
        uint32_t applicationData_0x1CC;
        uint32_t applicationData_0x1D0;
        uint32_t applicationData_0x1D4;
        uint32_t applicationData_0x1D8;
        uint32_t applicationData_0x1DC;
        uint32_t applicationData_0x1E0;
        uint32_t applicationData_0x1E4;
        uint32_t applicationData_0x1E8;
        uint32_t applicationData_0x1EC;
        uint32_t applicationData_0x1F0;
        uint32_t applicationData_0x1F4;
        uint32_t applicationData_0x1F8;
        uint32_t applicationData_0x1FC;
        uint32_t applicationData_0x200;
        uint32_t applicationData_0x204;
        uint32_t applicationData_0x208;
        uint32_t applicationData_0x20C;
        uint32_t applicationData_0x210;
        uint32_t applicationData_0x214;
        uint32_t applicationData_0x218;
        uint32_t applicationData_0x21C;
        uint32_t applicationData_0x220;
        uint32_t applicationData_0x224;
        uint32_t applicationData_0x228;
        uint32_t applicationData_0x22C;
        uint32_t applicationDataSize;
        bool isOpenSession;
        uint8_t selectionPriority;
        uint16_t field_0x236;
        uint32_t ratingValue;
        uint32_t violationRate;
        uint32_t disconnectionRate;
        bool useGeoIp;
        uint8_t field_0x245;
        uint8_t field_0x246;
        uint8_t field_0x247;
        uint32_t countryCode;
        common::InetAddress overrideIpAddress;
        uint16_t extraParticipantCount;
        uint16_t field_0x256;
        uint32_t communityId;
        common::FixedString128 sessionUserPassword;
        uint32_t matchmakeSessionOption;
        common::FixedString32 additionalScoreBasedParameterValueKey0;
        common::FixedString32 additionalScoreBasedParameterValueKey1;
        common::FixedString32 additionalScoreBasedParameterValueKey2;
        ParamVariant additionalScoreBasedParameterValue0;
        ParamVariant additionalScoreBasedParameterValue1;
        ParamVariant additionalScoreBasedParameterValue2;
        common::FixedString32 additionalScoreBasedParameterStringKey;
        common::FixedString256 additionalScoreBasedParameterString;
        common::FixedString128 sessionMatchmakeKeyword;
        uint32_t settingFlags;
    };
    MC_CHECK_SIZE(NexCreateSessionSetting, 0x5BC);
} // namespace nn::pia::inet
