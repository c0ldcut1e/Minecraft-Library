#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "LevelType.hpp"
#include "MinecraftLib.hpp"
#include "utils/GameType.hpp"
#include "world/source/SuperflatConfig.hpp"

namespace mc
{
    class LevelData;

    class LevelSettings
    {
    public:
        LevelSettings(uint64_t seed, const GameType *gameType, bool generateMapFeatures, bool hardcore, bool allowCommands, LevelType *levelType,
                      int cloudHeight, int xzSize, int hellScale, bool modernEnd, uint8_t biomeScale, int biomeCentreXChunk, int biomeCentreZChunk)
        {
            MLINK_FUNC(void, 0x025A1D00, LevelSettings *, uint64_t, const GameType *, bool, bool, bool, LevelType *, int, int, int, bool, uint8_t,
                       int, int)(this, seed, gameType, generateMapFeatures, hardcore, allowCommands, levelType, cloudHeight, xzSize, hellScale,
                                 modernEnd, biomeScale, biomeCentreXChunk, biomeCentreZChunk);
        }

        LevelSettings(LevelData *levelData)
        {
            MLINK_FUNC(void, 0x025A1DF8, LevelSettings *, LevelData *)(this, levelData);
        }

        void enableStartingBonusItems()
        {
            MLINK_FUNC(void, 0x025A1F9C, LevelSettings *)(this);
        }

        void setLevelTypeOptions(SuperflatConfig *options)
        {
            MLINK_FUNC(void, 0x025A1FA8, LevelSettings *, SuperflatConfig *)(this, options);
        }

        bool hasStartingBonusItems()
        {
            return MLINK_FUNC(bool, 0x025A1FB0, LevelSettings *)(this);
        }

        uint64_t getSeed()
        {
            return MLINK_FUNC(uint64_t, 0x025A1FB8, LevelSettings *)(this);
        }

        const GameType *getGameType()
        {
            return MLINK_FUNC(const GameType *, 0x025A1FC4, LevelSettings *)(this);
        }

        bool isHardcore()
        {
            return MLINK_FUNC(bool, 0x025A1FCC, LevelSettings *)(this);
        }

        LevelType *getLevelType()
        {
            return MLINK_FUNC(LevelType *, 0x025A1FD4, LevelSettings *)(this);
        }

        bool getAllowCommands()
        {
            return MLINK_FUNC(bool, 0x025A1FDC, LevelSettings *)(this);
        }

        bool isGenerateMapFeatures()
        {
            return MLINK_FUNC(bool, 0x025A1FE4, LevelSettings *)(this);
        }

        int getCloudHeight()
        {
            return MLINK_FUNC(int, 0x025A1FEC, LevelSettings *)(this);
        }

        bool useNewSeaLevel()
        {
            return MLINK_FUNC(bool, 0x025A1FF4, LevelSettings *)(this);
        }

        int getXZSize()
        {
            return MLINK_FUNC(int, 0x025A1FFC, LevelSettings *)(this);
        }

        int getHellScale()
        {
            return MLINK_FUNC(int, 0x025A2004, LevelSettings *)(this);
        }

        bool getModernEnd()
        {
            return MLINK_FUNC(bool, 0x025A200C, LevelSettings *)(this);
        }

        uint8_t getBiomeScale()
        {
            return MLINK_FUNC(uint8_t, 0x025A2014, LevelSettings *)(this);
        }

        int getBiomeCentreXChunk()
        {
            return MLINK_FUNC(int, 0x025A201C, LevelSettings *)(this);
        }

        int getBiomeCentreZChunk()
        {
            return MLINK_FUNC(int, 0x025A2024, LevelSettings *)(this);
        }

        SuperflatConfig *getLevelTypeOptions()
        {
            return MLINK_FUNC(SuperflatConfig *, 0x025A203C, LevelSettings *)(this);
        }

        uint32_t seedLow;
        uint32_t seedHigh;
        const GameType *gameType;
        bool generateMapFeatures;
        bool hardcore;
        uint8_t field_0xE;
        uint8_t field_0xF;
        LevelType *levelType;
        bool allowCommands;
        uint8_t field_0x15;
        uint8_t field_0x16;
        uint8_t field_0x17;
        int cloudHeight;
        bool useNewSeaLevelFlag;
        bool modernEnd;
        uint8_t field_0x1E;
        uint8_t field_0x1F;
        int xzSize;
        int hellScale;
        int biomeCentreXChunk;
        uint8_t biomeScale;
        uint8_t field_0x2D;
        uint8_t field_0x2E;
        uint8_t field_0x2F;
        int biomeCentreZChunk;
        SuperflatConfig *levelTypeOptions;
    };
    MC_CHECK_SIZE(LevelSettings, 0x38);
} // namespace mc
