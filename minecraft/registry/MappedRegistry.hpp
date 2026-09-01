#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "IdMap.hpp"
#include "MinecraftLib.hpp"
#include "SimpleRegistry.hpp"
#include "client/resource/ResourceLocation.hpp"
#include "item/Item.hpp"
#include "sound/SoundEvent.hpp"

namespace mc
{
    template<typename K, typename V>
    class MappedRegistry : public SimpleRegistry<K, V>, public IdMap<V>
    {
    public:
    };

    using SoundRegistry = MappedRegistry<ResourceLocation, const SoundEvent *>;
    using ItemRegistry  = MappedRegistry<ResourceLocation, Item *>;

    template<>
    class MappedRegistry<ResourceLocation, const SoundEvent *> : public SimpleRegistry<ResourceLocation, const SoundEvent *>,
                                                                 public IdMap<const SoundEvent *>
    {
    public:
        MappedRegistry()
        {
            MLINK_FUNC(void, 0x0295D1AC, SoundRegistry *)(this);
        }

        ~MappedRegistry()
        {
            MLINK_FUNC(void, 0x0297E68C, SoundRegistry *, uint32_t)(this, 0);
        }

        static SoundRegistry *GetInstance()
        {
            return MLink::PointerFromOffset<SoundRegistry>(0x104F02AC);
        }

        int getId(const SoundEvent *value)
        {
            return MLINK_FUNC(int, 0x0297AE68, SoundRegistry *, const SoundEvent *)(this, value);
        }

        const SoundEvent *byId(int id)
        {
            return MLINK_FUNC(const SoundEvent *, 0x0297AF30, SoundRegistry *, int)(this, id);
        }

        const SoundEvent *getRandom(MC_UNDEFINED_TYPE(uint32_t *, Random) random)
        {
            return MLINK_FUNC(const SoundEvent *, 0x0295B630, SoundRegistry *, MC_UNDEFINED_TYPE(uint32_t *, Random))(this, random);
        }

        bool containsKey(const ResourceLocation &key)
        {
            return MLINK_FUNC(bool, 0x0297E5E0, SoundRegistry *, const ResourceLocation &)(this, key);
        }

        const SoundEvent *get(const ResourceLocation &key)
        {
            return MLINK_FUNC(const SoundEvent *, 0x0297E56C, SoundRegistry *, const ResourceLocation &)(this, key);
        }
    };

    template<>
    class MappedRegistry<ResourceLocation, Item *> : public SimpleRegistry<ResourceLocation, Item *>, public IdMap<Item *>
    {
    public:
        MappedRegistry()
        {
            MLINK_FUNC(void, 0x0251A68C, ItemRegistry *)(this);
        }

        ~MappedRegistry()
        {
            MLINK_FUNC(void, 0x025301B8, ItemRegistry *, uint32_t)(this, 0);
        }

        static ItemRegistry *GetInstance()
        {
            return MLink::PointerFromAddress<ItemRegistry>(0x104DD5F8);
        }

        int getId(Item *value)
        {
            return MLINK_FUNC(int, 0x0252BCFC, ItemRegistry *, Item *)(this, value);
        }

        Item *byId(int id)
        {
            return MLINK_FUNC(Item *, 0x0252BDC4, ItemRegistry *, int)(this, id);
        }

        Item *getRandom(MC_UNDEFINED_TYPE(uint32_t *, Random) random)
        {
            return MLINK_FUNC(Item *, 0x02518C58, ItemRegistry *, MC_UNDEFINED_TYPE(uint32_t *, Random))(this, random);
        }

        bool containsKey(const ResourceLocation &key)
        {
            return MLINK_FUNC(bool, 0x0252C498, ItemRegistry *, const ResourceLocation &)(this, key);
        }

        Item *get(const ResourceLocation &key)
        {
            return MLINK_FUNC(Item *, 0x0252C510, ItemRegistry *, const ResourceLocation &)(this, key);
        }
    };
} // namespace mc
