#pragma once

#include "mlink/MLink.hpp"

#include "MappedRegistry.hpp"
#include "block/Block.hpp"
#include "client/resource/ResourceLocation.hpp"

namespace mc
{
    template<typename K, typename V>
    class DefaultedMappedRegistry : public MappedRegistry<K, V>
    {
    };

    using BlockRegistry = DefaultedMappedRegistry<ResourceLocation, Block *>;

    template<>
    class DefaultedMappedRegistry<ResourceLocation, Block *>
    {
    public:
        static BlockRegistry *GetInstance()
        {
            return MLink::PointerFromOffset<BlockRegistry>(0x104D76D8);
        }

        bool containsKey(const ResourceLocation &key)
        {
            return MLINK_FUNC(bool, 0x021A3BC4, BlockRegistry *, const ResourceLocation &)(this, key);
        }

        Block *get(const ResourceLocation &key)
        {
            return MLINK_FUNC(Block *, 0x020C90F8, BlockRegistry *, const ResourceLocation &)(this, key);
        }
    };
} // namespace mc
