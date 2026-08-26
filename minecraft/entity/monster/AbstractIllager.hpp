#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Monster.hpp"
#include "world/Level.hpp"

namespace mc
{
    class AbstractIllager : public Monster
    {
    public:
        AbstractIllager() = default;

        AbstractIllager(Level *level)
        {
            MLINK_FUNC(void, 0x02065114, AbstractIllager *, Level *)(this, level);
        }

        void defineSynchedData()
        {
            MLINK_FUNC(void, 0x0206519C, AbstractIllager *)(this);
        }

        bool getIllagerFlag(int flag)
        {
            return MLINK_FUNC(bool, 0x0206522C, AbstractIllager *, int)(this, flag);
        }

        void setIllagerFlag(int flag, bool value)
        {
            MLINK_FUNC(void, 0x020652C4, AbstractIllager *, int, bool)(this, flag, value);
        }
    };
    MC_CHECK_SIZE(AbstractIllager, 0x730);
} // namespace mc
