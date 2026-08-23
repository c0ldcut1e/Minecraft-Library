#pragma once

#include "mlink/MLink.hpp"

#include "client/resource/ResourceLocation.hpp"
#include "item/Item.hpp"
#include "sound/SoundEvent.hpp"

namespace mc
{
    template<typename K, typename V>
    class MappedRegistry;

    using SoundRegistry = MappedRegistry<ResourceLocation, const SoundEvent *>;
    using ItemRegistry  = MappedRegistry<ResourceLocation, Item *>;

    template<>
    class MappedRegistry<ResourceLocation, const SoundEvent *>
    {
    public:
        static SoundRegistry *GetInstance()
        {
            return MLink::PointerFromOffset<SoundRegistry>(0x104F02AC);
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
    class MappedRegistry<ResourceLocation, Item *>
    {
    public:
        static ItemRegistry *GetInstance()
        {
            return MLink::PointerFromAddress<ItemRegistry>(0x104DD5F8);
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
