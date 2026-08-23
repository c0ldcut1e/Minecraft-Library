#pragma once

#include "mlink/MLink.hpp"

#include "client/resource/ArrayWithLength.hpp"
#include "network/packet/Packet.hpp"
#include "world/ServerLevel.hpp"

namespace mc
{
    class ClientboundLevelParticlesPacket : public Packet
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

        // mboost::shared_ptr<ClientboundLevelParticlesPacket> thisShared;
        // const ParticleType *type;
        // float x;
        // float y;
        // float z;
        // float xDist;
        // float yDist;
        // float zDist;
        // float maxSpeed;
        // int count;
        // bool overrideLimiter;
        // uint32_t field_0x3C;
        // int *params;
        // int paramsLength;
        // bool hasAux;
        // uint32_t field_0x4C;
        // float xAux;
        // float yAux;
        // float zAux;
    };
    // MC_CHECK_SIZE(ClientboundLevelParticlesPacket, 0x58);
} // namespace mc
