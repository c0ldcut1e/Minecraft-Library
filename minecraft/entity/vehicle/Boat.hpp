#pragma once

#include "mlink/MLink.hpp"

#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Boat : public Entity
    {
    public:
        static Boat *Create(Level *level, double xPos, double yPos, double zPos)
        {
            return MLINK_FUNC(Boat *, 0x02137A7C, Boat *, Level *, double, double, double)(nullptr, level, xPos, yPos, zPos);
        }

        static void CreateShared(mboost::shared_ptr<Entity> *out, Boat *boat)
        {
            MLINK_FUNC(mboost::shared_ptr<Entity> *, 0x0308BCFC, mboost::shared_ptr<Entity> *, Boat *)(out, boat);
        }

        void setType(int type)
        {
            MLINK_FUNC(void, 0x0213FC04, Boat *, int)(this, type);
        }
    };
} // namespace mc
