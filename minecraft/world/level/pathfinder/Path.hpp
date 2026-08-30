#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "utils/Vec3.hpp"
#include "world/level/pathfinder/Node.hpp"

namespace mc
{
    class Path
    {
    public:
        Path(mc::ArrayWithLength<Node *> nodes)
        {
            MLINK_FUNC(Path *, 0x0275639C, Path *, mc::ArrayWithLength<Node *>)(this, nodes);
        }

        Path(const Path &other)
        {
            MLINK_FUNC(Path *, 0x02756F4C, Path *, const Path *)(this, &other);
        }

        ~Path()
        {
            MLINK_FUNC(void, 0x026D1C78, Path *, uint32_t)(this, 0);
        }

        static Path *createFromStream(DataInputStream *stream)
        {
            return MLINK_FUNC(Path *, 0x0278B6DC, DataInputStream *)(stream);
        }

        Path *clone()
        {
            return MLINK_FUNC(Path *, 0x027570AC, Path *)(this);
        }

        bool endsIn(Vec3 *position)
        {
            return MLINK_FUNC(bool, 0x0278B440, Path *, Vec3 *)(this, position);
        }

        Node *get(int index)
        {
            return MLINK_FUNC(Node *, 0x02758A20, Path *, int)(this, index);
        }

        int getIndex()
        {
            return MLINK_FUNC(int, 0x02758310, Path *)(this);
        }

        Vec3 getPos(mboost::shared_ptr<Entity> entity, int index)
        {
            return MLINK_FUNC(Vec3, 0x0275802C, Path *, mboost::shared_ptr<Entity>, int)(this, entity, index);
        }

        int getSize()
        {
            return MLINK_FUNC(int, 0x02757E4C, Path *)(this);
        }

        Node *getTarget()
        {
            return MLINK_FUNC(Node *, 0x0278B524, Path *)(this);
        }

        bool isDone()
        {
            return MLINK_FUNC(bool, 0x027079DC, Path *)(this);
        }

        bool IsWithinStepsToTheEnd(int steps)
        {
            return MLINK_FUNC(bool, 0x0278B504, Path *, int)(this, steps);
        }

        Node *last()
        {
            return MLINK_FUNC(Node *, 0x0278B410, Path *)(this);
        }

        void next()
        {
            MLINK_FUNC(void, 0x0278B400, Path *)(this);
        }

        Vec3 currentPos()
        {
            return MLINK_FUNC(Vec3, 0x02758998, Path *)(this);
        }

        Vec3 currentPos(mboost::shared_ptr<Entity> entity)
        {
            return MLINK_FUNC(Vec3, 0x02758214, Path *, mboost::shared_ptr<Entity>)(this, entity);
        }

        bool sameAs(Path *other)
        {
            return MLINK_FUNC(bool, 0x02757CA8, Path *, Path *)(this, other);
        }

        void set(int index, Node *node)
        {
            MLINK_FUNC(void, 0x027594BC, Path *, int, Node *)(this, index, node);
        }

        void setIndex(int value)
        {
            MLINK_FUNC(void, 0x02758318, Path *, int)(this, value);
        }

        void setSize(int value)
        {
            MLINK_FUNC(void, 0x0278B438, Path *, int)(this, value);
        }

        void writeToStream(DataOutputStream *stream)
        {
            MLINK_FUNC(void, 0x0278B52C, Path *, DataOutputStream *)(this, stream);
        }

        Node **nodes;
        int nodeCapacity;
        uint32_t field_0x8;
        BlockPos target;
        Node *targetNode;
        int index;
        int size;
    };
    MC_CHECK_SIZE(Path, 0x24);
} // namespace mc
