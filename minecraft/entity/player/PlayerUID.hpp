#pragma once

#include <cstdint>
#include <cstring>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/app/ACTUuid.hpp"

namespace mc
{
    class PlayerUID
    {
    public:
        PlayerUID() = default;

        PlayerUID(int all)
        {
            MLINK_FUNC(void, 0x034A2684, PlayerUID *, int)(this, all);
        }

        [[nodiscard]] ACTUuid GetUuid() const
        {
            ACTUuid uuid;
            memcpy(uuid.uuid, uid, sizeof(uuid.uuid));
            return uuid;
        }

        [[nodiscard]] bool IsGuest() const
        {
            return (uid[4] & 0x20000000) != 0;
        }

        void SetGuest(bool guest)
        {
            if (guest)
            {
                uid[4] |= 0x20000000;
            }
            else
            {
                uid[4] &= ~0x20000000;
            }
        }

        void SetUuid(const ACTUuid &uuid)
        {
            memcpy(uid, uuid.uuid, sizeof(uuid.uuid));
        }

        bool operator==(const PlayerUID &playerUID) const
        {
            return MLINK_FUNC(bool, 0x034A39C8, const PlayerUID *, const PlayerUID &)(this, playerUID);
        }

        bool operator!=(const PlayerUID &playerUID) const
        {
            return MLINK_FUNC(bool, 0x034A3A80, const PlayerUID *, const PlayerUID &)(this, playerUID);
        }

        uint32_t uid[5];
    };
    MC_CHECK_SIZE(PlayerUID, 0x14);
} // namespace mc
