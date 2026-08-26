#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"
#include "client/Minecraft.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "client/resource/ElementStorage.hpp"
#include "entity/Entity.hpp"
#include "entity/LivingEntity.hpp"
#include "entity/player/Player.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "utils/SmoothFloat.hpp"
#include "utils/Vec3.hpp"
#include "world/ItemInHandRenderer.hpp"
#include "world/LevelRenderer.hpp"
#include "world/level/Level.hpp"

namespace mc
{
    class Minecraft;

    class GameRenderer
    {
    public:
        struct PositionStruct
        {
            float x;
            float y;
            float z;
        };

        struct ElementStorageWithTick
        {
            int deleteTicks;
            ElementStorage *storage;
        };

        GameRenderer(Minecraft *minecraft, MC_UNDEFINED_TYPE(void *, ResourceManager *) resourceManager)
        {
            MLINK_FUNC(void, 0x030FB90C, GameRenderer *, Minecraft *, MC_UNDEFINED_TYPE(void *, ResourceManager *))(this, minecraft, resourceManager);
        }

        ~GameRenderer()
        {
            MLINK_FUNC(void, 0x030FC6A8, GameRenderer *)(this);
        }

        static void AddForDelete(MC_UNDEFINED_TYPE(void *, SparseLightStorage *) storage)
        {
            MLINK_FUNC(void, 0x0311578C, MC_UNDEFINED_TYPE(void *, SparseLightStorage *))(storage);
        }

        static void AddForDelete(LevelChunk *chunk)
        {
            MLINK_FUNC(void, 0x03115D80, LevelChunk *)(chunk);
        }

        static void AddForDelete(ElementStorage *storage)
        {
            MLINK_FUNC(void, 0x03116418, ElementStorage *)(storage);
        }

        static void EnterDeleteThreadCS()
        {
            MLINK_FUNC(void, 0x03116618)();
        }

        static void FinishedReassigning()
        {
            MLINK_FUNC(void, 0x03116480)();
        }

        static int fjGetFpsCap(int fpsCap)
        {
            return MLINK_FUNC(int, 0x03105690, int)(fpsCap);
        }

        static void LeaveDeleteThreadCS()
        {
            MLINK_FUNC(void, 0x03116630)();
        }

        static int runUpdate(void *data)
        {
            return MLINK_FUNC(int, 0x030FB454, void *)(data);
        }

        static void UpdateElementStorageDeleteTicks()
        {
            MLINK_FUNC(void, 0x030FC98C)();
        }

        void bobHurt(float partialTicks)
        {
            MLINK_FUNC(void, 0x0310048C, GameRenderer *, float)(this, partialTicks);
        }

        void bobView(float partialTicks)
        {
            MLINK_FUNC(void, 0x03100A9C, GameRenderer *, float)(this, partialTicks);
        }

