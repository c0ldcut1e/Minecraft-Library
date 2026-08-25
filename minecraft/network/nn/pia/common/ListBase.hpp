#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace nn::pia::common
{
    class ListNode
    {
    public:
        ListNode *next;
        ListNode *previous;
    };
    MC_CHECK_SIZE(ListNode, 0x8);

    class ListBase
    {
    public:
        void EraseNode(ListNode *node)
        {
            MLINK_FUNC(void, 0x03541140, ListBase *, ListNode *)(this, node);
        }

        void Init()
        {
            MLINK_FUNC(void, 0x035410DC, ListBase *)(this);
        }

        void InsertAfterNode(ListNode *node, ListNode *newNode)
        {
            MLINK_FUNC(void, 0x03541118, ListBase *, ListNode *, ListNode *)(this, node, newNode);
        }

        void InsertBeforeNode(ListNode *node, ListNode *newNode)
        {
            MLINK_FUNC(void, 0x035410F0, ListBase *, ListNode *, ListNode *)(this, node, newNode);
        }

        [[nodiscard]] bool IsIncludeNode(const ListNode *node) const
        {
            return MLINK_FUNC(bool, 0x03541174, const ListBase *, const ListNode *)(this, node);
        }

        [[nodiscard]] ListNode *PopBackNode()
        {
            return MLINK_FUNC(ListNode *, 0x03541204, ListBase *)(this);
        }

        [[nodiscard]] ListNode *PopFrontNode()
        {
            return MLINK_FUNC(ListNode *, 0x035411BC, ListBase *)(this);
        }

        ListNode *tail;
        ListNode *head;
        uint32_t size;
    };
    MC_CHECK_SIZE(ListBase, 0xC);
} // namespace nn::pia::common
