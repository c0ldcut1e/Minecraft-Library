#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class LlamaSpit : public Entity
    {
    public:
        LlamaSpit(Level *level)
        {
            MLINK_FUNC(void, 0x025E677C, LlamaSpit *, Level *)(this, level);
        }

        static LlamaSpit *Create(Level *level)
        {
            return MLINK_FUNC(LlamaSpit *, 0x023E67C4, Level *)(level);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, LlamaSpit *spit)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x03089A00, mboost::shared_ptr<Entity> *, LlamaSpit *)(out, spit);
        }

        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
    };
    MC_CHECK_SIZE(LlamaSpit, 0x370);
} // namespace mc
