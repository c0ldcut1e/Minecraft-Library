#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "AppEnums.hpp"
#include "client/Minecraft.hpp"
#include "entity/player/LocalPlayer.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "world/gamerule/GameRuleManager.hpp"

namespace mc
{
    class CMinecraftApp
    {
    public:
        static CMinecraftApp *GetInstance()
        {
            return MLink::PointerFromOffset<CMinecraftApp>(0x10528DC0);
        }

        static const mstd::basic_string<wchar_t> &getSkinPathFromId(void *ptr, uint32_t skinId)
        {
            return MLINK_FUNC(const mstd::basic_string<wchar_t> &, 0x02F6D438, void *, uint32_t)(ptr, skinId);
        }

        void AddMemoryTextureFile(const mstd::basic_string<wchar_t> &name, uint8_t *data, uint32_t size)
        {
            MLINK_FUNC(void, 0x02F5DF50, CMinecraftApp *, const mstd::basic_string<wchar_t> &, uint8_t *, uint32_t)(this, name, data, size);
        }

        uint64_t getArchiveFile(const mstd::basic_string<wchar_t> &path, bool texturePackOverride)
        {
            return MLINK_FUNC(uint64_t, 0x02F27940, CMinecraftApp *, const mstd::basic_string<wchar_t> &, bool)(this, path, texturePackOverride);
        }

        int GetFirstMiniGameType()
        {
            return MLINK_FUNC(int, 0x02F6E90C, CMinecraftApp *)(this);
        }

        LevelRuleset *getGameRuleDefinitions()
        {
            return MLINK_FUNC(LevelRuleset *, 0x02F671FC, CMinecraftApp *)(this);
        }

        bool GetGameStarted()
        {
            return MLINK_FUNC(bool, 0x02F2A28C, CMinecraftApp *)(this);
        }

        LevelGenerationOptions *getLevelGenerationOptions()
        {
            return MLINK_FUNC(LevelGenerationOptions *, 0x02F67210, CMinecraftApp *)(this);
        }

        unsigned int GetPlayerColour(uint8_t networkSmallId)
        {
            return MLINK_FUNC(unsigned int, 0x02F67394, CMinecraftApp *, uint8_t)(this, networkSmallId);
        }

        unsigned int GetPlayerPrivileges(uint8_t networkSmallId)
        {
            return MLINK_FUNC(unsigned int, 0x02F6743C, CMinecraftApp *, uint8_t)(this, networkSmallId);
        }

        eXuiAction GetXuiAction(int pad)
        {
            return MLINK_FUNC(eXuiAction, 0x02F2FA4C, CMinecraftApp *, int)(this, pad);
        }

        bool hasArchiveFile(const mstd::basic_string<wchar_t> &path, bool texturePackOverride)
        {
            return MLINK_FUNC(bool, 0x02F27A9C, CMinecraftApp *, const mstd::basic_string<wchar_t> &, bool)(this, path, texturePackOverride);
        }

        bool isAppPaused()
        {
            return MLINK_FUNC(bool, 0x02F36EEC, CMinecraftApp *)(this);
        }

        bool LoadCreativeMenu(int pad, const mboost::shared_ptr<LocalPlayer> &player, bool navigateBack)
        {
            return MLINK_FUNC(bool, 0x02F585B8, CMinecraftApp *, int, mboost::shared_ptr<LocalPlayer>, bool)(this, pad, player, navigateBack);
        }

        bool LoadInventoryMenu(int pad, const mboost::shared_ptr<LocalPlayer> &player, bool navigateBack)
        {
            return MLINK_FUNC(bool, 0x02F583DC, CMinecraftApp *, int, mboost::shared_ptr<LocalPlayer>, bool)(this, pad, player, navigateBack);
        }

        void SetAction(int pad, eXuiAction action, void *param = nullptr)
        {
            MLINK_FUNC(void, 0x02F289BC, CMinecraftApp *, int, eXuiAction, void *)(this, pad, action, param);
        }

        void SetAppPaused(bool value)
        {
            MLINK_FUNC(void, 0x02F2BF6C, CMinecraftApp *, bool)(this, value);
        }

        void SetFirstMiniGameType(Minecraft::EMiniGameId miniGameId)
        {
            MLINK_FUNC(void, 0x02F6E904, CMinecraftApp *, Minecraft::EMiniGameId)(this, miniGameId);
        }

