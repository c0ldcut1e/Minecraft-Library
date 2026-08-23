#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "ConnectionOrientedStream.hpp"
#include "EndPoint.hpp"
#include "MinecraftLib.hpp"

namespace nn::nex
{
    struct EndPointMapNode
    {
        EndPointMapNode *left;
        EndPointMapNode *parent;
        EndPointMapNode *right;
        uint32_t key;
        EndPoint *endPoint;
        uint8_t color;
        uint8_t isNil;
        uint8_t field_0x16;
        uint8_t field_0x17;
    };
    MC_CHECK_SIZE(EndPointMapNode, 0x18);

    struct EndPointMap
    {
        uint32_t field_0x0;
        EndPointMapNode *head;
        uint32_t size;
    };
    MC_CHECK_SIZE(EndPointMap, 0xC);

    class PRUDPStream : public ConnectionOrientedStream
    {
    public:
        EndPoint *FindEndPointByPID(uint32_t principalId)
        {
            return MLINK_FUNC(EndPoint *, 0x03787A88, PRUDPStream *, uint32_t)(this, principalId);
        }

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
        EndPointMap pidEndPoints;
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
    };
    MC_CHECK_SIZE(PRUDPStream, 0xF4);
} // namespace nn::nex
