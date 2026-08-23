#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "BlockEntity.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "nbt/CompoundTag.hpp"

namespace mc
{
    class TheEndGatewayEntity : public BlockEntity
    {
    public:
        void load(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x029ECC54, TheEndGatewayEntity *, CompoundTag *)(this, tag);
        }

        void save(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x029ECA18, TheEndGatewayEntity *, CompoundTag *)(this, tag);
        }

        void SetExitPortal(BlockPos *pos)
        {
            MLINK_FUNC(void, 0x0298B7E4, TheEndGatewayEntity *, BlockPos *)(this, pos);
        }

        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        BlockPos *exitPortal;
        uint32_t field_0x38;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(TheEndGatewayEntity, 0x40);
} // namespace mc
