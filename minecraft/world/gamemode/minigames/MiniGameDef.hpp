#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/basic_string.hpp"
#include "internal/unordered_map.hpp"
#include "internal/vector.hpp"
#include "world/gamemode/GameModeOptions.hpp"
#include "world/gamemode/MiniGamePlayerSettings.hpp"

namespace mc
{
    enum class EMiniGameId : uint32_t
    {
        Lobby       = 0,
        Battle      = 1,
        Tumble      = 2,
        Glide       = 3,
        BuildOff    = 4,
        NormalWorld = 15,
    };

    class MiniGameDef
    {
    public:
        class TimerSpec
        {
        public:
            TimerSpec()
            {
                MLINK_FUNC(void, 0x02C30728, TimerSpec *)(this);
            }

            TimerSpec(MC_UNDEFINED_TYPE(const uint32_t &, XmlObject) definition)
            {
                MLINK_FUNC(void, 0x02C312B8, TimerSpec *, MC_UNDEFINED_TYPE(const uint32_t &, XmlObject))(this, definition);
            }

            void SetDurationS(int duration)
            {
                MLINK_FUNC(void, 0x02C60508, TimerSpec *, int)(this, duration);
            }

            uint32_t TotalDurationS()
            {
                return MLINK_FUNC(uint32_t, 0x02C60518, TimerSpec *)(this);
            }

            uint32_t TotalDurationMs()
            {
                return MLINK_FUNC(uint32_t, 0x02C60534, TimerSpec *)(this);
            }

            uint32_t AnnounceEveryS(bool laterAnnouncement)
            {
                return MLINK_FUNC(uint32_t, 0x02C60570, TimerSpec *, bool)(this, laterAnnouncement);
            }

            uint32_t AnnounceEveryMs(bool laterAnnouncement)
            {
                return MLINK_FUNC(uint32_t, 0x02C605A8, TimerSpec *, bool)(this, laterAnnouncement);
            }

            uint32_t ChangeAnnounceAfterS()
            {
                return MLINK_FUNC(uint32_t, 0x02C605E4, TimerSpec *)(this);
            }

            uint32_t ChangeAnnounceAfterMs()
            {
                return MLINK_FUNC(uint32_t, 0x02C6065C, TimerSpec *)(this);
            }

            bool hasDuration;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            uint32_t durationSeconds;
            bool hasAnnounceEvery;
            uint8_t field_0x9;
            uint8_t field_0xA;
            uint8_t field_0xB;
            uint32_t announceEverySeconds;
            bool hasChangeAnnounceAfter;
            uint8_t field_0x11;
            uint8_t field_0x12;
            uint8_t field_0x13;
            uint32_t changeAnnounceAfterSeconds;
            uint32_t field_0x18;
            uint32_t field_0x1C;
            uint32_t field_0x20;
            uint32_t field_0x24;
        };
        MC_CHECK_SIZE(TimerSpec, 0x28);

        class SoundSpec
        {
        public:
            SoundSpec()
            {
                MLINK_FUNC(void, 0x02C318F0, SoundSpec *)(this);
            }

            SoundSpec(MC_UNDEFINED_TYPE(const uint32_t &, XmlObject) definition)
            {
                MLINK_FUNC(void, 0x02C32470, SoundSpec *, MC_UNDEFINED_TYPE(const uint32_t &, XmlObject))(this, definition);
            }

            int ForLast()
            {
                return MLINK_FUNC(int, 0x02C60698, SoundSpec *)(this);
            }

            float Volume()
            {
                return MLINK_FUNC(float, 0x02C606B8, SoundSpec *)(this);
            }

            bool hasDuration;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            int durationSeconds;
            bool hasVolume;
            uint8_t field_0x9;
            uint8_t field_0xA;
            uint8_t field_0xB;
            float volume;
        };
        MC_CHECK_SIZE(SoundSpec, 0x10);

        class FoodBalance
        {
        public:
            FoodBalance()
            {
                MLINK_FUNC(void, 0x02C3368C, FoodBalance *)(this);
            }

            FoodBalance(const FoodBalance &other)
            {
                MLINK_FUNC(void, 0x02C33780, FoodBalance *, const FoodBalance &)(this, other);
            }

