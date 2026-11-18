#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/Block.hpp"
#include "block/BlockState.hpp"
#include "internal/basic_string.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"

namespace mc
{
    struct FlatLayerInfo
    {
        FlatLayerInfo() = default;

        FlatLayerInfo(int height, Block *block)
        {
            MLINK_FUNC(void, 0x0242DF50, FlatLayerInfo *, int, Block *)(this, height, block);
        }

        FlatLayerInfo(int height, int blockId, int data)
        {
            MLINK_FUNC(void, 0x0242DFD0, FlatLayerInfo *, int, int, int)(this, height, blockId, data);
        }

        FlatLayerInfo(int version, int height, Block *block, int data)
        {
            MLINK_FUNC(void, 0x0242E090, FlatLayerInfo *, int, int, Block *, int)(this, version, height, block, data);
        }

        int getStart() const
        {
            return MLINK_FUNC(int, 0x02428918, const FlatLayerInfo *)(this);
        }

        const BlockState *getBlockState() const
        {
            return MLINK_FUNC(const BlockState *, 0x02428920, const FlatLayerInfo *)(this);
        }

        int getHeight() const
        {
            return MLINK_FUNC(int, 0x0242A228, const FlatLayerInfo *)(this);
        }

        int getEnd() const
        {
            return MLINK_FUNC(int, 0x0242A230, const FlatLayerInfo *)(this);
        }

        void setHeight(int height)
        {
            MLINK_FUNC(void, 0x0242E128, FlatLayerInfo *, int)(this, height);
        }

        void setBlockState(const BlockState *state)
        {
            MLINK_FUNC(void, 0x0242E130, FlatLayerInfo *, const BlockState *)(this, state);
        }

        Block *getBlock() const
        {
            return MLINK_FUNC(Block *, 0x0242E138, const FlatLayerInfo *)(this);
        }

        void setStart(int start)
        {
            MLINK_FUNC(void, 0x0242E1D8, FlatLayerInfo *, int)(this, start);
        }

        int field_0x0;
        const BlockState *blockState;
        int height;
        int start;
    };
    MC_CHECK_SIZE(FlatLayerInfo, 0x10);

    class SuperflatConfig
    {
    public:
        bool hasParam(uint8_t param)
        {
            return MLINK_FUNC(bool, 0x02428BD4, SuperflatConfig *, uint8_t)(this, param);
        }

        bool hasOption(uint8_t param, uint8_t option)
        {
            return MLINK_FUNC(bool, 0x024300E8, SuperflatConfig *, uint8_t, uint8_t)(this, param, option);
        }

        SuperflatConfig *setDisplayname(const mstd::basic_string<wchar_t> &name)
        {
            return MLINK_FUNC(SuperflatConfig *, 0x0242F09C, SuperflatConfig *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setVersion(uint8_t value)
        {
            MLINK_FUNC(void, 0x02433CC8, SuperflatConfig *, uint8_t)(this, value);
        }

        void addParam(uint8_t param)
        {
            MLINK_FUNC(void, 0x02431258, SuperflatConfig *, uint8_t)(this, param);
        }

        void removeParam(uint8_t param)
        {
            MLINK_FUNC(void, 0x0243187C, SuperflatConfig *, uint8_t)(this, param);
        }

        void setOption(uint8_t param, uint8_t option, uint8_t value)
        {
            MLINK_FUNC(void, 0x024314C4, SuperflatConfig *, uint8_t, uint8_t, uint8_t)(this, param, option, value);
        }

        uint8_t getOption(uint8_t param, uint8_t option)
        {
            return MLINK_FUNC(uint8_t, 0x02433CD0, SuperflatConfig *, uint8_t, uint8_t)(this, param, option);
        }

        uint8_t maybeOption(uint8_t param, uint8_t option, uint8_t fallback)
        {
            return MLINK_FUNC(uint8_t, 0x02433D80, SuperflatConfig *, uint8_t, uint8_t, uint8_t)(this, param, option, fallback);
        }

        void updateLayers()
        {
            MLINK_FUNC(void, 0x02431FB4, SuperflatConfig *)(this);
        }

        void clear()
        {
            MLINK_FUNC(void, 0x02433B5C, SuperflatConfig *)(this);
        }

        mstd::basic_string<wchar_t> displayName;
        uint8_t version;
        uint8_t field_0x21;
        uint8_t field_0x22;
        uint8_t field_0x23;
        mstd::vector<FlatLayerInfo> layers;
        mboost::unordered::unordered_map<uint8_t, mboost::unordered::unordered_map<uint8_t, uint8_t>> options;
    };
    MC_CHECK_SIZE(SuperflatConfig, 0x4C);
} // namespace mc
