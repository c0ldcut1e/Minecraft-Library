#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "CustomizableSourceSettings.hpp"
#include "utils/MCRandom.hpp"
#include "utils/PerlinNoise.hpp"
#include "utils/VTable_LevelSource.hpp"
#include "world/Level.hpp"
#include "world/feature/BuriedTreasureFeature.hpp"
#include "world/feature/LargeFeature.hpp"
#include "world/feature/MineShaftFeature.hpp"
#include "world/feature/OceanMonumentFeature.hpp"
#include "world/feature/OceanRuinFeature.hpp"
#include "world/feature/RandomScatteredLargeFeature.hpp"
#include "world/feature/ShipwreckFeature.hpp"
#include "world/feature/StrongholdFeature.hpp"
#include "world/feature/VillageFeature.hpp"
#include "world/feature/WoodlandMansionFeature.hpp"

namespace mc
{
    class OverworldLevelSource
    {
    public:
        OverworldLevelSource(Level *level_, int64_t unk1, bool isFlat, uint32_t superFlatConfig_)
        {
            MLINK_FUNC(void, 0x02779154, OverworldLevelSource *, Level *, int64_t, bool, uint32_t)(this, level_, unk1, isFlat, superFlatConfig_);
        }

        uint32_t size;
        VTable_LevelSource *vtbl;
        uint32_t genericLevelSource;
        uint32_t field_0xC;
        MCRandom random1;
        MCRandom random2;
        PerlinNoise *perlinNoise1;
        PerlinNoise *perlinNoise2;
        PerlinNoise *perlinNoise3;
        PerlinNoise *perlinNoise4;
        PerlinNoise *perlinNoise5;
        PerlinNoise *perlinNoise6;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        PerlinNoise *perlinNoise7;
        Level *level;
        uint32_t superFlatConfig;
        uint32_t generatorType;
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
        uint32_t field_0xA8;
        uint32_t field_0xAC;
        uint32_t field_0xB0;
        uint32_t field_0xB4;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        CustomizableSourceSettings *customSourceSettings;
        uint32_t waterDefBlockState;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        LargeFeature *caveFeature;
        StrongholdFeature *strongholdFeature;
        VillageFeature *villageFeature;
        MineShaftFeature *mineshaftFeature;
        RandomScatteredLargeFeature *scatteredFeatures;
        LargeFeature *ravineFeature;
        LargeFeature *underwaterCaveFeature;
        LargeFeature *underwaterRavineFeature;
        OceanMonumentFeature *oceanMonumentFeature;
        WoodlandMansionFeature *woodlandMansionFeature;
        BuriedTreasureFeature *buriedTreasureFeature;
        ShipwreckFeature *shipwreckFeature;
        OceanRuinFeature *oceanRuinFeature;
    };
} // namespace mc