            bool hasMaxFood;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            int maxFood;
            bool hasMaxSaturation;
            uint8_t field_0x9;
            uint8_t field_0xA;
            uint8_t field_0xB;
            float maxSaturation;
            bool hasStartSaturation;
            uint8_t field_0x11;
            uint8_t field_0x12;
            uint8_t field_0x13;
            float startSaturation;
            bool hasSaturationFloor;
            uint8_t field_0x19;
            uint8_t field_0x1A;
            uint8_t field_0x1B;
            float saturationFloor;
            bool hasExhaustionDrop;
            uint8_t field_0x21;
            uint8_t field_0x22;
            uint8_t field_0x23;
            float exhaustionDrop;
            bool hasHealthTickCount;
            uint8_t field_0x29;
            uint8_t field_0x2A;
            uint8_t field_0x2B;
            int healthTickCount;
            bool hasHealthTickCountSaturated;
            uint8_t field_0x31;
            uint8_t field_0x32;
            uint8_t field_0x33;
            int healthTickCountSaturated;
            bool hasHealLevel;
            uint8_t field_0x39;
            uint8_t field_0x3A;
            uint8_t field_0x3B;
            int healLevel;
            bool hasStarveLevel;
            uint8_t field_0x41;
            uint8_t field_0x42;
            uint8_t field_0x43;
            int starveLevel;
            bool hasSprintLevel;
            uint8_t field_0x49;
            uint8_t field_0x4A;
            uint8_t field_0x4B;
            int sprintLevel;
            bool hasExhaustionHeal;
            uint8_t field_0x51;
            uint8_t field_0x52;
            uint8_t field_0x53;
            float exhaustionHeal;
            bool hasExhaustionJump;
            uint8_t field_0x59;
            uint8_t field_0x5A;
            uint8_t field_0x5B;
            float exhaustionJump;
            bool hasExhaustionSprintJump;
            uint8_t field_0x61;
            uint8_t field_0x62;
            uint8_t field_0x63;
            float exhaustionSprintJump;
            bool hasExhaustionMine;
            uint8_t field_0x69;
            uint8_t field_0x6A;
            uint8_t field_0x6B;
            float exhaustionMine;
            bool hasExhaustionAttack;
            uint8_t field_0x71;
            uint8_t field_0x72;
            uint8_t field_0x73;
            float exhaustionAttack;
            bool hasVariant;
            uint8_t field_0x79;
            uint8_t field_0x7A;
            uint8_t field_0x7B;
            int variant;
            bool hasExhaustionSneak;
            uint8_t field_0x81;
            uint8_t field_0x82;
            uint8_t field_0x83;
            float exhaustionSneak;
            bool hasExhaustionWalk;
            uint8_t field_0x89;
            uint8_t field_0x8A;
            uint8_t field_0x8B;
            float exhaustionWalk;
            bool hasExhaustionSprint;
            uint8_t field_0x91;
            uint8_t field_0x92;
            uint8_t field_0x93;
            float exhaustionSprint;
            bool hasExhaustionSwim;
            uint8_t field_0x99;
            uint8_t field_0x9A;
            uint8_t field_0x9B;
            float exhaustionSwim;
            bool hasExhaustionIdle;
            uint8_t field_0xA1;
            uint8_t field_0xA2;
            uint8_t field_0xA3;
            float exhaustionIdle;
        };
        MC_CHECK_SIZE(FoodBalance, 0xA8);

        class LootGroupName
        {
        public:
            bool isSet;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            mstd::basic_string<wchar_t> name;
        };
        MC_CHECK_SIZE(LootGroupName, 0x24);

        class ChestRefill
        {
        public:
            ChestRefill()
            {
                MLINK_FUNC(void, 0x02C2FFA8, ChestRefill *)(this);
            }

