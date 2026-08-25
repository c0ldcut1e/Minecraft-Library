#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "client/resource/ArrayWithLength.hpp"
#include "internal/enable_shared_from_this.hpp"
#include "network/packet/Packet.hpp"
#include "utils/ParticleType.hpp"

namespace mc
{
    class ClientboundLevelParticlesPacket : public Packet, public mboost::enable_shared_from_this<ClientboundLevelParticlesPacket>
    {
    public:
        ClientboundLevelParticlesPacket(const ParticleType *_type, bool _overrideLimiter, float xPos, float yPos, float zPos, float _xDist,
                                        float _yDist, float _zDist, float _maxSpeed, int _count, ArrayWithLength<int> _params)
        {
            MLINK_FUNC(void, 0x021E2740, ClientboundLevelParticlesPacket *, const ParticleType *, bool, float, float, float, float, float, float,
                       float, int,
                       ArrayWithLength<int>)(this, _type, _overrideLimiter, xPos, yPos, zPos, _xDist, _yDist, _zDist, _maxSpeed, _count, _params);
        }

        ClientboundLevelParticlesPacket(const ParticleType *_type, bool _overrideLimiter, float xPos, float yPos, float zPos, float _xDist,
                                        float _yDist, float _zDist, float _maxSpeed, int _count, ArrayWithLength<int> _params, float _xAux,
                                        float _yAux, float _zAux)
        {
            MLINK_FUNC(void, 0x021E2908, ClientboundLevelParticlesPacket *, const ParticleType *, bool, float, float, float, float, float, float,
                       float, int, ArrayWithLength<int>, float, float, float)(this, _type, _overrideLimiter, xPos, yPos, zPos, _xDist, _yDist, _zDist,
                                                                              _maxSpeed, _count, _params, _xAux, _yAux, _zAux);
        }

        void Init(const ParticleType *typeValue, bool overrideLimiterValue, float xValue, float yValue, float zValue, float xDistValue,
                  float yDistValue, float zDistValue, float maxSpeedValue, int countValue, ArrayWithLength<int> paramsValue, bool hasAuxValue,
                  float xAuxValue, float yAuxValue, float zAuxValue)
        {
            MLINK_FUNC(void, 0x021E252C, ClientboundLevelParticlesPacket *, const ParticleType *, bool, float, float, float, float, float, float,
                       float, int, ArrayWithLength<int>, bool, float, float, float)(this, typeValue, overrideLimiterValue, xValue, yValue, zValue,
                                                                                    xDistValue, yDistValue, zDistValue, maxSpeedValue, countValue,
                                                                                    paramsValue, hasAuxValue, xAuxValue, yAuxValue, zAuxValue);
        }

        float getX()
        {
            return MLINK_FUNC(float, 0x021E3350, ClientboundLevelParticlesPacket *)(this);
        }

        float getY()
        {
            return MLINK_FUNC(float, 0x021E3358, ClientboundLevelParticlesPacket *)(this);
        }

        float getZ()
        {
            return MLINK_FUNC(float, 0x021E3360, ClientboundLevelParticlesPacket *)(this);
        }

        float getXDist()
        {
            return MLINK_FUNC(float, 0x021E3368, ClientboundLevelParticlesPacket *)(this);
        }

        float getYDist()
        {
            return MLINK_FUNC(float, 0x021E3370, ClientboundLevelParticlesPacket *)(this);
        }

        float getZDist()
        {
            return MLINK_FUNC(float, 0x021E3378, ClientboundLevelParticlesPacket *)(this);
        }

        float getMaxSpeed()
        {
            return MLINK_FUNC(float, 0x021E3380, ClientboundLevelParticlesPacket *)(this);
        }

        int getCount()
        {
            return MLINK_FUNC(int, 0x021E3388, ClientboundLevelParticlesPacket *)(this);
        }

        const ParticleType *getType()
        {
            return MLINK_FUNC(const ParticleType *, 0x021E3390, ClientboundLevelParticlesPacket *)(this);
        }

        bool isOverrideLimiter()
        {
            return MLINK_FUNC(bool, 0x021E3398, ClientboundLevelParticlesPacket *)(this);
        }

        ArrayWithLength<int> getParams()
        {
            return MLINK_FUNC(ArrayWithLength<int>, 0x021E33A0, ClientboundLevelParticlesPacket *)(this);
        }

        float getXAux()
        {
            return MLINK_FUNC(float, 0x021E33C4, ClientboundLevelParticlesPacket *)(this);
        }

        float getYAux()
        {
            return MLINK_FUNC(float, 0x021E33CC, ClientboundLevelParticlesPacket *)(this);
        }

        float getZAux()
        {
            return MLINK_FUNC(float, 0x021E33D4, ClientboundLevelParticlesPacket *)(this);
        }

        bool getHasAux()
        {
            return MLINK_FUNC(bool, 0x021E33DC, ClientboundLevelParticlesPacket *)(this);
        }

        const ParticleType *type;
        float x;
        float y;
        float z;
        float xDist;
        float yDist;
        float zDist;
        float maxSpeed;
        int count;
        bool overrideLimiter;
        uint8_t field_0x3D;
        uint8_t field_0x3E;
        uint8_t field_0x3F;
        ArrayWithLength<int> params;
        bool hasAux;
        uint8_t field_0x49;
        uint8_t field_0x4A;
        uint8_t field_0x4B;
        float xAux;
        float yAux;
        float zAux;
    };
    MC_CHECK_SIZE(ClientboundLevelParticlesPacket, 0x58);
} // namespace mc
