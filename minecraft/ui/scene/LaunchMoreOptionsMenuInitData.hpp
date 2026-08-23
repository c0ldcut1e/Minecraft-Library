#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/vector.hpp"
#include "world/gamemode/MiniGamePlayerSettings.hpp"
#include "world/source/SuperflatConfig.hpp"

namespace mc
{
    struct LaunchMoreOptionsMenuInitData
    {
        mstd::vector<MC_UNDEFINED_TYPE(void *, LevelRules::LevelRulesetGroup *)> levelRulesets;

        bool onlineGame;
        bool inviteOnly;
        bool allowFriendsOfFriends;
        bool generateOptions;
        bool structures;
        bool flatWorld;
        bool bonusChest;
        bool pvp;
        bool trust;
        bool fireSpreads;
        bool tnt;
        bool hostPrivileges;
        bool resetNether;
        bool resetEnd;
        bool field_0xE;
        bool field_0xF;
        bool field_0x10;
        bool field_0x11;
        bool field_0x12;
        bool field_0x13;
        bool field_0x14;
        bool field_0x15;
        bool field_0x16;
        bool onlineSettingChangedBySystem;
        int pad;
        uint32_t texturePack;
        mstd::basic_string<wchar_t> seed;
        bool disableSaving;
        uint8_t field_0x41;
        uint8_t field_0x42;
        uint8_t field_0x43;
        int worldSize;
        bool field_0x48;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        uint32_t field_0x4C;
        uint32_t field_0x50;
        bool field_0x54;
        bool field_0x55;
        bool miniGame;
        bool findGame;
        bool publicGame;
        uint8_t field_0x59;
        uint8_t field_0x5A;
        uint8_t field_0x5B;
        uint32_t miniGameId;
        uint32_t miniGameMapSelection;
        uint32_t miniGameVariant;
        bool field_0x68;
        uint8_t field_0x69;
        uint8_t field_0x6A;
        uint8_t field_0x6B;
        MiniGamePlayerSettings miniGamePlayerSettings;
        bool field_0xD4;
        uint8_t field_0xD5;
        uint8_t field_0xD6;
        uint8_t field_0xD7;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        SuperflatConfig superflatConfig;
        uint32_t field_0x13C;
    };
    MC_CHECK_SIZE(LaunchMoreOptionsMenuInitData, 0x140);
} // namespace mc
