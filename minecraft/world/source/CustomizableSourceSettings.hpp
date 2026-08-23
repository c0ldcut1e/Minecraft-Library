#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class CustomizableSourceSettings
    {
    public:
        class Builder
        {
        public:
            Builder()
            {
                MLINK_FUNC(void, 0x02277E3C, mc::CustomizableSourceSettings::Builder *)(this);
            }
        };

        CustomizableSourceSettings(Builder *builder)
        {
            MLINK_FUNC(void, 0x02277964, mc::CustomizableSourceSettings *, Builder *)(this, builder);
        }

        void initDefault()
        {
            mainNoiseScaleY         = 160.0F;
            mainNoiseScaleX         = 80.0F;
            mainNoiseScaleZ         = 80.0F;
            stretchY                = 12.0F;
            useDungeons             = true;
            baseSize                = 8.5F;
            biomeScaleWeight        = 1.0F;
            biomeDepthWeight        = 1.0F;
            coordinateScale         = 684.412;
            upperLimitScale         = 512.0F;
            lowerLimitScale         = 512.0F;
            biomeDepthOffset        = 0.0F;
            dungeonChance           = 8;
            dirtSize                = 4;
            useMonuments            = true;
            dirtCount               = 0x21;
            riverSize               = 4;
            depthNoiseScaleZ        = 200.0F;
            heightScale             = 684.412;
            useCaves                = true;
            useMansions             = true;
            depthNoiseScaleX        = 200.0F;
            useWaterLakes           = true;
            seaLevel                = 0x3F;
            dirtMinHeight           = 10;
            fixedBiome              = -1;
            useRavines              = true;
            coalCount               = 0x11;
            ironMaxHeight           = 0;
            gravelMaxHeight         = 0;
            goldCount               = 9;
            useMineShafts           = true;
            gravelSize              = 0x80;
            gravelCount             = 0x21;
            coalMaxHeight           = 0;
            dirtMaxHeight           = 0;
            biomeScaleOffset        = 0.0F;
            useStrongholds          = true;
            depthNoiseScaleExponent = 0.5F;
            useVillages             = true;
            gravelMinHeight         = 8;
            useTemples              = true;
            goldMinHeight           = 2;
            redstoneSize            = 0x20;
            ironMinHeight           = 0x14;
            ironSize                = 0x80;
            goldSize                = 0x40;
            coalSize                = 0x50;
            lapisCenterHeight       = 1;
            dioriteMaxHeight        = 0;
            lapisSpread             = 0x10;
            lapisCount              = 7;
            diamondMaxHeight        = 0;
            lapisSize               = 0x10;
            ironCount               = 9;
            diamondSize             = 0x10;
            andesiteMinHeight       = 10;
            dioriteMinHeight        = 10;
            graniteMaxHeight        = 0;
            graniteSize             = 0x80;
            graniteMinHeight        = 10;
            redstoneMaxHeight       = 0;
            andesiteSize            = 0x50;
            goldMaxHeight           = 0;
            redstoneMinHeight       = 8;
            graniteCount            = 0x21;
            andesiteCount           = 0x21;
            dioriteSize             = 0x50;
            dioriteCount            = 0x21;
            diamondCount            = 8;
            redstoneCount           = 8;
            coalMinHeight           = 0x14;
            andesiteMaxHeight       = 0;
            diamondMinHeight        = 1;
        }

        float coordinateScale;
        float heightScale;
        float lowerLimitScale;
        float upperLimitScale;
        float depthNoiseScaleX;
        float depthNoiseScaleZ;
        float depthNoiseScaleExponent;
        float mainNoiseScaleX;
        float mainNoiseScaleY;
        float mainNoiseScaleZ;
        float baseSize;
        float stretchY;
        float biomeDepthWeight;
        float biomeDepthOffset;
        float biomeScaleWeight;
        float biomeScaleOffset;
        uint32_t seaLevel;
        bool useCaves;
        bool useDungeons;
        uint32_t dungeonChance;
        bool useStrongholds;
        bool useVillages;
        bool useMineShafts;
        bool useTemples;
        bool useMonuments;
        bool useRavines;
        bool useMansions;
        bool useWaterLakes;
        uint32_t waterLakeChance;
        bool useLavaLakes;
        uint32_t lavaLakeChance;
        bool useLavaOceans;
        uint32_t BiomeSize;
        uint32_t fixedBiome;
        uint32_t riverSize;
        uint32_t dirtSize;
        uint32_t dirtCount;
        uint32_t dirtMinHeight;
        uint32_t dirtMaxHeight;
        uint32_t gravelSize;
        uint32_t gravelCount;
        uint32_t gravelMinHeight;
        uint32_t gravelMaxHeight;
        uint32_t graniteSize;
        uint32_t graniteCount;
        uint32_t graniteMinHeight;
        uint32_t graniteMaxHeight;
        uint32_t dioriteSize;
        uint32_t dioriteCount;
        uint32_t dioriteMinHeight;
        uint32_t dioriteMaxHeight;
        uint32_t andesiteSize;
        uint32_t andesiteCount;
        uint32_t andesiteMinHeight;
        uint32_t andesiteMaxHeight;
        uint32_t coalSize;
        uint32_t coalCount;
        uint32_t coalMinHeight;
        uint32_t coalMaxHeight;
        uint32_t ironSize;
        uint32_t ironCount;
        uint32_t ironMinHeight;
        uint32_t ironMaxHeight;
        uint32_t goldSize;
        uint32_t goldCount;
        uint32_t goldMinHeight;
        uint32_t goldMaxHeight;
        uint32_t redstoneSize;
        uint32_t redstoneCount;
        uint32_t redstoneMinHeight;
        uint32_t redstoneMaxHeight;
        uint32_t diamondSize;
        uint32_t diamondCount;
        uint32_t diamondMinHeight;
        uint32_t diamondMaxHeight;
        uint32_t lapisSize;
        uint32_t lapisCount;
        uint32_t lapisCenterHeight;
        uint32_t lapisSpread;
    };
    MC_CHECK_SIZE(CustomizableSourceSettings, 0x120);
} // namespace mc
