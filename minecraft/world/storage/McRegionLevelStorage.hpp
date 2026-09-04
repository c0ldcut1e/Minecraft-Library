#pragma once

#include "MinecraftLib.hpp"
#include "client/file/File.hpp"
#include "entity/player/Player.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "save/ConsoleSaveFile.hpp"
#include "world/Dimension.hpp"
#include "world/level/LevelData.hpp"
#include "world/level/datafix/DataFixerUpper.hpp"

namespace mc
{
    class McRegionLevelStorage
    {
    public:
        McRegionLevelStorage(ConsoleSaveFile *saveFile, File directory, const mstd::basic_string<wchar_t> &levelName, bool create,
                             DataFixerUpper *dataFixerUpper)
        {
            MLINK_FUNC(void, 0x025D6428, McRegionLevelStorage *, ConsoleSaveFile *, File, const mstd::basic_string<wchar_t> &, bool,
                       DataFixerUpper *)(this, saveFile, directory, levelName, create, dataFixerUpper);
        }

        ~McRegionLevelStorage()
        {
            MLINK_FUNC(void, 0x0253872C, McRegionLevelStorage *, uint32_t)(this, 0);
        }

        MC_UNDEFINED_TYPE(uint32_t *, ChunkStorage) createChunkStorage(Dimension *dimension)
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(uint32_t *, ChunkStorage), 0x025D7290, McRegionLevelStorage *, Dimension *)(this, dimension);
        }

        void closeAll()
        {
            MLINK_FUNC(void, 0x025D77BC, McRegionLevelStorage *)(this);
        }

        void saveLevelData(LevelData *levelData, mstd::vector<mboost::shared_ptr<Player>> *players)
        {
            MLINK_FUNC(void, 0x025D7720, McRegionLevelStorage *, LevelData *, mstd::vector<mboost::shared_ptr<Player>> *)(this, levelData, players);
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
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
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
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
        DataFixerUpper *dataFixerUpper;
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
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        ConsoleSaveFile *saveFile;
    };
    MC_CHECK_SIZE(McRegionLevelStorage, 0xE8);
} // namespace mc
