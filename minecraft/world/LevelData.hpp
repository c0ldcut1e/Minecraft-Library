#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "Difficulty.hpp"
#include "LevelType.hpp"
#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"
#include "nbt/CompoundTag.hpp"
#include "utils/GameType.hpp"
#include "world/LevelSettings.hpp"
#include "world/source/SuperflatConfig.hpp"

namespace mc
{
    class Player;

    class LevelData
    {
    public:
        LevelData()
        {
            MLINK_FUNC(void, 0x025BDC88, LevelData *)(this);
        }

        LevelData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025BEABC, LevelData *, CompoundTag *)(this, tag);
        }

        LevelData(LevelSettings *settings, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x025C0960, LevelData *, LevelSettings *, const mstd::basic_string<wchar_t> &)(this, settings, name);
        }

        LevelData(LevelData *other)
        {
            MLINK_FUNC(void, 0x025C0CB4, LevelData *, LevelData *)(this, other);
        }

        ~LevelData()
        {
            MLINK_FUNC(void, 0x025C1064, LevelData *, uint32_t)(this, 0);
        }

        CompoundTag *createTag()
        {
            return MLINK_FUNC(CompoundTag *, 0x025C1220, LevelData *)(this);
        }

        void createTag(mstd::vector<mboost::shared_ptr<Player>> *players)
        {
            MLINK_FUNC(void, 0x025C12A0, LevelData *, mstd::vector<mboost::shared_ptr<Player>> *)(this, players);
        }

        void setTagData(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025C138C, LevelData *, CompoundTag *)(this, tag);
        }

        uint64_t getSeed()
        {
            return MLINK_FUNC(uint64_t, 0x025C28C4, LevelData *)(this);
        }
        int getXSpawn()
        {
            return MLINK_FUNC(int, 0x025C28D0, LevelData *)(this);
        }
        int getYSpawn()
        {
            return MLINK_FUNC(int, 0x025C28D8, LevelData *)(this);
        }
        int getZSpawn()
        {
            return MLINK_FUNC(int, 0x025C28E0, LevelData *)(this);
        }
        int getXStronghold()
        {
            return MLINK_FUNC(int, 0x025C28E8, LevelData *)(this);
        }
        int getZStronghold()
        {
            return MLINK_FUNC(int, 0x025C28F0, LevelData *)(this);
        }
        int getXStrongholdEndPortal()
        {
            return MLINK_FUNC(int, 0x025C28F8, LevelData *)(this);
        }
        int getZStrongholdEndPortal()
        {
            return MLINK_FUNC(int, 0x025C2900, LevelData *)(this);
        }
        uint64_t getGameTime()
        {
            return MLINK_FUNC(uint64_t, 0x025C2908, LevelData *)(this);
        }
        uint64_t getDayTime()
        {
            return MLINK_FUNC(uint64_t, 0x025C2914, LevelData *)(this);
        }
        uint64_t getSizeOnDisk()
        {
            return MLINK_FUNC(uint64_t, 0x025C2920, LevelData *)(this);
        }

        void setSeed(uint64_t value)
        {
            MLINK_FUNC(void, 0x025C2934, LevelData *, uint64_t)(this, value);
        }
        void setXSpawn(int value)
        {
            MLINK_FUNC(void, 0x025C2940, LevelData *, int)(this, value);
        }
        void setYSpawn(int value)
        {
            MLINK_FUNC(void, 0x025C2948, LevelData *, int)(this, value);
        }
        void setZSpawn(int value)
        {
            MLINK_FUNC(void, 0x025C2950, LevelData *, int)(this, value);
        }
        void setHasStronghold()
        {
            MLINK_FUNC(void, 0x025C2958, LevelData *)(this);
        }
        bool getHasStronghold()
        {
            return MLINK_FUNC(bool, 0x025C2964, LevelData *)(this);
        }
        void setXStronghold(int value)
        {
            MLINK_FUNC(void, 0x025C296C, LevelData *, int)(this, value);
        }
        void setZStronghold(int value)
        {
            MLINK_FUNC(void, 0x025C2974, LevelData *, int)(this, value);
        }
        void setHasStrongholdEndPortal()
        {
            MLINK_FUNC(void, 0x025C297C, LevelData *)(this);
        }
        bool getHasStrongholdEndPortal()
        {
            return MLINK_FUNC(bool, 0x025C2988, LevelData *)(this);
        }
        void setXStrongholdEndPortal(int value)
        {
            MLINK_FUNC(void, 0x025C2990, LevelData *, int)(this, value);
        }
        void setZStrongholdEndPortal(int value)
        {
            MLINK_FUNC(void, 0x025C2998, LevelData *, int)(this, value);
        }
        void setGameTime(uint64_t value)
        {
            MLINK_FUNC(void, 0x025C29A0, LevelData *, uint64_t)(this, value);
        }
        void setDayTime(uint64_t value)
        {
            MLINK_FUNC(void, 0x025C29AC, LevelData *, uint64_t)(this, value);
        }
        void setSizeOnDisk(uint64_t value)
        {
            MLINK_FUNC(void, 0x025C29B8, LevelData *, uint64_t)(this, value);
        }
        void setLoadedPlayerTag(CompoundTag *tag)
        {
            MLINK_FUNC(void, 0x025C29C4, LevelData *, CompoundTag *)(this, tag);
        }
        void setSpawn(const BlockPos &pos)
        {
            MLINK_FUNC(void, 0x025C29C8, LevelData *, const BlockPos &)(this, pos);
        }

        void getLevelName(mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x025C29E4, LevelData *, mstd::basic_string<wchar_t> &)(this, name);
        }

        void setLevelName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x025C2A5C, LevelData *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        int getVersion()
        {
            return MLINK_FUNC(int, 0x025C2A78, LevelData *)(this);
        }
        void setVersion(int value)
        {
            MLINK_FUNC(void, 0x025C2A80, LevelData *, int)(this, value);
        }
        uint64_t getLastPlayed()
        {
            return MLINK_FUNC(uint64_t, 0x025C2A88, LevelData *)(this);
        }
        int getClearWeatherTime()
        {
            return MLINK_FUNC(int, 0x025C2A94, LevelData *)(this);
        }
        void setClearWeatherTime(int value)
        {
            MLINK_FUNC(void, 0x025C2A9C, LevelData *, int)(this, value);
        }
        bool isThundering()
        {
            return MLINK_FUNC(bool, 0x025C2AA4, LevelData *)(this);
        }
        void setThundering(bool value)
        {
            MLINK_FUNC(void, 0x025C2AAC, LevelData *, bool)(this, value);
        }
        int getThunderTime()
        {
            return MLINK_FUNC(int, 0x025C2AB4, LevelData *)(this);
        }
        void setThunderTime(int value)
        {
            MLINK_FUNC(void, 0x025C2ABC, LevelData *, int)(this, value);
        }
        bool isRaining()
        {
            return MLINK_FUNC(bool, 0x025C2AC4, LevelData *)(this);
        }
        void setRaining(bool value)
        {
            MLINK_FUNC(void, 0x025C2ACC, LevelData *, bool)(this, value);
        }
        int getRainTime()
        {
            return MLINK_FUNC(int, 0x025C2AD4, LevelData *)(this);
        }
        void setRainTime(int value)
        {
            MLINK_FUNC(void, 0x025C2ADC, LevelData *, int)(this, value);
        }
        GameType *getGameType()
        {
            return MLINK_FUNC(GameType *, 0x025C2AE4, LevelData *)(this);
        }
        bool isGenerateMapFeatures()
        {
            return MLINK_FUNC(bool, 0x025C2AEC, LevelData *)(this);
        }
        void setGenerateMapFeatures(bool value)
        {
            MLINK_FUNC(void, 0x025C2AF4, LevelData *, bool)(this, value);
        }
        bool getSpawnBonusChest()
        {
            return MLINK_FUNC(bool, 0x025C2AFC, LevelData *)(this);
        }
        void setGameType(const GameType *gameType)
        {
            MLINK_FUNC(void, 0x025C2B04, LevelData *, const GameType *)(this, gameType);
        }
        bool useNewSeaLevel()
        {
            return MLINK_FUNC(bool, 0x025C2B84, LevelData *)(this);
        }
        bool getHasBeenInCreative()
        {
            return MLINK_FUNC(bool, 0x025C2B8C, LevelData *)(this);
        }
        void setHasBeenInCreative(bool value)
        {
            MLINK_FUNC(void, 0x025C2B94, LevelData *, bool)(this, value);
        }
        LevelType *getGeneratorType()
        {
            return MLINK_FUNC(LevelType *, 0x025C2B9C, LevelData *)(this);
        }
        void setGeneratorType(LevelType *type)
        {
            MLINK_FUNC(void, 0x025C2BA4, LevelData *, LevelType *)(this, type);
        }
        SuperflatConfig *getGeneratorOptions()
        {
            return MLINK_FUNC(SuperflatConfig *, 0x025C2BD4, LevelData *)(this);
        }
        void setGeneratorOptions(SuperflatConfig *options)
        {
            MLINK_FUNC(void, 0x025C2BDC, LevelData *, SuperflatConfig *)(this, options);
        }
        bool isHardcore()
        {
            return MLINK_FUNC(bool, 0x025C2BE4, LevelData *)(this);
        }
        void setHardcore(bool value)
        {
            MLINK_FUNC(void, 0x025C2BEC, LevelData *, bool)(this, value);
        }
        bool getAllowCommands()
        {
            return MLINK_FUNC(bool, 0x025C2BF4, LevelData *)(this);
        }
        void setAllowCommands(bool value)
        {
            MLINK_FUNC(void, 0x025C2BFC, LevelData *, bool)(this, value);
        }
        bool isInitialized()
        {
            return MLINK_FUNC(bool, 0x025C2C04, LevelData *)(this);
        }
        void setInitialized(bool value)
        {
            MLINK_FUNC(void, 0x025C2C0C, LevelData *, bool)(this, value);
        }
        const Difficulty *getDifficulty()
        {
            return MLINK_FUNC(const Difficulty *, 0x025C2C1C, LevelData *)(this);
        }
        void setDifficulty(const Difficulty *difficulty)
        {
            MLINK_FUNC(void, 0x025C2C24, LevelData *, const Difficulty *)(this, difficulty);
        }
        int getCloudHeight()
        {
            return MLINK_FUNC(int, 0x025C2C78, LevelData *)(this);
        }
        void setCloudHeight(int value)
        {
            MLINK_FUNC(void, 0x025C2C80, LevelData *, int)(this, value);
        }
        bool isDifficultyLocked()
        {
            return MLINK_FUNC(bool, 0x025C2C88, LevelData *)(this);
        }
        void setDifficultyLocked(bool value)
        {
            MLINK_FUNC(void, 0x025C2C90, LevelData *, bool)(this, value);
        }
        int getXZSize()
        {
            return MLINK_FUNC(int, 0x025C2D98, LevelData *)(this);
        }
        int getHellScale()
        {
            return MLINK_FUNC(int, 0x025C2DA0, LevelData *)(this);
        }
        void setModernEnd()
        {
            MLINK_FUNC(void, 0x025C2DA8, LevelData *)(this);
        }
        bool getModernEnd()
        {
            return MLINK_FUNC(bool, 0x025C2DB4, LevelData *)(this);
        }
        uint8_t getBiomeScale()
        {
            return MLINK_FUNC(uint8_t, 0x025C2DBC, LevelData *)(this);
        }
        int getBiomeCentreXChunk()
        {
            return MLINK_FUNC(int, 0x025C2DC4, LevelData *)(this);
        }
        int getBiomeCentreZChunk()
        {
            return MLINK_FUNC(int, 0x025C2DCC, LevelData *)(this);
        }

        uint32_t seedLow;
        uint32_t seedHigh;
        int xSpawn;
        int ySpawn;
        int zSpawn;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t gameTimeLow;
        uint32_t gameTimeHigh;
        uint32_t dayTimeLow;
        uint32_t dayTimeHigh;
        uint32_t sizeOnDiskLow;
        uint32_t sizeOnDiskHigh;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        bool raining;
        uint8_t field_0x45;
        uint8_t field_0x46;
        uint8_t field_0x47;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        uint32_t field_0x54;
        uint32_t field_0x58;
        uint32_t field_0x5C;
        uint32_t field_0x60;
        uint32_t field_0x64;
        bool thundering;
        uint8_t field_0x6D;
        uint8_t field_0x6E;
        uint8_t field_0x6F;
        uint32_t field_0x70;
        bool initialized;
        uint8_t field_0x75;
        uint8_t field_0x76;
        uint8_t field_0x77;
        uint32_t field_0x78;
        GameType *gameType;
        bool generateMapFeatures;
        bool hardcore;
        bool allowCommands;
        bool difficultyLocked;
        Difficulty *difficulty;
        bool spawnBonusChest;
        uint8_t field_0x89;
        uint8_t field_0x8A;
        uint8_t field_0x8B;
        uint32_t field_0x8C;
        bool hasBeenInCreative;
        uint8_t field_0x8D;
        uint8_t field_0x8E;
        uint8_t field_0x8F;
        int clearWeatherTime;
        int thunderTime;
        uint32_t field_0x98;
        uint32_t field_0x9C;
        int rainTime;
        uint32_t field_0xA4;
        bool modernEnd;
        bool useNewSeaLevelFlag;
        uint8_t field_0xAA;
        uint8_t field_0xAB;
        int cloudHeight;
        int xzSize;
        uint8_t biomeScale;
        uint8_t field_0xB5;
        uint8_t field_0xB6;
        uint8_t field_0xB7;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        bool hasStronghold;
        uint8_t field_0xC5;
        uint8_t field_0xC6;
        uint8_t field_0xC7;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        bool hasStrongholdEndPortal;
        uint8_t field_0xD1;
        uint8_t field_0xD2;
        uint8_t field_0xD3;
        int biomeCentreXChunk;
        int biomeCentreZChunk;
        uint32_t field_0xDC;
        uint32_t vtable;
    };
    MC_CHECK_SIZE(LevelData, 0xE4);
} // namespace mc
