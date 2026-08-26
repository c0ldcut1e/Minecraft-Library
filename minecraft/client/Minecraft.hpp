#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Timer.hpp"
#include "app/Options.hpp"
#include "entity/Entity.hpp"
#include "entity/player/LocalPlayer.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "rendering/Font.hpp"
#include "rendering/world/EntityRenderDispatcher.hpp"
#include "rendering/world/LevelRenderer.hpp"
#include "resource/texture/Textures.hpp"
#include "ui/Gui.hpp"
#include "world/gamemode/ClientMasterGameMode.hpp"
#include "world/gamemode/MultiPlayerGameMode.hpp"
#include "world/level/Level.hpp"
#include "world/level/MultiPlayerLevel.hpp"

namespace mc
{
    class GameRenderer;
    class ItemInHandRenderer;
    class LocalPlayer;
    class MultiplayerLocalPlayer;
    class ClientPacketListener;
    class ItemRenderer;

    class Minecraft
    {
    public:
        enum EMiniGameId : uint32_t
        {
            EMiniGameId_Lobby       = 0,
            EMiniGameId_Battle      = 1,
            EMiniGameId_Tumble      = 2,
            EMiniGameId_Glide       = 3,
            EMiniGameId_BuildBattle = 4,
            EMiniGameId_Any         = 0xF,
        };

        static Minecraft *GetInstance()
        {
            return MLINK_FUNC(Minecraft *, 0x03166818)();
        }

        static int InGame_SignInReturned(void *unk1, bool unk2, int unk3, int unk4)
        {
            return MLINK_FUNC(int, 0x03193EBC, void *, bool, int, int)(unk1, unk2, unk3, unk4);
        }

        static bool InMiniGame(uint32_t eMiniGameId, bool param_1)
        {
            return MLINK_FUNC(bool, 0x0318D024, uint32_t, bool)(eMiniGameId, param_1);
        }

        int addLocalPlayer(int unk1)
        {
            return MLINK_FUNC(int, 0x0318C2C0, mc::Minecraft *, int)(this, unk1);
        }

        void clearConnectionFailed()
        {
            MLINK_FUNC(void, 0x0319211C, Minecraft *)(this);
        }

        void createExtraLocalPlayer(int *out, int unk1, const mstd::basic_string<wchar_t> &unk2, int unk3, int unk4, ClientPacketListener *listener,
                                    void *level, int unk5, int unk6)
        {
            MLINK_FUNC(void, 0x0318F204, Minecraft *, int *, int, const mstd::basic_string<wchar_t> &, int, int, ClientPacketListener *, void *, int,
                       int)(this, out, unk1, unk2, unk3, unk4, listener, level, unk5, unk6);
        }

        ClientPacketListener *getConnection(int param_1)
        {
            return MLINK_FUNC(ClientPacketListener *, 0x031B2654, Minecraft *, int)(this, param_1);
        }

        ItemRenderer *getItemRenderer()
        {
            return MLINK_FUNC(ItemRenderer *, 0x03176FF8, Minecraft *)(this);
        }

        MultiPlayerLevel *getLevel(int param_1)
        {
            return MLINK_FUNC(MultiPlayerLevel *, 0x0318C878, Minecraft *, int)(this, param_1);
        }

        mboost::shared_ptr<MultiplayerLocalPlayer> *GetPlayerByPlayerIndex(int idx, const mboost::shared_ptr<MultiplayerLocalPlayer> &dest)
        {
            return MLINK_FUNC(mboost::shared_ptr<MultiplayerLocalPlayer> *, 0x031B3644, Minecraft *,
                              const mboost::shared_ptr<MultiplayerLocalPlayer> &, int)(this, dest, idx);
        }

        void setCameraEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x031B2B54, Minecraft *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void SetJoiningFromFriendsTabOrInvite(bool value)
        {
            MLINK_FUNC(void, 0x031B3E44, Minecraft *, bool)(this, value);
        }

        void *fixerUpper;
        MultiPlayerGameMode *multiPlayerGameMode;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        Timer *timer;
        uint32_t field_0x24;
        uint32_t field_0x28;
        uint32_t field_0x2C;
        LevelRenderer *levelRenderer;
        mboost::shared_ptr<MultiplayerLocalPlayer> player;
        Level *level;
        int playerCount;
        mboost::shared_ptr<mc::LocalPlayer> localPlayers[4];
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
        mboost::shared_ptr<Entity> cameraEntity;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        mstd::basic_string<wchar_t> *nid;
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
        Textures *textures;
        Font *font;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        GameRenderer *gameRenderer;
        EntityRenderDispatcher *entityRenderDispatcher;
        uint32_t field_0x11C;
        ItemInHandRenderer *itemInHandRenderer;
        uint32_t field_0x124;
        uint32_t field_0x128;
        uint32_t field_0x12C;
        uint32_t field_0x130;
        uint32_t field_0x134;
        uint32_t field_0x138;
        uint32_t field_0x13C;
        uint32_t field_0x140;
        Gui *gui;
        uint32_t field_0x148;
        HitResult *lookAtRay;
        Options *options;
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
        void *directoryLevelStorage;
        void *statsCounters[4];
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
        void *minigameDef;
        ClientMasterGameMode *clientMasterGameMode;
        uint32_t field_0x258;
        uint32_t field_0x25C;
        uint32_t field_0x260;
        uint32_t field_0x264;
    };
    MC_CHECK_SIZE(Minecraft, 0x268);
} // namespace mc
