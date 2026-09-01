#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Tag.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class CompoundTag;

    class ListTag : public Tag
    {
    public:
        ListTag(ETagType elementType)
        {
            MLINK_FUNC(void, 0x02573958, ListTag *, ETagType)(this, elementType);
        }

        ~ListTag()
        {
            MLINK_FUNC(void, 0x0258E9F4, ListTag *, uint32_t)(this, 0);
        }

        static int getId()
        {
            return MLINK_FUNC(int, 0x0258EEDC)();
        }

        void add(Tag *tag)
        {
            MLINK_FUNC(void, 0x02573F8C, ListTag *, Tag *)(this, tag);
        }

        CompoundTag *getCompound(int index)
        {
            return MLINK_FUNC(CompoundTag *, 0x02574E60, ListTag *, int)(this, index);
        }

        int size()
        {
            return MLINK_FUNC(int, 0x02574F24, ListTag *)(this);
        }

        void write(MC_UNDEFINED_TYPE(uint32_t *, DataOutput) output)
        {
            MLINK_FUNC(void, 0x0258EA7C, ListTag *, MC_UNDEFINED_TYPE(uint32_t *, DataOutput))(this, output);
        }

        void load(MC_UNDEFINED_TYPE(uint32_t *, DataInput) input, int depth)
        {
            MLINK_FUNC(void, 0x0258EBA8, ListTag *, MC_UNDEFINED_TYPE(uint32_t *, DataInput), int)(this, input, depth);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x0258EEE4, ListTag *, mstd::basic_string<wchar_t> *)(this, &result);
        }

        void print(const mstd::basic_string<wchar_t> &prefix, char *indent, MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t) output)
        {
            MLINK_FUNC(void, 0x0258FC4C, ListTag *, const mstd::basic_string<wchar_t> &, char *,
                       MC_UNDEFINED_TYPE(uint32_t *, basic_ostream_wchar_t))(this, prefix, indent, output);
        }

        void set(int index, Tag *tag)
        {
            MLINK_FUNC(void, 0x0258FF40, ListTag *, int, Tag *)(this, index, tag);
        }

        Tag *get(int index)
        {
            return MLINK_FUNC(Tag *, 0x02590080, ListTag *, int)(this, index);
        }

        Tag *remove(int index)
        {
            return MLINK_FUNC(Tag *, 0x02590184, ListTag *, int)(this, index);
        }

        void stripEmptyChildren()
        {
            MLINK_FUNC(void, 0x025901F8, ListTag *)(this);
        }

        bool isEmpty()
        {
            return MLINK_FUNC(bool, 0x025902B4, ListTag *)(this);
        }

        int getInt(int index)
        {
            return MLINK_FUNC(int, 0x025902D8, ListTag *, int)(this, index);
        }

        ArrayWithLength<int> getIntArray(int index)
        {
            return MLINK_FUNC(ArrayWithLength<int>, 0x02590384, ListTag *, int)(this, index);
        }

        double getDouble(int index)
        {
            return MLINK_FUNC(double, 0x02590434, ListTag *, int)(this, index);
        }

        float getFloat(int index)
        {
            return MLINK_FUNC(float, 0x025904E4, ListTag *, int)(this, index);
        }

        void getString(int index, mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x02590594, ListTag *, mstd::basic_string<wchar_t> *, int)(this, &result, index);
        }

        ListTag *copy()
        {
            return MLINK_FUNC(ListTag *, 0x025906E4, ListTag *)(this);
        }

        bool equals(Tag *other)
        {
            return MLINK_FUNC(bool, 0x025907A8, ListTag *, Tag *)(this, other);
        }

        ETagType getType()
        {
            return MLINK_FUNC(ETagType, 0x025908F0, ListTag *)(this);
        }

        mstd::vector<Tag *> tags;
        ETagType elementType;
        uint8_t field_0x15;
        uint8_t field_0x16;
        uint8_t field_0x17;
    };
    MC_CHECK_SIZE(ListTag, 0x18);
} // namespace mc
