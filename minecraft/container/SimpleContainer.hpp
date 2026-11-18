#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Container.hpp"
#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class SimpleContainer
    {
    public:
        SimpleContainer(const mstd::basic_string<wchar_t> &title, int size)
        {
            MLINK_FUNC(void, 0x028F39DC, SimpleContainer *, int, int, const mstd::basic_string<wchar_t> &, int)(this, 0, 0, title, size);
        }

        SimpleContainer(int mediaName, const mstd::basic_string<wchar_t> &stringName, bool customName, int size)
        {
            MLINK_FUNC(void, 0x028F3850, SimpleContainer *, int, int, int, const mstd::basic_string<wchar_t> &, bool,
                       int)(this, 0, 0, mediaName, stringName, customName, size);
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

        void addItem(mboost::not_null_ptr<ItemInstance> *out, mboost::not_null_ptr<ItemInstance> item)
        {
            MLINK_FUNC(void, 0x028F4200, SimpleContainer *, mboost::not_null_ptr<ItemInstance> *, mboost::not_null_ptr<ItemInstance>)(this, out,
                                                                                                                                      item);
        }

        void clearContent()
        {
            MLINK_FUNC(void, 0x028DD90C, SimpleContainer *)(this);
        }

        int getContainerSize()
        {
            return MLINK_FUNC(int, 0x028DCA5C, SimpleContainer *)(this);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x028DCA78, SimpleContainer *)(this);
        }

        bool hasCustomName()
        {
            return MLINK_FUNC(bool, 0x028DC800, SimpleContainer *)(this);
        }

        int getMaxStackSize()
        {
            return MLINK_FUNC(int, 0x028DD624, SimpleContainer *)(this);
        }

        void setChanged()
        {
            MLINK_FUNC(void, 0x028DD7BC, SimpleContainer *)(this);
        }

        void addListener(MC_UNDEFINED_TYPE(uint32_t *, net_minecraft_world::ContainerListener) listener)
        {
            MLINK_FUNC(void, 0x028F4100, SimpleContainer *, MC_UNDEFINED_TYPE(uint32_t *, net_minecraft_world::ContainerListener))(this, listener);
        }

        void removeListener(MC_UNDEFINED_TYPE(uint32_t *, net_minecraft_world::ContainerListener) listener)
        {
            MLINK_FUNC(void, 0x028F41A4, SimpleContainer *, MC_UNDEFINED_TYPE(uint32_t *, net_minecraft_world::ContainerListener))(this, listener);
        }

        void getCustomName(mstd::basic_string<wchar_t> &out)
        {
            MLINK_FUNC(void, 0x028DC6BC, SimpleContainer *, mstd::basic_string<wchar_t> &)(this, out);
        }

        void getItem(uint32_t slot, mboost::not_null_ptr<ItemInstance> *out)
        {
            MLINK_FUNC(void, 0x028DCB78, SimpleContainer *, mboost::not_null_ptr<ItemInstance> *, uint32_t)(this, out, slot);
        }

        void setCustomName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x028F4D20, SimpleContainer *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setItem(uint32_t slot, mboost::not_null_ptr<ItemInstance> item)
        {
            MLINK_FUNC(void, 0x028DD3C8, SimpleContainer *, uint32_t, mboost::not_null_ptr<ItemInstance>)(this, slot, item);
        }

        int mediaName;
        mstd::basic_string<wchar_t> title;
        int size;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        uint32_t field_0x30;
        uint32_t field_0x34;
        mstd::vector<MC_UNDEFINED_TYPE(uint32_t *, net_minecraft_world::ContainerListener)> listeners;
        bool customName;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        VTable *vtable;
        MC_UNDEFINED_TYPE(uint32_t *, Nameable) nameable;
        Container *container;
        VTable *nameableVtable;
        VTable *containerVtable;
        MC_UNDEFINED_TYPE(uint32_t *, Nameable) containerNameable;
    };
    MC_CHECK_SIZE(SimpleContainer, 0x64);
} // namespace mc