            bool hasCentralRefillChance;
            uint8_t field_0x1;
            uint8_t field_0x2;
            uint8_t field_0x3;
            uint32_t centralRefillChance;
            bool hasOuterRefillChance;
            uint8_t field_0x9;
            uint8_t field_0xA;
            uint8_t field_0xB;
            uint32_t outerRefillChance;
            bool hasHighValueRefillChance;
            uint8_t field_0x11;
            uint8_t field_0x12;
            uint8_t field_0x13;
            uint32_t highValueRefillChance;
            bool hasChestCount;
            uint8_t field_0x19;
            uint8_t field_0x1A;
            uint8_t field_0x1B;
            uint32_t chestCount;
            bool hasMinPlayerDistance;
            uint8_t field_0x21;
            uint8_t field_0x22;
            uint8_t field_0x23;
            uint32_t minPlayerDistance;
            bool hasMaxPlayerDistance;
            uint8_t field_0x29;
            uint8_t field_0x2A;
            uint8_t field_0x2B;
            uint32_t maxPlayerDistance;
            LootGroupName centralLootGroup;
            LootGroupName outerLootGroup;
            LootGroupName highValueLootGroup;
        };
        MC_CHECK_SIZE(ChestRefill, 0x9C);

        class BlockData
        {
        public:
            BlockData()
            {
                MLINK_FUNC(void, 0x02C301A4, BlockData *)(this);
            }

            bool hasBlockTickOverride;
            bool blockTickOverride;
            bool hasDefaultBlockTick;
            bool defaultBlockTick;
            mboost::unordered::unordered_map<int, bool> blockTickOverrides;
            bool hasBlockTickDefaults;
            uint8_t field_0x1D;
            uint8_t field_0x1E;
            uint8_t field_0x1F;
            mboost::unordered::unordered_map<int, bool> blockTickDefaults;
        };
        MC_CHECK_SIZE(BlockData, 0x38);

        class ItemOverrides
        {
        public:
            mboost::unordered::unordered_map<int, double> baseDamage;
            mboost::unordered::unordered_map<int, int> nutrition;
            mboost::unordered::unordered_map<int, double> saturationModifier;
            mboost::unordered::unordered_map<int, int> potionDuration;
            mboost::unordered::unordered_map<int, float> lingeringDuration;
            mboost::unordered::unordered_map<int, int> throwPower;
            mboost::unordered::unordered_map<int, int> throwAngle;
        };
        MC_CHECK_SIZE(ItemOverrides, 0xA8);

        class LootSetDef
        {
        public:
            LootSetDef()
            {
                MLINK_FUNC(void, 0x02C3A218, LootSetDef *)(this);
            }

            ~LootSetDef()
            {
                MLINK_FUNC(void, 0x02CDF640, LootSetDef *, uint32_t)(this, 0);
            }

            mboost::unordered::unordered_map<mstd::basic_string<wchar_t>, mstd::basic_string<wchar_t>> attributes;
            mboost::unordered::unordered_map<mstd::basic_string<wchar_t>, MC_UNDEFINED_TYPE(uint32_t, ModeVariationLootGroup)> lootGroups;
        };
        MC_CHECK_SIZE(LootSetDef, 0x30);

        MiniGameDef(MC_UNDEFINED_TYPE(const uint32_t &, XmlObject) definition)
        {
            MLINK_FUNC(void, 0x02C49684, MiniGameDef *, MC_UNDEFINED_TYPE(const uint32_t &, XmlObject))(this, definition);
        }

        MiniGameDef(EMiniGameId miniGameId)
        {
            MLINK_FUNC(void, 0x02C4C958, MiniGameDef *, EMiniGameId)(this, miniGameId);
        }

        ~MiniGameDef()
        {
            MLINK_FUNC(void, 0x02C4E45C, MiniGameDef *, uint32_t)(this, 0);
        }

        static void MakeCRCTable()
        {
            MLINK_FUNC(void, 0x02C4CEF8)();
        }

        static uint32_t UpdateCRC(uint32_t crc, uint8_t *data, int length)
        {
            return MLINK_FUNC(uint32_t, 0x02C4D1C0, uint32_t, uint8_t *, int)(crc, data, length);
        }

        static uint32_t CRC(uint8_t *data, int length)
        {
            return MLINK_FUNC(uint32_t, 0x02C4D340, uint8_t *, int)(data, length);
        }

