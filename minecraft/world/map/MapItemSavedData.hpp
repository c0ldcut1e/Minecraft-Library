#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "SavedData.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class CompoundTag;

    class MapItemSavedData : public SavedData
    {
    public:
        class HoldingPlayer
        {
        public:
            void markDirty(int x, int y)
            {
                if (field_0x8 != 0x00)
                {
                    int tempx = field_0xC;
                    if (x < (int) field_0xC)
                    {
                        tempx = x;
                    }

                    int tempy = field_0x10;
                    if (y < (int) field_0x10)
                    {
                        tempy = y;
                    }

                    field_0xC = tempx;
                    if (x < (int) field_0x14)
                    {
                        x = field_0x14;
                    }

                    field_0x10 = tempy;
                    if (y < (int) field_0x18)
                    {
                        y = field_0x18;
                    }

                    field_0x14 = x;
                    field_0x18 = y;
                    return;
                }

                field_0xC  = x;
                field_0x8  = 0x01;
                field_0x18 = y;
                field_0x10 = y;
                field_0x14 = x;
            }

            uint32_t field_0x0;
            uint32_t field_0x4;
            uint8_t field_0x8;
            uint8_t field_0x9;
            uint8_t field_0xA;
            uint8_t field_0xB;
            uint32_t field_0xC;
            uint32_t field_0x10;
            uint32_t field_0x14;
            uint32_t field_0x18;
            uint32_t field_0x1C;
            uint32_t field_0x20;
            uint32_t field_0x24;
            uint32_t field_0x28;
            uint32_t field_0x2C;
            uint32_t field_0x30;
            uint32_t field_0x34;
        };

        MapItemSavedData(const mstd::basic_string<wchar_t> &str) : SavedData(str)
        {
            MLINK_FUNC(MapItemSavedData *, 0x025C5AA4, MapItemSavedData *, const mstd::basic_string<wchar_t> &)(this, str);
        }

        void load(class CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025D8670, MapItemSavedData *, class CompoundTag *)(this, tag);
        }

        void save(class CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025D8EB4, MapItemSavedData *, class CompoundTag *)(this, tag);
        }

        int xCenter;
        int zCenter;
        uint8_t dimension;
        bool trackingPosition;
        bool unlimitedTracking;
        uint8_t scale;
        // 0x3C = Buffer
        // 0x40 = Length
        ArrayWithLength<uint8_t> imgData;
        mstd::vector<mboost::shared_ptr<HoldingPlayer>> holdingPlayers;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        uint32_t field_0x68;
        uint32_t field_0x6C;
        uint32_t field_0x70;
        uint32_t field_0x74;
        uint32_t field_0x78;
        uint32_t field_0x7C;
        uint32_t field_0x80;
        uint32_t field_0x84;
        uint32_t field_0x88;
        uint32_t field_0x8C;
        uint32_t field_0x90;
        uint32_t field_0x94;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        uint32_t field_0xA0;
        uint32_t field_0xA4;
    };
    MC_CHECK_SIZE(MapItemSavedData, 0xA8);

    // static_assert(sizeof(MapItemSavedData) == 0xA8);
} // namespace mc