        void SetGameHostOption(eGameHostOption option, uint32_t value)
        {
            MLINK_FUNC(void, 0x02F17714, CMinecraftApp *, eGameHostOption, uint32_t)(this, option, value);
        }

        void SetLiveLinkRequired(bool required)
        {
            MLINK_FUNC(void, 0x02F5C7CC, CMinecraftApp *, bool)(this, required);
        }

        void UpdatePlayerInfo(uint8_t smallId, short slot, unsigned int privileges, uint8_t gameType)
        {
            MLINK_FUNC(void, 0x02F672A8, CMinecraftApp *, uint8_t, short, unsigned int, uint8_t)(this, smallId, slot, privileges, gameType);
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
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        uint32_t field_0xDC;
        uint32_t field_0xE0;
        uint32_t field_0xE4;
        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        uint32_t field_0x144;
        uint32_t field_0x148;
        uint32_t field_0x14C;
        uint32_t field_0x150;
        uint32_t field_0x154;
        uint32_t field_0x158;
        uint32_t field_0x15C;
        uint32_t field_0x160;
        uint32_t field_0x164;
        uint32_t field_0x168;
        uint32_t field_0x16C;
        uint32_t field_0x170;
        uint32_t field_0x174;
        uint32_t field_0x178;
        uint32_t field_0x17C;
        uint32_t field_0x180;
        bool gameStarted;
        uint8_t field_0x185;
        uint8_t field_0x186;
        uint8_t field_0x187;
        uint32_t field_0x188;
        uint32_t field_0x18C;
        uint32_t field_0x190;
        uint32_t field_0x194;
        uint32_t field_0x198;
        uint32_t field_0x19C;
        uint32_t field_0x1A0;
        uint32_t field_0x1A4;
        uint32_t field_0x1A8;
        uint32_t field_0x1AC;
        uint32_t field_0x1B0;
        uint32_t field_0x1B4;
        uint32_t field_0x1B8;
        uint32_t field_0x1BC;
        uint32_t field_0x1C0;
        uint32_t field_0x1C4;
        uint32_t field_0x1C8;
        uint32_t field_0x1CC;
        uint32_t field_0x1D0;
        uint32_t field_0x1D4;
        uint32_t field_0x1D8;
        uint32_t field_0x1DC;
        uint32_t field_0x1E0;
        uint32_t field_0x1E4;
        uint32_t field_0x1E8;
        uint32_t field_0x1EC;
        uint32_t field_0x1F0;
        uint32_t field_0x1F4;
        uint32_t field_0x1F8;
        uint32_t field_0x1FC;
        uint32_t field_0x200;
        uint32_t field_0x204;
        uint32_t field_0x208;
        uint32_t field_0x20C;
        uint32_t field_0x210;
        uint32_t field_0x214;
        uint32_t field_0x218;
        uint32_t field_0x21C;
        uint32_t field_0x220;
        uint32_t field_0x224;
        uint32_t field_0x228;
        uint32_t field_0x22C;
        uint32_t field_0x230;
        uint32_t field_0x234;
        uint32_t field_0x238;
        uint32_t field_0x23C;
        uint32_t field_0x240;
        uint32_t field_0x244;
        uint32_t field_0x248;
        uint32_t field_0x24C;
        uint32_t field_0x250;
        uint32_t field_0x254;
        uint32_t field_0x258;
        uint32_t field_0x25C;
        uint32_t field_0x260;
        uint32_t field_0x264;
        uint32_t field_0x268;
        uint32_t field_0x26C;
        uint32_t field_0x270;
        uint32_t field_0x274;
        uint32_t field_0x278;
        uint32_t field_0x27C;
        uint32_t field_0x280;
        uint32_t field_0x284;
        uint32_t field_0x288;
        uint32_t field_0x28C;
        uint32_t field_0x290;
        uint32_t field_0x294;
        uint32_t field_0x298;
        uint32_t field_0x29C;
        uint32_t field_0x2A0;
        uint32_t field_0x2A4;
        uint32_t field_0x2A8;
        uint32_t field_0x2AC;
        uint32_t field_0x2B0;
        uint32_t field_0x2B4;
        uint32_t field_0x2B8;
        uint32_t field_0x2BC;
        uint32_t field_0x2C0;
        uint32_t field_0x2C4;
        uint32_t field_0x2C8;
        uint32_t field_0x2CC;
        uint32_t field_0x2D0;
        uint32_t field_0x2D4;
        uint32_t field_0x2D8;
        uint32_t field_0x2DC;
        uint32_t field_0x2E0;
        uint32_t field_0x2E4;
        uint32_t field_0x2E8;
        uint32_t field_0x2EC;
        uint32_t field_0x2F0;
        uint32_t field_0x2F4;
        uint32_t field_0x2F8;
        uint32_t field_0x2FC;
        uint32_t field_0x300;
        uint32_t field_0x304;
        uint32_t field_0x308;
        uint32_t field_0x30C;
        uint32_t field_0x310;
        uint32_t field_0x314;
        uint32_t field_0x318;
        uint32_t field_0x31C;
        uint32_t field_0x320;
        uint32_t field_0x324;
        uint32_t field_0x328;
        uint32_t field_0x32C;
        uint32_t field_0x330;
        uint32_t field_0x334;
        uint32_t field_0x338;
        uint32_t field_0x33C;
        uint32_t field_0x340;
        uint32_t field_0x344;
        uint32_t field_0x348;
        uint32_t field_0x34C;
        uint32_t field_0x350;
        uint32_t field_0x354;
        uint32_t field_0x358;
        uint32_t field_0x35C;
        uint32_t field_0x360;
        uint32_t field_0x364;
        uint32_t field_0x368;
        uint32_t field_0x36C;
        uint32_t field_0x370;
        uint32_t field_0x374;
        uint32_t field_0x378;
        uint32_t field_0x37C;
        uint32_t field_0x380;
        uint32_t field_0x384;
        uint32_t field_0x388;
        uint32_t field_0x38C;
        uint32_t field_0x390;
        uint32_t field_0x394;
        uint32_t field_0x398;
        uint32_t field_0x39C;
        uint32_t field_0x3A0;
        uint32_t field_0x3A4;
        uint32_t field_0x3A8;
        uint32_t field_0x3AC;
        uint32_t field_0x3B0;
        uint32_t field_0x3B4;
        uint32_t field_0x3B8;
        uint32_t field_0x3BC;
        uint32_t field_0x3C0;
        uint32_t field_0x3C4;
        uint32_t field_0x3C8;
        uint32_t field_0x3CC;
        uint32_t field_0x3D0;
        uint32_t field_0x3D4;
        uint32_t field_0x3D8;
        uint32_t field_0x3DC;
        uint32_t field_0x3E0;
        uint32_t field_0x3E4;
        uint32_t field_0x3E8;
        uint32_t field_0x3EC;
        uint32_t field_0x3F0;
        uint32_t field_0x3F4;
        uint32_t field_0x3F8;
        uint32_t field_0x3FC;
        uint32_t field_0x400;
        uint32_t field_0x404;
        uint32_t field_0x408;
        uint32_t field_0x40C;
        uint32_t field_0x410;
        uint32_t field_0x414;
        GameRuleManager gameRuleManager;
        uint32_t field_0x42C;
        uint32_t field_0x430;
        uint32_t field_0x434;
        uint32_t field_0x438;
        uint32_t field_0x43C;
        uint32_t field_0x440;
        uint32_t field_0x444;
        uint32_t field_0x448;
        uint32_t field_0x44C;
        uint32_t field_0x450;
        uint32_t field_0x454;
        uint32_t field_0x458;
        uint32_t field_0x45C;
        uint32_t field_0x460;
        uint32_t field_0x464;
        uint32_t field_0x468;
        uint32_t field_0x46C;
        uint32_t field_0x470;
        uint32_t field_0x474;
        uint32_t field_0x478;
        uint32_t field_0x47C;
        uint32_t field_0x480;
        uint32_t field_0x484;
        uint32_t field_0x488;
        uint32_t field_0x48C;
        uint32_t field_0x490;
        uint32_t field_0x494;
        uint32_t field_0x498;
        uint32_t field_0x49C;
        uint32_t field_0x4A0;
        uint32_t field_0x4A4;
        uint32_t field_0x4A8;
        uint32_t field_0x4AC;
        uint32_t field_0x4B0;
        uint32_t field_0x4B4;
        uint32_t field_0x4B8;
        uint32_t field_0x4BC;
        uint32_t field_0x4C0;
        uint32_t field_0x4C4;
        uint32_t field_0x4C8;
        uint32_t field_0x4CC;
        uint32_t field_0x4D0;
        uint32_t field_0x4D4;
        uint32_t field_0x4D8;
        uint32_t field_0x4DC;
        uint32_t field_0x4E0;
        uint32_t field_0x4E4;
        uint32_t field_0x4E8;
        uint32_t field_0x4EC;
        uint32_t field_0x4F0;
        uint32_t field_0x4F4;
        uint32_t field_0x4F8;
        uint32_t field_0x4FC;
        uint32_t field_0x500;
        uint32_t field_0x504;
        uint32_t field_0x508;
        uint32_t field_0x50C;
        uint32_t field_0x510;
        uint32_t field_0x514;
        uint32_t field_0x518;
        uint32_t field_0x51C;
        uint32_t field_0x520;
        uint32_t field_0x524;
        uint32_t field_0x528;
        uint32_t field_0x52C;
        uint32_t field_0x530;
        uint32_t field_0x534;
        uint32_t field_0x538;
        uint32_t field_0x53C;
        uint32_t field_0x540;
        uint32_t field_0x544;
        uint32_t field_0x548;
        uint32_t field_0x54C;
        uint32_t field_0x550;
        uint32_t field_0x554;
        uint32_t field_0x558;
        uint32_t field_0x55C;
        uint32_t field_0x560;
        uint32_t field_0x564;
        uint32_t field_0x568;
        uint32_t field_0x56C;
        uint32_t field_0x570;
        uint32_t field_0x574;
        uint32_t field_0x578;
        uint32_t field_0x57C;
        uint32_t field_0x580;
        uint32_t field_0x584;
        uint32_t field_0x588;
        uint32_t field_0x58C;
        uint32_t field_0x590;
        uint32_t field_0x594;
        uint32_t field_0x598;
        uint32_t field_0x59C;
        uint32_t field_0x5A0;
        uint32_t field_0x5A4;
        uint32_t field_0x5A8;
        uint32_t field_0x5AC;
        uint32_t field_0x5B0;
        uint32_t field_0x5B4;
        uint32_t field_0x5B8;
        uint32_t field_0x5BC;
        uint32_t field_0x5C0;
        uint32_t field_0x5C4;
        uint32_t field_0x5C8;
        uint32_t field_0x5CC;
        uint32_t field_0x5D0;
        uint32_t field_0x5D4;
        uint32_t field_0x5D8;
        uint32_t field_0x5DC;
        uint32_t field_0x5E0;
        uint32_t field_0x5E4;
        uint32_t field_0x5E8;
        uint32_t field_0x5EC;
        uint32_t field_0x5F0;
        uint32_t field_0x5F4;
        uint32_t field_0x5F8;
        uint32_t field_0x5FC;
        uint32_t field_0x600;
        uint32_t field_0x604;
        uint32_t field_0x608;
        uint32_t field_0x60C;
        uint32_t field_0x610;
        uint32_t field_0x614;
        uint32_t field_0x618;
        uint32_t field_0x61C;
        uint32_t field_0x620;
        uint32_t field_0x624;
        uint32_t field_0x628;
        uint32_t field_0x62C;
        uint32_t field_0x630;
        uint32_t field_0x634;
        uint32_t field_0x638;
        uint32_t field_0x63C;
        uint32_t field_0x640;
        uint32_t field_0x644;
        uint32_t field_0x648;
        uint32_t field_0x64C;
        uint32_t field_0x650;
        uint32_t field_0x654;
        uint32_t field_0x658;
        uint32_t field_0x65C;
        uint32_t field_0x660;
        uint32_t field_0x664;
        uint32_t field_0x668;
        uint32_t field_0x66C;
        uint32_t field_0x670;
        uint32_t field_0x674;
        uint32_t field_0x678;
        uint32_t field_0x67C;
        uint32_t field_0x680;
        uint32_t field_0x684;
        uint32_t field_0x688;
        int firstMiniGameType;
        uint32_t field_0x690;
        uint32_t field_0x694;
        uint32_t field_0x698;
        uint32_t field_0x69C;
        uint32_t field_0x6A0;
        uint32_t field_0x6A4;
        uint32_t field_0x6A8;
        uint32_t field_0x6AC;
        uint32_t field_0x6B0;
        uint32_t field_0x6B4;
    };
} // namespace mc