        static void ParseMiniGameDef(MC_UNDEFINED_TYPE(uint32_t *, XmlObject) definition)
        {
            MLINK_FUNC(void, 0x02C4CD18, MC_UNDEFINED_TYPE(uint32_t *, XmlObject))(definition);
        }

        static void ParseMiniGameDef(ArrayWithLength<uint8_t> definition)
        {
            MLINK_FUNC(void, 0x02C4D384, ArrayWithLength<uint8_t>)(definition);
        }

        static void SetPlayerSettings(const MiniGamePlayerSettings &settings)
        {
            MLINK_FUNC(void, 0x02C4D830, const MiniGamePlayerSettings &)(settings);
        }

        static void GetPlayerSettings(MiniGamePlayerSettings &settings)
        {
            MLINK_FUNC(void, 0x02C4D8B4, MiniGamePlayerSettings &)(settings);
        }

        static bool IsCustomGame(EMiniGameId miniGameId, const MiniGamePlayerSettings &settings)
        {
            return MLINK_FUNC(bool, 0x02C561EC, EMiniGameId, const MiniGamePlayerSettings &)(miniGameId, settings);
        }

        static void GetVariantIconPath(EMiniGameId miniGameId, uint32_t variant)
        {
            MLINK_FUNC(void, 0x02C5BBA0, EMiniGameId, uint32_t)(miniGameId, variant);
        }

        uint32_t GetHostOption(eCustomGameModeHostOption option)
        {
            return MLINK_FUNC(uint32_t, 0x02C226E0, MiniGameDef *, eCustomGameModeHostOption)(this, option);
        }

        uint32_t GetRoundCount()
        {
            return MLINK_FUNC(uint32_t, 0x02C22738, MiniGameDef *)(this);
        }

        int GetFinalRoundIndex()
        {
            return MLINK_FUNC(int, 0x02C22794, MiniGameDef *)(this);
        }

        void GetGameVariant()
        {
            MLINK_FUNC(void, 0x02C227D0, MiniGameDef *)(this);
        }

        bool HostOptionBool(eCustomGameModeHostOption option, uint32_t value)
        {
            return MLINK_FUNC(bool, 0x02C2C1BC, MiniGameDef *, eCustomGameModeHostOption, uint32_t)(this, option, value);
        }

        void HostOptionBool(eCustomGameModeHostOption option)
        {
            MLINK_FUNC(void, 0x02C2C1C8, MiniGameDef *, eCustomGameModeHostOption)(this, option);
        }

        bool ArePointsActive()
        {
            return MLINK_FUNC(bool, 0x02C2C228, MiniGameDef *)(this);
        }

        bool ArePowerupsActive()
        {
            return MLINK_FUNC(bool, 0x02C2C23C, MiniGameDef *)(this);
        }

        EMiniGameId GetId()
        {
            return MLINK_FUNC(EMiniGameId, 0x02C4D960, MiniGameDef *)(this);
        }

        void CleanUp()
        {
            MLINK_FUNC(void, 0x02C4D968, MiniGameDef *)(this);
        }

        bool IsCustomGame()
        {
            return MLINK_FUNC(bool, 0x02C56270, MiniGameDef *)(this);
        }

        int GetOptionsCount(eCustomGameModeHostOption option)
        {
            return MLINK_FUNC(int, 0x02C56484, MiniGameDef *, eCustomGameModeHostOption)(this, option);
        }

        int GetGameVariantCount()
        {
            return MLINK_FUNC(int, 0x02C56554, MiniGameDef *)(this);
        }

        int GetLootSetCount()
        {
            return MLINK_FUNC(int, 0x02C56568, MiniGameDef *)(this);
        }

        uint32_t GetLootSetId()
        {
            return MLINK_FUNC(uint32_t, 0x02C5659C, MiniGameDef *)(this);
        }

        void SetLootSet(int lootSet)
        {
            MLINK_FUNC(void, 0x02C565AC, MiniGameDef *, int)(this, lootSet);
        }

        bool IsCRCValid()
        {
            return MLINK_FUNC(bool, 0x02C57C70, MiniGameDef *)(this);
        }

