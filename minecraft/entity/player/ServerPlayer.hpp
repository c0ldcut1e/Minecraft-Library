#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "Player.hpp"
#include "block/entity/SignBlockEntity.hpp"
#include "container/Container.hpp"
#include "entity/DamageSource.hpp"
#include "entity/Entity.hpp"
#include "entity/effect/MobEffectInstance.hpp"
#include "internal/basic_string.hpp"
#include "internal/shared_ptr.hpp"
#include "utils/InteractionHand.hpp"
#include "world/Level.hpp"
#include "world/ServerLevel.hpp"
#include "world/gamemode/ServerPlayerGameMode.hpp"

namespace mc
{
    class GameType;

    class MinecraftServer;
    class ServerGamePacketListenerImpl;
    class ServerPlayerGameMode;

    class ServerPlayer : public Player
    {
    public:
        ServerPlayer(MinecraftServer *server, ServerLevel *level, const mstd::basic_string<wchar_t> &param_3, ServerPlayerGameMode *gamemode)
        {
            MLINK_FUNC(void, 0x03299F8C, ServerPlayer *, MinecraftServer *, ServerLevel *, const mstd::basic_string<wchar_t> &,
                       ServerPlayerGameMode *)(this, server, level, param_3, gamemode);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0332FC30)();
        }

        void addEffect(struct MobEffectInstance *effect, const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032C6FD8, ServerPlayer *, struct MobEffectInstance *, const mboost::shared_ptr<Entity> &)(this, effect, entity);
        }

        void attack(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032D8A3C, ServerPlayer *, const mboost::shared_ptr<Entity> &)(this, entity);
        }

        void closeContainer()
        {
            MLINK_FUNC(void, 0x032D0800, ServerPlayer *)(this);
        }

        void die(const DamageSource *source)
        {
            MLINK_FUNC(void, 0x032C3ABC, ServerPlayer *, const DamageSource *)(this, source);
        }

        void disconnect()
        {
            MLINK_FUNC(void, 0x03286798, ServerPlayer *)(this);
        }

        void doCloseContainer()
        {
            MLINK_FUNC(void, 0x032D053C, ServerPlayer *)(this);
        }

        GameType *getGameType()
        {
            return MLINK_FUNC(GameType *, 0x032D8F8C, ServerPlayer *)(this);
        }

        void giveExperienceLevels(int level)
        {
            MLINK_FUNC(void, 0x032C2730, ServerPlayer *, int)(this, level);
        }

        void initMenu()
        {
            MLINK_FUNC(void, 0x03294B38, ServerPlayer *)(this);
        }

        bool isChangingDimension()
        {
            return MLINK_FUNC(bool, 0x032CA7F4, ServerPlayer *)(this);
        }

        bool isCreative()
        {
            return MLINK_FUNC(bool, 0x032D8060, ServerPlayer *)(this);
        }

        bool isSpectator()
        {
            return MLINK_FUNC(bool, 0x032D8000, ServerPlayer *)(this);
        }

        void onUpdateAbilities()
        {
            MLINK_FUNC(void, 0x032D7ABC, ServerPlayer *)(this);
        }

        void openContainer(const mboost::shared_ptr<struct Container> &container)
        {
            MLINK_FUNC(void, 0x032CC440, ServerPlayer *, const mboost::shared_ptr<struct Container> &)(this, container);
        }

        void openTextEdit(const mboost::shared_ptr<struct SignBlockEntity> &entity)
        {
            MLINK_FUNC(void, 0x032CACD0, ServerPlayer *, const mboost::shared_ptr<struct SignBlockEntity> &)(this, entity);
        }

        void refreshContainer(struct AbstractContainerMenu *container)
        {
            MLINK_FUNC(void, 0x032A2264, ServerPlayer *, struct AbstractContainerMenu *)(this, container);
        }

        void setGameMode(const struct GameType *_type)
        {
            MLINK_FUNC(void, 0x032D7F3C, ServerPlayer *, const struct GameType *)(this, _type);
        }

        void startRiding(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x032CA21C, ServerPlayer *, const mboost::shared_ptr<Entity> &)(this, entity);
        }

        void swing(InteractionHand::EInteractionHand hand)
        {
            MLINK_FUNC(void, 0x032D8B5C, ServerPlayer *, InteractionHand::EInteractionHand)(this, hand);
        }

        void teleportTo(double xPos, double yPos, double zPos)
        {
            MLINK_FUNC(void, 0x032D6B74, ServerPlayer *, double, double, double)(this, xPos, yPos, zPos);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x032C3114, ServerPlayer *)(this);
        }

        ServerPlayerGameMode *gamemode;
        ServerGamePacketListenerImpl *connection;
        MinecraftServer *server;
        uint32_t field_0x874;
        uint32_t field_0x878;
        uint32_t field_0x87C;
        uint32_t field_0x880;
        uint32_t field_0x884;
        uint32_t field_0x888;
        uint32_t field_0x88C;
        uint32_t field_0x890;
        uint32_t field_0x894;
        uint32_t field_0x898;
        uint32_t field_0x89C;
        uint32_t field_0x8A0;
        uint32_t field_0x8A4;
        uint32_t field_0x8A8;
        uint32_t field_0x8AC;
        uint32_t field_0x8B0;
        uint32_t field_0x8B4;
        uint32_t field_0x8B8;
        uint32_t field_0x8BC;
        uint32_t field_0x8C0;
        uint32_t field_0x8C4;
        uint32_t field_0x8C8;
        uint32_t field_0x8CC;
        uint32_t field_0x8D0;
        uint32_t field_0x8D4;
        uint32_t field_0x8D8;
        uint32_t field_0x8DC;
        uint32_t field_0x8E0;
        uint32_t field_0x8E4;
        uint32_t field_0x8E8;
        uint32_t field_0x8EC;
        uint32_t field_0x8F0;
        uint32_t field_0x8F4;
        uint32_t field_0x8F8;
        uint32_t field_0x8FC;
        uint32_t field_0x900;
        uint32_t field_0x904;
        uint32_t field_0x908;
        uint32_t field_0x90C;
        uint32_t field_0x910;
        uint32_t field_0x914;
        uint32_t field_0x918;
        uint32_t field_0x91C;
        uint32_t field_0x920;
        uint32_t field_0x924;
        uint32_t field_0x928;
        uint32_t field_0x92C;
        uint32_t field_0x930;
        uint32_t field_0x934;
        uint32_t field_0x938;
        uint32_t field_0x93C;
        uint32_t field_0x940;
        uint32_t field_0x944;
    };
    MC_CHECK_SIZE(ServerPlayer, 0x948);
} // namespace mc
