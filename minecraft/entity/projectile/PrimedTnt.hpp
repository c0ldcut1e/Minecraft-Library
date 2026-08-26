#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class PrimedTnt : public Entity
    {
    public:
        PrimedTnt(Level *level)
        {
            MLINK_FUNC(void, 0x027E80E0, PrimedTnt *, Level *)(this, level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x02864E98)();
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, PrimedTnt *primedTnt)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308C014, mboost::shared_ptr<Entity> *, PrimedTnt *)(out, primedTnt);
        }

        void setFuse(int fuse)
        {
            MLINK_FUNC(void, 0x027E826C, PrimedTnt *, int)(this, fuse);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        int fuseTimer;
        uint32_t field_0x35C;
    };
    MC_CHECK_SIZE(PrimedTnt, 0x360);
} // namespace mc