        bool MayPlace(int buildMode)
        {
            return MLINK_FUNC(bool, 0x02C57D2C, MiniGameDef *, int)(this, buildMode);
        }

        bool MayDestroy(int buildMode)
        {
            return MLINK_FUNC(bool, 0x02C57D8C, MiniGameDef *, int)(this, buildMode);
        }

        bool MayUse(int buildMode)
        {
            return MLINK_FUNC(bool, 0x02C57DEC, MiniGameDef *, int)(this, buildMode);
        }

        bool MayUseBlock(int buildMode)
        {
            return MLINK_FUNC(bool, 0x02C57E4C, MiniGameDef *, int)(this, buildMode);
        }

        bool CanAutoStart()
        {
            return MLINK_FUNC(bool, 0x02C57EAC, MiniGameDef *)(this);
        }

        bool ShowInvulnerableEffect()
        {
            return MLINK_FUNC(bool, 0x02C57EB4, MiniGameDef *)(this);
        }

        bool LockedInventory()
        {
            return MLINK_FUNC(bool, 0x02C57EBC, MiniGameDef *)(this);
        }

        bool ShowdownAnnouncements()
        {
            return MLINK_FUNC(bool, 0x02C57EC4, MiniGameDef *)(this);
        }

        bool AllowPvP()
        {
            return MLINK_FUNC(bool, 0x02C57ECC, MiniGameDef *)(this);
        }

        bool GetTutorialsEnabled()
        {
            return MLINK_FUNC(bool, 0x02C57ED4, MiniGameDef *)(this);
        }

        bool GetShowNametags()
        {
            return MLINK_FUNC(bool, 0x02C57EDC, MiniGameDef *)(this);
        }

        double GetDamageIndicatorDelay()
        {
            return MLINK_FUNC(double, 0x02C57EEC, MiniGameDef *)(this);
        }

        bool LoadOnlyActiveAreaChunks()
        {
            return MLINK_FUNC(bool, 0x02C57EF4, MiniGameDef *)(this);
        }

        uint32_t GetLivesPerRound()
        {
            return MLINK_FUNC(uint32_t, 0x02C57EFC, MiniGameDef *)(this);
        }

        uint32_t GetTeamCount()
        {
            return MLINK_FUNC(uint32_t, 0x02C57F0C, MiniGameDef *)(this);
        }

        bool IsTeamBasedSpawn()
        {
            return MLINK_FUNC(bool, 0x02C57F1C, MiniGameDef *)(this);
        }

        bool IsCheckpointBasedSpawn()
        {
            return MLINK_FUNC(bool, 0x02C57F2C, MiniGameDef *)(this);
        }

        bool HasSpectatorParticipation()
        {
            return MLINK_FUNC(bool, 0x02C57F3C, MiniGameDef *)(this);
        }

        bool IsSmallInventoryEnabled()
        {
            return MLINK_FUNC(bool, 0x02C57F90, MiniGameDef *)(this);
        }

        bool GetMaxPlayersForSmallMaps()
        {
            return MLINK_FUNC(bool, 0x02C57FA0, MiniGameDef *)(this);
        }

        bool IsTakeEverythingEnabled()
        {
            return MLINK_FUNC(bool, 0x02C57FA8, MiniGameDef *)(this);
        }

        bool IsChestRefillEnabled()
        {
            return MLINK_FUNC(bool, 0x02C57FB8, MiniGameDef *)(this);
        }

        uint32_t ForceSpectateModeFollow()
        {
            return MLINK_FUNC(uint32_t, 0x02C57FC8, MiniGameDef *)(this);
        }

        uint32_t GetItemRespawnTime()
        {
            return MLINK_FUNC(uint32_t, 0x02C5CC74, MiniGameDef *)(this);
        }

        bool IsShowdownEnabled()
        {
            return MLINK_FUNC(bool, 0x02C5CC7C, MiniGameDef *)(this);
        }

        bool CanCraft()
        {
            return MLINK_FUNC(bool, 0x02C5CC84, MiniGameDef *)(this);
        }

        bool HasMultipleRounds()
        {
            return MLINK_FUNC(bool, 0x02C5CC8C, MiniGameDef *)(this);
        }

