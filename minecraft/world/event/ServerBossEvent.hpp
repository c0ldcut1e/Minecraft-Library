#pragma once

#include "mlink/MLink.hpp"

#include "BossEvent.hpp"
#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "internal/vector.hpp"

namespace mc
{
    class ServerPlayer;

    class ServerBossEvent : public BossEvent
    {
    public:
        ServerBossEvent(int nameId, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0331BBA8, ServerBossEvent *, int, const mstd::basic_string<wchar_t> &, unsigned int, unsigned int)(this, nameId, name,
                                                                                                                                  0, 0);
        }
        ~ServerBossEvent()
        {
            MLINK_FUNC(void, 0x03330910, ServerBossEvent *)(this);
        }

        void addPlayer(const mboost::shared_ptr<ServerPlayer> &player, int unk1 = 0)
        {
            MLINK_FUNC(void, 0x0331D1F0, ServerBossEvent *, mboost::shared_ptr<ServerPlayer>, int)(this, player, unk1);
        }

        void *getPartyPlayers()
        {
            return MLINK_FUNC(void *, 0x0331EEC4, ServerBossEvent *)(this);
        }

        mstd::vector<mboost::shared_ptr<ServerPlayer>> getPlayers()
        {
            return MLINK_FUNC(mstd::vector<mboost::shared_ptr<ServerPlayer>>, 0x0331EE0C, ServerBossEvent *)(this);
        }

        void removeAllPlayers()
        {
            MLINK_FUNC(void, 0x0331E64C, ServerBossEvent *)(this);
        }

        void removePlayer(const mboost::shared_ptr<ServerPlayer> &player)
        {
            MLINK_FUNC(void, 0x0331E02C, ServerBossEvent *, mboost::shared_ptr<ServerPlayer>)(this, player);
        }

        void setCreateWorldFog(bool createWorldFog)
        {
            MLINK_FUNC(void, 0x0331C504, ServerBossEvent *, bool)(this, createWorldFog);
        }

        void setDarkenScreen(bool darkenScreen)
        {
            MLINK_FUNC(void, 0x0331C43C, ServerBossEvent *, bool)(this, darkenScreen);
        }

        void setName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0331C568, ServerBossEvent *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setPercent(float percent)
        {
            MLINK_FUNC(void, 0x0331C31C, ServerBossEvent *, float)(this, percent);
        }

        void setPlayBossMusic(bool playBossMusic)
        {
            MLINK_FUNC(void, 0x0331C4A0, ServerBossEvent *, bool)(this, playBossMusic);
        }

        void setVisible(bool visible)
        {
            MLINK_FUNC(void, 0x0331E814, ServerBossEvent *, bool)(this, visible);
        }

        unsigned int field_0x58;
        unsigned int field_0x5C;
        unsigned int field_0x60;
        bool visible;
        unsigned char field_0x65;
        unsigned char field_0x66;
        unsigned char field_0x67;
    };
    MC_CHECK_SIZE(ServerBossEvent, 0x68);
} // namespace mc
