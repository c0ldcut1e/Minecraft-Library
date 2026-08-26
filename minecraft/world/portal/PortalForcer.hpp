#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "world/chunk/ChunkPos.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class ServerLevel;

    class PortalForcer
    {
    public:
        PortalForcer(ServerLevel *level)
        {
            MLINK_FUNC(void, 0x0272D2C8, PortalForcer *, ServerLevel *)(this, level);
        }

        ~PortalForcer()
        {
            MLINK_FUNC(void, 0x0272D594, PortalForcer *, uint32_t)(this, 0);
        }

        bool hasCachedPortal(const ChunkPos &chunkPos, BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x0272E59C, PortalForcer *, const ChunkPos &, BlockPos &)(this, chunkPos, pos);
        }

        void uncacheLeastUsedPortal()
        {
            MLINK_FUNC(void, 0x0272F9C0, PortalForcer *)(this);
        }
        bool findPortal(mboost::shared_ptr<Entity> entity, float yRotation, int searchRadius, int portalRadius)
        {
            return MLINK_FUNC(bool, 0x0272FB98, PortalForcer *, mboost::shared_ptr<Entity>, float, int, int)(this, entity, yRotation, searchRadius,
                                                                                                             portalRadius);
        }
        bool createPortal(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(bool, 0x02731354, PortalForcer *, mboost::shared_ptr<Entity>)(this, entity);
        }
        bool force(mboost::shared_ptr<Entity> entity, float yRotation, int searchRadius, int portalRadius)
        {
            return MLINK_FUNC(bool, 0x02732DC4, PortalForcer *, mboost::shared_ptr<Entity>, float, int, int)(this, entity, yRotation, searchRadius,
                                                                                                             portalRadius);
        }
        bool isBlocked(const BlockPos &pos)
        {
            return MLINK_FUNC(bool, 0x02733588, PortalForcer *, const BlockPos &)(this, pos);
        }
        void tick(uint64_t time)
        {
            MLINK_FUNC(void, 0x02733628, PortalForcer *, uint64_t)(this, time);
        }

        Level *level;
        uint32_t *field_0x4;
        bool field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t field_0xB;
        int field_0xC;
        int field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        int field_0x1C;
        bool field_0x20;
        uint8_t field_0x21;
        uint8_t field_0x22;
        uint8_t field_0x23;
        uint32_t *field_0x24;
        uint32_t *field_0x28;
    };
    MC_CHECK_SIZE(PortalForcer, 0x2C);
} // namespace mc
