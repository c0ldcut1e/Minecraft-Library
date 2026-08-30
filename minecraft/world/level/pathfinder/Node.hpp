#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "io/DataInputStream.hpp"
#include "io/DataOutputStream.hpp"
#include "world/level/pathfinder/BlockPathTypes.hpp"

namespace mc
{
    class Node
    {
    public:
        Node()
        {
            MLINK_FUNC(Node *, 0x026AB21C, Node *)(this);
        }

        Node(int x, int y, int z)
        {
            MLINK_FUNC(Node *, 0x02669CA4, Node *, int, int, int)(this, x, y, z);
        }

        Node(const Node &other)
        {
            MLINK_FUNC(Node *, 0x02756FE0, Node *, const Node *)(this, &other);
        }

        static void ResetPool()
        {
            MLINK_FUNC(void, 0x026698CC)();
        }

        static uint32_t createHash(int x, int y, int z)
        {
            return MLINK_FUNC(uint32_t, 0x02669AE0, int, int, int)(x, y, z);
        }

        static Node *GetNodeFromPool(int x, int y, int z)
        {
            return MLINK_FUNC(Node *, 0x0266A2F4, int, int, int)(x, y, z);
        }

        static Node *createFromStream(DataInputStream *stream)
        {
            return MLINK_FUNC(Node *, 0x026AB6AC, DataInputStream *)(stream);
        }

        void _init()
        {
            MLINK_FUNC(void, 0x02669C64, Node *)(this);
        }

        Node *cloneMove(int x, int y, int z)
        {
            return MLINK_FUNC(Node *, 0x026AB290, Node *, int, int, int)(this, x, y, z);
        }

        float distanceTo(Node *other)
        {
            return MLINK_FUNC(float, 0x026AB324, Node *, Node *)(this, other);
        }

        float distanceManhattan(Node *other)
        {
            return MLINK_FUNC(float, 0x026AB3CC, Node *, Node *)(this, other);
        }

        bool equals(Node *other)
        {
            return MLINK_FUNC(bool, 0x026AB524, Node *, Node *)(this, other);
        }

        bool inOpenSet()
        {
            return MLINK_FUNC(bool, 0x026AB574, Node *)(this);
        }

        void writeToStream(DataOutputStream *stream)
        {
            MLINK_FUNC(void, 0x026AB584, Node *, DataOutputStream *)(this, stream);
        }

        int x;
        int y;
        int z;
        uint32_t hash;
        int heapIndex;
        float walkedDistance;
        float costMalus;
        float f;
        Node *cameFrom;
        bool closed;
        uint8_t field_0x25;
        uint8_t field_0x26;
        uint8_t field_0x27;
        float g;
        float h;
        float walkedDistanceFromStart;
        BlockPathTypes *type;
        bool field_0x38;
        uint8_t field_0x39;
        uint8_t field_0x3A;
        uint8_t field_0x3B;
        uint32_t field_0x3C;
    };
    MC_CHECK_SIZE(Node, 0x40);
} // namespace mc
