#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "utils/Direction.hpp"
#include "utils/Vec3i.hpp"

namespace mc
{
    class MutableBlockPos : public BlockPos
    {
    public:
        MutableBlockPos(int x, int y, int z)
        {
            MLINK_FUNC(void, 0x020C4DB8, MutableBlockPos *, int, int, int)(this, x, y, z);
        }

        MutableBlockPos(const Vec3i &pos)
        {
            MLINK_FUNC(void, 0x020C4E48, MutableBlockPos *, const Vec3i &)(this, pos);
        }

        void setX(int x)
        {
            MLINK_FUNC(void, 0x020C4EB8, MutableBlockPos *, int)(this, x);
        }

        void setY(int y)
        {
            MLINK_FUNC(void, 0x020C4EC0, MutableBlockPos *, int)(this, y);
        }

        void setZ(int z)
        {
            MLINK_FUNC(void, 0x020C4EC8, MutableBlockPos *, int)(this, z);
        }

        void set(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x020C4ED0, MutableBlockPos *, const BlockPos &)(this, pos);
        }

        MutableBlockPos *move(const Direction *direction, int distance)
        {
            return MLINK_FUNC(MutableBlockPos *, 0x020C4EEC, MutableBlockPos *, const Direction *, int)(this, direction, distance);
        }

        MutableBlockPos *move(const Direction *direction)
        {
            return MLINK_FUNC(MutableBlockPos *, 0x020C4FA0, MutableBlockPos *, const Direction *)(this, direction);
        }

        void addX(int x)
        {
            MLINK_FUNC(void, 0x020C4FB4, MutableBlockPos *, int)(this, x);
        }

        void addY(int y)
        {
            MLINK_FUNC(void, 0x020C4FC4, MutableBlockPos *, int)(this, y);
        }

        void addZ(int z)
        {
            MLINK_FUNC(void, 0x020C4FD4, MutableBlockPos *, int)(this, z);
        }
    };
    MC_CHECK_SIZE(MutableBlockPos, 0xC);
} // namespace mc
