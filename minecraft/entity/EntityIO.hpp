#pragma once

#include "mlink/MLink.hpp"

#include "Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class EntityIO
    {
    public:
        static void newEntity(mboost::shared_ptr<Entity> *out, int entityId, Level *level)
        {
            MLINK_FUNC(void, 0x023A7E04, mboost::shared_ptr<Entity> *, int, Level *)(out, entityId, level);
        }
    };
} // namespace mc
