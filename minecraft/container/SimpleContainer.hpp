#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Container.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class SimpleContainer
    {
    public:
        SimpleContainer(const mstd::basic_string<wchar_t> &title, int columns)
        {
            MLINK_FUNC(void, 0x028F39DC, SimpleContainer *, int, int, const mstd::basic_string<wchar_t> &, int)(this, 0, 0, title, columns * 9);
        }

        SimpleContainer(int mediaName, const mstd::basic_string<wchar_t> &stringName, bool customName, int size)
        {
            MLINK_FUNC(void, 0x028F3850, SimpleContainer *, int, const mstd::basic_string<wchar_t> &, bool, int)(this, mediaName, stringName,
                                                                                                                 customName, size);
        }

        static void toShared(const mboost::shared_ptr<SimpleContainer> &result, SimpleContainer *src)
        {
            MLINK_FUNC(void, 0x3065EE0, const mboost::shared_ptr<SimpleContainer> &, SimpleContainer *)(result, src);
        }

        static mboost::shared_ptr<SimpleContainer> toShared(SimpleContainer *src)
        {
            mboost::shared_ptr<SimpleContainer> result;
            toShared(result, src);
            return result;
        }

        void addItem(int slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x028F4200, SimpleContainer *, int, const mboost::shared_ptr<ItemInstance> &)(this, slot, item);
        }

        void clearContent()
        {
            MLINK_FUNC(void, 0x028DD90C, SimpleContainer *)(this);
        }

        void getCustomName(mstd::basic_string<wchar_t> &out)
        {
            MLINK_FUNC(void, 0x028DC6BC, SimpleContainer *, mstd::basic_string<wchar_t> &)(this, out);
        }

        void getItem(uint32_t slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x028DCB78, SimpleContainer *, const mboost::shared_ptr<ItemInstance> &, uint32_t)(this, item, slot);
        }

        void setCustomName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x028F4D20, SimpleContainer *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setItem(int slot, const mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x028DD3C8, SimpleContainer *, int, const mboost::shared_ptr<ItemInstance> &)(this, slot, item);
        }

        uint32_t field_0x0;
        mstd::basic_string<wchar_t> title;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        mstd::vector<void *> listeners;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        Container container;
    };
    MC_CHECK_SIZE(SimpleContainer, 0x68);
} // namespace mc