        void checkEntityPostEffect(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x030FC870, GameRenderer *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void cycleEffect()
        {
            MLINK_FUNC(void, 0x030FC874, GameRenderer *)(this);
        }

        void DisableUpdateThread(int threadId)
        {
            MLINK_FUNC(void, 0x0311655C, GameRenderer *, int)(this, threadId);
        }

        void displayItemActivation(const mboost::not_null_ptr<ItemInstance> &item, int playerIndex)
        {
            MLINK_FUNC(void, 0x03116648, GameRenderer *, mboost::not_null_ptr<ItemInstance>, int)(this, item, playerIndex);
        }

        void EnableUpdateThread(int threadId)
        {
            MLINK_FUNC(void, 0x03116498, GameRenderer *, int)(this, threadId);
        }

        void *getBuffer(float red, float green, float blue, float alpha)
        {
            return MLINK_FUNC(void *, 0x031080EC, GameRenderer *, float, float, float, float)(this, red, green, blue, alpha);
        }

        void getCamera(mboost::shared_ptr<Entity> &camera)
        {
            MLINK_FUNC(void, 0x030FCCD4, GameRenderer *, mboost::shared_ptr<Entity> &)(this, camera);
        }

        int getCameraThirdPerson()
        {
            return MLINK_FUNC(int, 0x0310107C, GameRenderer *)(this);
        }

        float getCameraXRot(float partialTicks)
        {
            return MLINK_FUNC(float, 0x031012AC, GameRenderer *, float)(this, partialTicks);
        }

        float getCameraYRot(float partialTicks)
        {
            return MLINK_FUNC(float, 0x031011A0, GameRenderer *, float)(this, partialTicks);
        }

        void *getFogOffsets()
        {
            return MLINK_FUNC(void *, 0x03105750, GameRenderer *)(this);
        }

        float getFov(float partialTicks, bool useFovSetting)
        {
            return MLINK_FUNC(float, 0x031000C8, GameRenderer *, float, bool)(this, partialTicks, useFovSetting);
        }

        void getFovAndAspect(float &fov, float &aspect, float partialTicks, bool itemInHand)
        {
            MLINK_FUNC(void, 0x03102E68, GameRenderer *, float &, float &, float, bool)(this, fov, aspect, partialTicks, itemInHand);
        }

        float GetFovVal()
        {
            return MLINK_FUNC(float, 0x030FC984, GameRenderer *)(this);
        }

        int getLightTexture(int playerIndex, Level *level)
        {
            return MLINK_FUNC(int, 0x030FB3E4, GameRenderer *, int, Level *)(this, playerIndex, level);
        }

        float getNightVisionScale(const mboost::shared_ptr<LivingEntity> &entity, float partialTicks)
        {
            return MLINK_FUNC(float, 0x03104618, GameRenderer *, mboost::shared_ptr<LivingEntity>, float)(this, entity, partialTicks);
        }

        void getTargetFogColor(const BlockPos &pos, float &red, float &green, float &blue)
        {
            MLINK_FUNC(void, 0x03105A58, GameRenderer *, const BlockPos &, float &, float &, float &)(this, pos, red, green, blue);
        }

        float getTargetFogDistance(const BlockPos &pos)
        {
            return MLINK_FUNC(float, 0x031057C4, GameRenderer *, const BlockPos &)(this, pos);
        }

        int getTickCount()
        {
            return MLINK_FUNC(int, 0x030FC80C, GameRenderer *)(this);
        }

        float getUnderWaterVisionScale(const mboost::shared_ptr<Player> &player, float partialTicks)
        {
            return MLINK_FUNC(float, 0x03104814, GameRenderer *, const mboost::shared_ptr<Player> &, float)(this, player, partialTicks);
        }

        float modifyFogDistance(const BlockPos &pos, float cameraY, float distance)
        {
            return MLINK_FUNC(float, 0x03105DA8, GameRenderer *, const BlockPos &, float, float)(this, pos, cameraY, distance);
        }

        void moveCameraToPlayer(float partialTicks)
        {
            MLINK_FUNC(void, 0x031013B8, GameRenderer *, float)(this, partialTicks);
        }

        void onResourceManagerReload(MC_UNDEFINED_TYPE(void *, ResourceManager *) resourceManager)
        {
            MLINK_FUNC(void, 0x030FC878, GameRenderer *, MC_UNDEFINED_TYPE(void *, ResourceManager *))(this, resourceManager);
        }

        void pick(float partialTicks)
        {
            MLINK_FUNC(void, 0x030FE784, GameRenderer *, float)(this, partialTicks);
        }

        bool postEffectActive()
        {
            return MLINK_FUNC(bool, 0x030FC814, GameRenderer *)(this);
        }

        void prepareAndRenderClouds(LevelRenderer *levelRenderer, float partialTicks, int eye, double camX, double camY, double camZ)
        {
            MLINK_FUNC(void, 0x03108C60, GameRenderer *, LevelRenderer *, float, int, double, double, double)(this, levelRenderer, partialTicks, eye,
                                                                                                              camX, camY, camZ);
        }

        void render(float partialTicks, long long frameTime, bool updateWorld)
        {
            MLINK_FUNC(void, 0x03114504, GameRenderer *, float, long long, bool)(this, partialTicks, frameTime, updateWorld);
        }

        void renderEyePass(int eye, float partialTicks, long long frameTime, bool drawGui)
        {
            MLINK_FUNC(void, 0x0310EDD0, GameRenderer *, int, float, long long, bool)(this, eye, partialTicks, frameTime, drawGui);
        }

        void renderGhost(float partialTicks, const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x0310B494, GameRenderer *, float, mboost::shared_ptr<Entity>)(this, partialTicks, entity);
        }

