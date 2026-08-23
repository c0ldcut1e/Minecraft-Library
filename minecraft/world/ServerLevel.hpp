#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Level.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "entity/EntityTracker.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class ParticleType;

    class ServerLevel : public Level
    {
    public:
        void addEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032C06DC, ServerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void addGlobalEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032BA450, ServerLevel *, const mboost::shared_ptr<Entity> &)(this, entity->thisShared);
        }

        void addToTickNextTick(const BlockPos &position, Block *block, int delay, int priority)
        {
            MLINK_FUNC(void, 0x032B2E58, ServerLevel *, const BlockPos &, Block *, int, int)(this, position, block, delay, priority);
        }

        void getEntity(mboost::shared_ptr<Entity> *outEntity, int id)
        {
            MLINK_FUNC(void, 0x032BA33C, ServerLevel *, mboost::shared_ptr<Entity> *, int)(this, outEntity, id);
        }

        void sendParticle(const ParticleType *type, double x, double y, double z, int amount, double unk_0, double unk_1, double unk_2, double unk_3,
                          uint32_t n = 0x16600000)
        {
            uint32_t array[2]  = {0x0000105F, 0x00000000};
            uint32_t array2[2] = {(uint32_t) array, 0x00000001};
            MLINK_FUNC(void, 0x032BEFB8, ServerLevel *, const ParticleType *, double, double, double, int, double, double, double, double, uint32_t *,
                       uint32_t)(this, type, x, y, z, amount, unk_0, unk_1, unk_2, unk_3, array2, n);
        }

        void sendParticle(const ParticleType *type, double x, double y, double z, int amount, double unk_0, double unk_1, double unk_2, double unk_3,
                          uint32_t n, double r, double g, double b)
        {
            uint32_t array[2]  = {0x0000105F, 0x00000000};
            uint32_t array2[2] = {(uint32_t) array, 0x00000001};
            MLINK_FUNC(void, 0x032BF004, ServerLevel *, const ParticleType *, double, double, double, int, double, double, double, double, uint32_t *,
                       uint32_t, double, double, double)(this, type, x, y, z, amount, unk_0, unk_1, unk_2, unk_3, array2, n, r, g, b);
        }

        void setBlock(const BlockPos &pos, uint32_t state, int flags, bool unk1)
        {
            MLINK_FUNC(void, 0x032C0628, ServerLevel *, const BlockPos &, uint32_t, int, bool)(this, pos, state, flags, unk1);
        }

        uint32_t field_0x204;
        EntityTracker *entityTracker;
    };
} // namespace mc
