#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "world/level/pathfinder/Node.hpp"

namespace mc
{
    class BinaryHeap
    {
    public:
        BinaryHeap()
        {
            MLINK_FUNC(BinaryHeap *, 0x020950B0, BinaryHeap *)(this);
        }

        ~BinaryHeap()
        {
            MLINK_FUNC(void, 0x0209511C, BinaryHeap *, uint32_t)(this, 0);
        }

        void _init()
        {
            MLINK_FUNC(void, 0x0209502C, BinaryHeap *)(this);
        }

        void clear()
        {
            MLINK_FUNC(void, 0x02095378, BinaryHeap *)(this);
        }

        void changeCost(Node *node, float cost)
        {
            MLINK_FUNC(void, 0x020954B0, BinaryHeap *, Node *, float)(this, node, cost);
        }

        Node *insert(Node *node)
        {
            return MLINK_FUNC(Node *, 0x020951D8, BinaryHeap *, Node *)(this, node);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x020954E4, BinaryHeap *)(this);
        }

        Node *pop()
        {
            return MLINK_FUNC(Node *, 0x02095440, BinaryHeap *)(this);
        }

        void downHeap(int index)
        {
            MLINK_FUNC(void, 0x02095384, BinaryHeap *, int)(this, index);
        }

        void upHeap(int index)
        {
            MLINK_FUNC(void, 0x02095184, BinaryHeap *, int)(this, index);
        }

        Node **heap;
        int size;
        int capacity;
    };
    MC_CHECK_SIZE(BinaryHeap, 0xC);
} // namespace mc
