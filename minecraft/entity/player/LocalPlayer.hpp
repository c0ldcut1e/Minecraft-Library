#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "AbstractClientPlayer.hpp"
#include "MinecraftLib.hpp"
#include "block/entity/SignBlockEntity.hpp"
#include "client/app/ConsoleUIController.hpp"
#include "client/player/Input.hpp"
#include "container/Container.hpp"
#include "entity/ItemEntity.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "sound/SoundEvent.hpp"
#include "utils/GameType.hpp"
#include "utils/InteractionHand.hpp"
#include "world/level/MultiPlayerLevel.hpp"

namespace mc
{
    class ClientPacketListener;

    class LocalPlayer : public AbstractClientPlayer
    {
    public:
        mboost::shared_ptr<ItemEntity> drop(bool entireStack)
        {
            mboost::shared_ptr<ItemEntity> result;
            MLINK_FUNC(void, 0x031E7534, LocalPlayer *, mboost::shared_ptr<ItemEntity> &, bool)(this, result, entireStack);
            return result;
        }

        void getCarriedItem(mboost::shared_ptr<ItemInstance> &item)
        {
            MLINK_FUNC(void, 0x031F3AC4, LocalPlayer *, mboost::shared_ptr<ItemInstance> &)(this, item);
        }

        float getDamageTaken()
        {
            return MLINK_FUNC(float, 0x031F3A50, LocalPlayer *)(this);
        }

        GameType *GetGameType()
        {
            return MLINK_FUNC(GameType *, 0x031F4114, LocalPlayer *)(this);
        }

        int GetThirdPersonView(bool param_1)
        {
            return MLINK_FUNC(int, 0x031F21EC, LocalPlayer *, bool)(this, param_1);
        }

        bool handleMouseClick(int button)
        {
            return MLINK_FUNC(bool, 0x0319AF68, LocalPlayer *, int)(this, button);
        }

        void handleMouseDown(int button, bool down)
        {
            MLINK_FUNC(void, 0x031A0740, LocalPlayer *, int, bool)(this, button, down);
        }

        bool isInWall()
        {
            return MLINK_FUNC(bool, 0x031E50F8, LocalPlayer *)(this);
        }

        bool isSneaking()
        {
            return MLINK_FUNC(bool, 0x031EC5B4, LocalPlayer *)(this);
        }

        void openContainer(const mboost::shared_ptr<Container> &container)
        {
            MLINK_FUNC(void, 0x031EAAC8, LocalPlayer *, const mboost::shared_ptr<Container> &)(this, container);
        }

        void openTextEdit(const mboost::shared_ptr<SignBlockEntity> &sign)
        {
            MLINK_FUNC(void, 0x031EA7AC, LocalPlayer *, mboost::shared_ptr<SignBlockEntity>)(this, sign);
        }

        bool pickBlock(bool checkOnly)
        {
            return MLINK_FUNC(bool, 0x03198B70, LocalPlayer *, bool)(this, checkOnly);
        }

        void playSound(const SoundEvent *sound, float volume = 1.0F, float pitch = 1.0F)
        {
            MLINK_FUNC(void, 0x031EA16C, float, float, LocalPlayer *, const SoundEvent *)(volume, pitch, this, sound);
        }

        void respawn()
        {
            MLINK_FUNC(void, 0x031E8128, LocalPlayer *)(this);
        }

        void setAndBroadcastCustomCape(uint32_t capeId)
        {
            MLINK_FUNC(void, 0x031F3A40, LocalPlayer *, uint32_t)(this, capeId);
        }

        void setAndBroadcastCustomSkin(uint32_t skinId)
        {
            MLINK_FUNC(void, 0x031F3A30, LocalPlayer *, uint32_t)(this, skinId);
        }

        void SetSessionTimerStart()
        {
            MLINK_FUNC(void, 0x0318ABB4, LocalPlayer *)(this);
        }

        void setSprinting(bool value)
        {
            MLINK_FUNC(void, 0x031EA0D4, LocalPlayer *, bool)(this, value);
        }

        void SetThirdPersonView(int view)
        {
            MLINK_FUNC(void, 0x031F22A4, LocalPlayer *, int)(this, view);
        }

        void startUsingItem(InteractionHand::EInteractionHand hand)
        {
            (void) hand;
            MLINK_FUNC(void, 0x031EA23C, LocalPlayer *)(this);
        }

        void stopUsingItem()
        {
            MLINK_FUNC(void, 0x031EA444, LocalPlayer *)(this);
        }

        void swing(mc::InteractionHand::EInteractionHand hand)
        {
            MLINK_FUNC(void, 0x031E7D74, LocalPlayer *, mc::InteractionHand::EInteractionHand)(this, hand);
        }

        uint32_t field_0x868;
        uint32_t field_0x86C;
        uint32_t field_0x870;
        uint32_t field_0x874;
        ClientPacketListener *connection;
        int permissionLevel;
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
        Input *input;
        ConsoleUIController *uiController;
        uint32_t field_0x8B8;
        uint32_t field_0x8BC;
        uint32_t field_0x8C0;
        uint32_t field_0x8C4;
        uint32_t isSprinting;
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
        bool isHandsBusy;
        bool isAutoJumpEnabled;
        uint8_t field_0x902;
        uint8_t field_0x903;
        uint32_t field_0x904;
        int screenSection;
        uint32_t field_0x90C;
        uint64_t buttonsPressed;
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
        uint32_t field_0x948;
        uint32_t field_0x94C;
        uint32_t field_0x950;
        uint32_t field_0x954;
        uint32_t field_0x958;
        uint32_t field_0x95C;
        uint32_t field_0x960;
        uint32_t field_0x964;
        uint32_t field_0x968;
        uint32_t field_0x96C;
        uint32_t field_0x970;
        uint32_t field_0x974;
        uint32_t field_0x978;
        uint32_t field_0x97C;
        uint32_t field_0x980;
        uint32_t field_0x984;
        uint32_t field_0x988;
        uint32_t field_0x98C;
        uint32_t field_0x990;
        uint32_t field_0x994;
        uint32_t field_0x998;
        uint32_t field_0x99C;
        uint32_t field_0x9A0;
        uint32_t field_0x9A4;
        uint32_t field_0x9A8;
        uint32_t field_0x9AC;
        uint32_t field_0x9B0;
        uint32_t field_0x9B4;
        uint32_t field_0x9B8;
        uint8_t field_0x9BC;
        bool hostOption;
        uint8_t field_0x9BE;
        uint8_t field_0x9BF;
        uint32_t field_0x9C0;
        uint32_t field_0x9C4;
        uint32_t field_0x9C8;
        uint32_t field_0x9CC;
        uint32_t field_0x9D0;
        uint32_t field_0x9D4;
        uint32_t field_0x9D8;
        uint32_t field_0x9DC;
        uint32_t field_0x9E0;
        uint32_t field_0x9E4;
        uint32_t field_0x9E8;
        uint32_t field_0x9EC;
        uint32_t field_0x9F0;
        uint32_t field_0x9F4;
        uint32_t field_0x9F8;
        uint32_t field_0x9FC;
        uint32_t field_0xA00;
        uint32_t field_0xA04;
        uint32_t field_0xA08;
        uint32_t field_0xA0C;
    };
    MC_CHECK_SIZE(LocalPlayer, 0xA10);
}; // namespace mc