        void renderGhostPath(float partialTicks, const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x0310CEF8, GameRenderer *, float, mboost::shared_ptr<Entity>)(this, partialTicks, entity);
        }

        void renderItemActivationAnimation(int eye, int playerIndex, float partialTicks)
        {
            MLINK_FUNC(void, 0x03110E60, GameRenderer *, int, int, float)(this, eye, playerIndex, partialTicks);
        }

        void renderItemInHand(float partialTicks, int eye)
        {
            MLINK_FUNC(void, 0x031039E8, GameRenderer *, float, int)(this, partialTicks, eye);
        }

        void renderLevel(float partialTicks, long long frameTime)
        {
            MLINK_FUNC(void, 0x03110B78, GameRenderer *, float, long long)(this, partialTicks, frameTime);
        }

        void renderSnowAndRain(float partialTicks)
        {
            MLINK_FUNC(void, 0x0310D8E0, GameRenderer *, float)(this, partialTicks);
        }

        void renderThermal(MC_UNDEFINED_TYPE(void *, Culler *) culler, float partialTicks)
        {
            MLINK_FUNC(void, 0x03109050, GameRenderer *, MC_UNDEFINED_TYPE(void *, Culler *), float)(this, culler, partialTicks);
        }

        void resetData()
        {
            MLINK_FUNC(void, 0x03114E04, GameRenderer *)(this);
        }

        void resetFogColor(bool blackFog)
        {
            MLINK_FUNC(void, 0x031081F8, GameRenderer *, bool)(this, blackFog);
        }

        void setupCamera(float partialTicks, int eye)
        {
            MLINK_FUNC(void, 0x031030D4, GameRenderer *, float, int)(this, partialTicks, eye);
        }

        void setupClearColor(float partialTicks)
        {
            MLINK_FUNC(void, 0x03105F30, GameRenderer *, float)(this, partialTicks);
        }

        void setupFog(int fogMode, float partialTicks)
        {
            MLINK_FUNC(void, 0x031082EC, GameRenderer *, int, float)(this, fogMode, partialTicks);
        }

        void setupGuiScreen(int height)
        {
            MLINK_FUNC(void, 0x03110D7C, GameRenderer *, int)(this, height);
        }

        bool shouldRenderBlockOutline()
        {
            return MLINK_FUNC(bool, 0x03114818, GameRenderer *)(this);
        }

        void shutdownEffect()
        {
            MLINK_FUNC(void, 0x030FC81C, GameRenderer *)(this);
        }

        void tick(bool tickWorld)
        {
            MLINK_FUNC(void, 0x030FD600, GameRenderer *, bool)(this, tickWorld);
        }

        void tickFov()
        {
            MLINK_FUNC(void, 0x030FCA14, GameRenderer *)(this);
        }

        void tickLightTexture()
        {
            MLINK_FUNC(void, 0x030FCBE4, GameRenderer *)(this);
        }

        void tickRain()
        {
            MLINK_FUNC(void, 0x030FCD20, GameRenderer *)(this);
        }

        void turnOffLightLayer(double value)
        {
            MLINK_FUNC(void, 0x031039CC, GameRenderer *, double)(this, value);
        }

        void turnOnLightLayer(double value)
        {
            MLINK_FUNC(void, 0x031038A8, GameRenderer *, double)(this, value);
        }

        void updateLightTexture(float partialTicks)
        {
            MLINK_FUNC(void, 0x03104BF0, GameRenderer *, float)(this, partialTicks);
        }

