#pragma once

#include "mlink/MLink.hpp"

#define MC_GL_TRIANGLES      0
#define MC_GL_TRIANGLE_STRIP 1
#define MC_GL_TRIANGLE_FAN   2
#define MC_GL_QUADS          3
#define MC_GL_LINES          4
#define MC_GL_LINE_STRIP     5

namespace mc
{
    class BufferBuilder
    {
    public:
        void begin(int mode = MC_GL_TRIANGLES)
        {
            MLINK_FUNC(void, 0x02FD1FB4, BufferBuilder *, int)(this, mode);
        }

        void color(int color = 0xFFFFFF, int alpha = 0xFF)
        {
            MLINK_FUNC(void, 0x02FD36C4, BufferBuilder *, int, int)(this, color, alpha);
        }

        void end()
        {
            MLINK_FUNC(void, 0x02FD2288, BufferBuilder *)(this);
        }

        void normal(float xPos = 0.0F, float yPos = 0.0F, float zPos = 0.0F)
        {
            MLINK_FUNC(void, 0x02FD36F0, BufferBuilder *, float, float, float)(this, xPos, yPos, zPos);
        }

        void vertex(float xPos = 0.0F, float yPos = 0.0F, float zPos = 0.0F)
        {
            MLINK_FUNC(void, 0x02FD2A34, BufferBuilder *, float, float, float)(this, xPos, yPos, zPos);
        }

        void vertexUV(float xPos = 0.0F, float yPos = 0.0F, float zPos = 0.0F, float u = 0.0F, float v = 0.0F)
        {
            MLINK_FUNC(void, 0x02FD2AF4, BufferBuilder *, float, float, float, float, float)(this, xPos, yPos, zPos, u, v);
        }
    };
} // namespace mc
