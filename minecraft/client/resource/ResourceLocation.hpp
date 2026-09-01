#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "client/resource/texture/TextureName.hpp"
#include "internal/VTable.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class VTable_ResourceLocation;

    class ResourceLocation
    {
    public:
        ResourceLocation()
        {
            MLINK_FUNC(void, 0x032504FC, ResourceLocation *)(this);
        }

        ResourceLocation(TextureName textureName)
        {
            MLINK_FUNC(void, 0x032505FC, ResourceLocation *, TextureName)(this, textureName);
        }

        ResourceLocation(const ResourceLocation &other)
        {
            MLINK_FUNC(void, 0x0325041C, ResourceLocation *, const ResourceLocation &)(this, other);
        }

        ResourceLocation(const mstd::basic_string<wchar_t> &location)
        {
            MLINK_FUNC(void, 0x03250B1C, ResourceLocation *, const mstd::basic_string<wchar_t> &)(this, location);
        }

        ResourceLocation(const mstd::basic_string<wchar_t> &nameSpace, const mstd::basic_string<wchar_t> &path)
        {
            MLINK_FUNC(void, 0x03250D30, ResourceLocation *, const mstd::basic_string<wchar_t> &,
                       const mstd::basic_string<wchar_t> &)(this, nameSpace, path);
        }

        ResourceLocation(ArrayWithLength<int> textures)
        {
            MLINK_FUNC(void, 0x03250E48, ResourceLocation *, ArrayWithLength<int>)(this, textures);
        }

        ~ResourceLocation()
        {
            MLINK_FUNC(void, 0x03251020, ResourceLocation *, uint32_t)(this, 0);
        }

        static ArrayWithLength<mstd::basic_string<wchar_t>> decompose(const mstd::basic_string<wchar_t> &location)
        {
            return MLINK_FUNC(ArrayWithLength<mstd::basic_string<wchar_t>>, 0x0325087C, const mstd::basic_string<wchar_t> &)(location);
        }

        ResourceLocation &operator=(const ResourceLocation &other)
        {
            return MLINK_FUNC(ResourceLocation &, 0x032504C0, ResourceLocation *, const ResourceLocation &)(this, other);
        }

        void _init(const ResourceLocation &other)
        {
            MLINK_FUNC(void, 0x0325027C, ResourceLocation *, const ResourceLocation &)(this, other);
        }

        mstd::basic_string<wchar_t> &getNamespace()
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t> &, 0x03251110, ResourceLocation *)(this);
        }

        mstd::basic_string<wchar_t> &getPath()
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t> &, 0x03251224, ResourceLocation *)(this);
        }

        bool isDefault()
        {
            return MLINK_FUNC(bool, 0x0325122C, ResourceLocation *)(this);
        }

        int getTexture()
        {
            return MLINK_FUNC(int, 0x0325132C, ResourceLocation *)(this);
        }

        int getTexture(int index)
        {
            return MLINK_FUNC(int, 0x03251338, ResourceLocation *, int)(this, index);
        }

        uint32_t getTextureCount()
        {
            return MLINK_FUNC(uint32_t, 0x03251348, ResourceLocation *)(this);
        }

        bool isPreloaded()
        {
            return MLINK_FUNC(bool, 0x03251350, ResourceLocation *)(this);
        }

        void toString(mstd::basic_string<wchar_t> &result)
        {
            MLINK_FUNC(void, 0x03251548, ResourceLocation *, mstd::basic_string<wchar_t> &)(this, result);
        }

        mstd::basic_string<wchar_t> toString()
        {
            mstd::basic_string<wchar_t> result;
            toString(result);
            return result;
        }

        int hashCode()
        {
            return MLINK_FUNC(int, 0x0325179C, ResourceLocation *)(this);
        }

        bool equals(const ResourceLocation *other)
        {
            return MLINK_FUNC(bool, 0x03251818, ResourceLocation *, const ResourceLocation *)(this, other);
        }

        ArrayWithLength<int> textures;
        mstd::basic_string<wchar_t> path;
        mstd::basic_string<wchar_t> nameSpace;
        uint32_t preloaded;
        VTable_ResourceLocation *vtable;
    };
    MC_CHECK_SIZE(ResourceLocation, 0x50);

    class VTable_ResourceLocation : public VTable
    {
    public:
        MC_VFUNC(void, ResourceLocation, Dtor, bool);
        MC_VFUNC(const mstd::basic_string<wchar_t> &, ResourceLocation, ToString);
    };
    MC_CHECK_SIZE(VTable_ResourceLocation, 0x18);
} // namespace mc
