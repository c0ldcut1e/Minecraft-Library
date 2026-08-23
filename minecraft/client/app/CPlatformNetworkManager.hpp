#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/session/FriendSessionInfo.hpp"

namespace mc
{
    class NQRNetworkManager_WiiU;

    class CPlatformNetworkManager
    {
    public:
        static CPlatformNetworkManager *GetInstance()
        {
            return MLink::DereferencePointerFromOffset<CPlatformNetworkManager>(0x104C6FE4);
        }

        void ForceFriendsSessionRefresh()
        {
            MLINK_FUNC(void, 0x0346E040, CPlatformNetworkManager *)(this);
        }

        void GetFullFriendSessionInfo(FriendSessionInfo *friendSessionInfo, void (*callback)(bool success, void *data), void *data)
        {
            MLINK_FUNC(void, 0x0346E01C, CPlatformNetworkManager *, FriendSessionInfo *, void (*)(bool, void *), void *)(this, friendSessionInfo,
                                                                                                                         callback, data);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        NQRNetworkManager_WiiU *networkManagerWiiU;
    };
    MC_CHECK_SIZE(CPlatformNetworkManager, 0x14);
} // namespace mc
