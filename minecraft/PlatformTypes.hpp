#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"

#if __has_include(<gx2/surface.h>)
#include <gx2/surface.h>
#else
struct GX2ColorBuffer;

struct GX2DepthBuffer
{
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
};
MC_CHECK_SIZE(GX2DepthBuffer, 0xAC);
#endif

#if __has_include(<coreinit/event.h>)
#include <coreinit/event.h>
#else
struct OSEvent
{
    uint32_t tag;
    const char *name;
    uint32_t field_0x8;
    uint32_t value;
    void *queueHead;
    void *queueTail;
    void *queueParent;
    uint32_t field_0x1C;
    uint32_t mode;
};
MC_CHECK_SIZE(OSEvent, 0x24);
#endif

#if __has_include(<coreinit/fastmutex.h>)
#include <coreinit/fastmutex.h>
#else
struct OSFastMutex
{
    uint32_t tag;
    const char *name;
    uint32_t field_0x8;
    void *queueHead;
    void *queueTail;
    void *linkNext;
    void *linkPrevious;
    uint32_t field_0x1C;
    uint32_t field_0x20;
    uint32_t field_0x24;
    uint32_t field_0x28;
};
MC_CHECK_SIZE(OSFastMutex, 0x2C);
#endif