        MC_CHECK_SIZE(PositionStruct, 0xC);
        MC_CHECK_SIZE(ElementStorageWithTick, 0x8);
        MC_UNDEFINED_TYPE(void *, MapRenderer *) getMapRenderer()
        {
            return MLINK_FUNC(MC_UNDEFINED_TYPE(void *, MapRenderer *), 0x031151E4, GameRenderer *)(this);
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
        Minecraft *minecraft;
        MC_UNDEFINED_TYPE(void *, ResourceManager *) resourceManager;
        uint32_t field_0x38;
        uint32_t field_0x3C;
        uint32_t field_0x40;
        uint32_t field_0x44;
        uint32_t field_0x48;
        uint32_t field_0x4C;
        float farPlaneDistance;
        ItemInHandRenderer *itemInHandRenderer;
        MC_UNDEFINED_TYPE(void *, MapRenderer *) mapRenderer;
        int tickCount;
        mboost::shared_ptr<Entity> field_0x60;
        SmoothFloat smoothFloats[6];
        float thirdPersonDistance;
        float oldThirdPersonDistance;
        uint32_t field_0xB8;
        uint32_t field_0xBC;
        uint32_t field_0xC0;
        uint32_t field_0xC4;
        uint32_t field_0xC8;
        uint32_t field_0xCC;
        uint32_t field_0xD0;
        uint32_t field_0xD4;
        uint32_t field_0xD8;
        Vec3 *field_0xDC;
        float fovModifiers[4];
        float oldFovModifiers[4];
        float field_0x100[4];
        float fov;
        float field_0x114;
        float field_0x118;
        bool inCloud;
        bool renderHand;
        bool field_0x11E;
        uint8_t field_0x11F;
        uint32_t field_0x120;
        uint32_t field_0x124;
        uint32_t lightTextureIds[4];
        ArrayWithLength<int> lightTexturePixels[4];
        float lightTextureFlicker;
        float lightTextureFlickerO;
        int rainSoundTime;
        float skyX[1024];
        float skyZ[1024];
        void *fogColorBuffer;
        float fogRed;
        float fogGreen;
        float fogBlue;
        float currentTargetFogRed[4];
        float currentTargetFogGreen[4];
        float currentTargetFogBlue[4];
        float currentTargetFogDistance[4];
        float targetFogRed[4];
        float targetFogGreen[4];
        float targetFogBlue[4];
        float targetFogDistance[4];
        float field_0x21F4;
        float field_0x21F8;
        bool field_0x21FC;
        uint8_t field_0x21FD;
        uint8_t field_0x21FE;
        uint8_t field_0x21FF;
        uint32_t field_0x2200;
        uint32_t field_0x2204;
        uint32_t field_0x2208;
        uint32_t field_0x220C;
        uint32_t field_0x2210;
        uint32_t field_0x2214;
        uint32_t field_0x2218;
        uint32_t field_0x221C;
        uint32_t field_0x2220;
        uint32_t field_0x2224;
        uint32_t field_0x2228;
        uint32_t field_0x222C;
        uint32_t field_0x2230;
        uint32_t field_0x2234;
        uint32_t field_0x2238;
        uint32_t field_0x223C;
        double fogBaseY;
        int specialCameraOrientation;
        bool hasSpecialCameraTransform;
        uint8_t field_0x224D;
        uint8_t field_0x224E;
        uint8_t field_0x224F;
        float projectionScale;
        float field_0x2254;
        float field_0x2258;
        mboost::not_null_ptr<ItemInstance> itemActivationItems[4];
        int itemActivationTimers[4];
        float itemActivationXOffsets[4];
        float itemActivationYOffsets[4];
        MC_UNDEFINED_TYPE(void *, PostChain *) postEffect;
        int postEffectIndex;
        bool field_0x22B4;
        uint8_t field_0x22B5;
        uint8_t field_0x22B6;
        uint8_t field_0x22B7;
        int field_0x22B8;
        uint32_t field_0x22BC;
        uint32_t lastRenderNanos[2];
        bool lightTextureDirty;
        uint8_t field_0x22C9;
        uint8_t field_0x22CA;
        uint8_t field_0x22CB;
        void *field_0x22CC;
        void *field_0x22D0;
        void *field_0x22D4;
        int field_0x22D8;
        uint32_t field_0x22DC;
    };
    MC_CHECK_SIZE(GameRenderer, 0x22E0);
} // namespace mc
