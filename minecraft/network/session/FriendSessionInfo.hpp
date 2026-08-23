#pragma once

#include <cstdint>

#include "GameSessionData.hpp"
#include "MinecraftLib.hpp"
#include "network/manager/NQRNetworkManager.hpp"

namespace mc
{
    struct FriendSessionInfo
    {
        uint32_t sessionId;
        NQRNetworkManager::SessionSearchResult searchResult;
        wchar_t *displayName;
        uint8_t displayNameLength;
        uint8_t displayNameViewableStartIndex;
        uint8_t field_0x2E;
        uint8_t field_0x2F;
        GameSessionData sessionData;
        bool hasPartyMember;
        uint8_t field_0x105;
        uint8_t field_0x106;
        uint8_t field_0x107;
    };
    MC_CHECK_SIZE(FriendSessionInfo, 0x108);
} // namespace mc