        bool HasFeatureSeasonalMaps()
        {
            return MLINK_FUNC(bool, 0x02C5E130, MiniGameDef *)(this);
        }

        bool HasFeatureKeepInventory()
        {
            return MLINK_FUNC(bool, 0x02C5E144, MiniGameDef *)(this);
        }

        bool AllowsUGC()
        {
            return MLINK_FUNC(bool, 0x02C5E928, MiniGameDef *)(this);
        }

        bool HasMultipleMaps()
        {
            return MLINK_FUNC(bool, 0x02C5EB54, MiniGameDef *)(this);
        }

        bool HasMultipleVariants()
        {
            return MLINK_FUNC(bool, 0x02C5ECBC, MiniGameDef *)(this);
        }

        bool HasRoundLengthOption()
        {
            return MLINK_FUNC(bool, 0x02C5EE14, MiniGameDef *)(this);
        }

        bool HasGameVariants()
        {
            return MLINK_FUNC(bool, 0x02C5EE50, MiniGameDef *)(this);
        }

        bool HasCentralSpawnOption()
        {
            return MLINK_FUNC(bool, 0x02C5EE8C, MiniGameDef *)(this);
        }

        bool HasTeamGameOption()
        {
            return MLINK_FUNC(bool, 0x02C5EEA0, MiniGameDef *)(this);
        }

        bool IsHUDDisabled()
        {
            return MLINK_FUNC(bool, 0x02C5EEB4, MiniGameDef *)(this);
        }

        bool ArePortalsDisabled()
        {
            return MLINK_FUNC(bool, 0x02C5EED8, MiniGameDef *)(this);
        }

        bool IsBatSqueakDisabled()
        {
            return MLINK_FUNC(bool, 0x02C5EEE0, MiniGameDef *)(this);
        }

        bool HasFeatureLookBack()
        {
            return MLINK_FUNC(bool, 0x02C5F7E8, MiniGameDef *)(this);
        }

        bool HasFeatureStartCameraAnimation()
        {
            return MLINK_FUNC(bool, 0x02C5F7FC, MiniGameDef *)(this);
        }

        bool HasFeatureFinishLineSoundEffect()
        {
            return MLINK_FUNC(bool, 0x02C5F810, MiniGameDef *)(this);
        }

        bool HasFeatureCheckpoints()
        {
            return MLINK_FUNC(bool, 0x02C5F824, MiniGameDef *)(this);
        }

        bool HasFeatureClouds()
        {
            return MLINK_FUNC(bool, 0x02C5F838, MiniGameDef *)(this);
        }

        bool HasFeatureCustomBeacons()
        {
            return MLINK_FUNC(bool, 0x02C5F84C, MiniGameDef *)(this);
        }

        bool HasFeatureDirectionalFireworks()
        {
            return MLINK_FUNC(bool, 0x02C5F860, MiniGameDef *)(this);
        }

        bool HasFeatureFairExplosions()
        {
            return MLINK_FUNC(bool, 0x02C5F874, MiniGameDef *)(this);
        }

        bool HasFeatureReducedKnockback()
        {
            return MLINK_FUNC(bool, 0x02C5F888, MiniGameDef *)(this);
        }

        bool HasFeatureArrowCanKnockback()
        {
            return MLINK_FUNC(bool, 0x02C5FA14, MiniGameDef *)(this);
        }

        bool HasFeatureSplashLevitatePotions()
        {
            return MLINK_FUNC(bool, 0x02C5FBA0, MiniGameDef *)(this);
        }

        bool HasFeatureShorterHitbox()
        {
            return MLINK_FUNC(bool, 0x02C5FD2C, MiniGameDef *)(this);
        }

        bool HasFeatureGhostThroughProjectiles()
        {
            return MLINK_FUNC(bool, 0x02C5FD40, MiniGameDef *)(this);
        }

        bool HasFeatureProjectilesBreakBlocks()
        {
            return MLINK_FUNC(bool, 0x02C5FFEC, MiniGameDef *)(this);
        }

        bool HasFeatureThrownProjectilesAreFireImmune()
        {
            return MLINK_FUNC(bool, 0x02C60000, MiniGameDef *)(this);
        }

        bool HasFeatureAutoElytraFly()
        {
            return MLINK_FUNC(bool, 0x02C60014, MiniGameDef *)(this);
        }

        bool HasFeatureInvertedExplodingGrenades()
        {
            return MLINK_FUNC(bool, 0x02C601A0, MiniGameDef *)(this);
        }

        bool HasFeatureLessExplosionParticles()
        {
            return MLINK_FUNC(bool, 0x02C6032C, MiniGameDef *)(this);
        }

        bool HasFeatureElytraFlyingOnSpawn()
        {
            return MLINK_FUNC(bool, 0x02C60340, MiniGameDef *)(this);
        }

        bool HasFeatureOverrideHandSwing()
        {
            return MLINK_FUNC(bool, 0x02C60354, MiniGameDef *)(this);
        }

        bool HasFeatureReducedParticles()
        {
            return MLINK_FUNC(bool, 0x02C60368, MiniGameDef *)(this);
        }

        bool HasFeatureSnowballAwards()
        {
            return MLINK_FUNC(bool, 0x02C6037C, MiniGameDef *)(this);
        }

        bool currentHostOptionVersion;
        uint8_t field_0x1;
        uint8_t field_0x2;
        uint8_t field_0x3;
        mboost::unordered::unordered_map<int, int> optionDefaults;
        mboost::unordered::unordered_map<int, mstd::vector<int>> optionValues;
        mstd::vector<mboost::unordered::unordered_map<int, mboost::unordered::unordered_map<int, int>>> matchmakingFilters;
        mstd::vector<int> gameVariants;
        MiniGamePlayerSettings defaultPlayerSettings;
        mboost::unordered::unordered_map<int, TimerSpec> timerSpecs;
        mboost::unordered::unordered_map<int, SoundSpec> soundSpecs;
        EMiniGameId miniGameId;
        MC_UNDEFINED_TYPE(uint32_t *, ConditionConnective) startConditions;
        MC_UNDEFINED_TYPE(uint32_t *, ConditionConnective) endConditions;
        MC_UNDEFINED_TYPE(uint32_t *, ConditionConnective) postGameConditions;
        MC_UNDEFINED_TYPE(uint32_t *, ConditionConnective) showdownConditions;
        uint16_t versionMajor;
        uint16_t versionMinor;
        uint32_t crc;
        bool canAutoStart;
        bool loadOnlyActiveAreaChunks;
        bool editActionsDisabled;
        uint8_t field_0x10B;
        bool hasDifficultyOverride;
        uint8_t field_0x10D;
        uint8_t field_0x10E;
        uint8_t field_0x10F;
        int difficultyOverride;
        bool hasPlayerGameType;
        uint8_t field_0x115;
        uint8_t field_0x116;
        uint8_t field_0x117;
        int playerGameType;
        uint32_t spectateMode;
        uint32_t spectateEntity;
        uint32_t disabledEditActions;
        bool canCraft;
        bool showInvulnerableEffect;
        bool lockedInventory;
        bool showdownAnnouncements;
        bool allowPvP;
        bool tutorialsEnabled;
        uint8_t field_0x12E;
        uint8_t field_0x12F;
        float damageIndicatorDelay;
        bool canLavaConvertWater;
        uint8_t field_0x135;
        uint8_t field_0x136;
        uint8_t field_0x137;
        uint32_t placeBuildMode;
        uint32_t destroyBuildMode;
        uint32_t useBuildMode;
        uint32_t useBlockBuildMode;
        mstd::vector<int> placePermissions;
        mstd::vector<int> destroyPermissions;
        mstd::vector<int> usePermissions;
        mstd::vector<int> useBlockPermissions;
        bool allowsUGC;
        uint8_t maxPlayersForSmallMaps;
        uint8_t field_0x18A;
        uint8_t field_0x18B;
        mboost::unordered::unordered_map<int, FoodBalance *> foodBalances;
        ChestRefill chestRefill;
        BlockData blockData;
        ItemOverrides itemOverrides;
        mstd::vector<LootSetDef> lootSets;
    };
    MC_CHECK_SIZE(MiniGameDef, 0x330);
} // namespace mc
