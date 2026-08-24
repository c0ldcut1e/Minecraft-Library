#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#define MC_GL_ZERO                0
#define MC_GL_ONE                 1
#define MC_GL_SRC_ALPHA           4
#define MC_GL_ONE_MINUS_SRC_ALPHA 5

#define MC_GL_MODELVIEW           0
#define MC_GL_PROJECTION          1
#define MC_GL_TEXTURE             2

#define MC_GL_NEVER               0
#define MC_GL_LESS                1
#define MC_GL_EQUAL               2
#define MC_GL_LEQUAL              3
#define MC_GL_GREATER             4
#define MC_GL_NOTEQUAL            5
#define MC_GL_GEQUAL              6
#define MC_GL_ALWAYS              7

#define MC_GL_FRONT               0
#define MC_GL_BACK                1
#define MC_GL_FRONT_AND_BACK      2

namespace mc
{
    class GlStateManager
    {
    public:
        static void alphaFunc(int func, float alpha)
        {
            MLINK_FUNC(void, 0x031056D8, int, float)(func, alpha);
        }

        static void bindTexture(int id)
        {
            MLINK_FUNC(void, 0x030E4750, int)(id);
        }

        static void blendFunc(uint32_t arg1, uint32_t arg2)
        {
            MLINK_FUNC(void, 0x30E52A0, uint32_t, uint32_t)(arg1, arg2);
        }

        static void callList(int list)
        {
            MLINK_FUNC(void, 0x031252B8, int)(list);
        }

        static void clear(int mask)
        {
            MLINK_FUNC(void, 0x031078C8, int)(mask);
        }

        static void clearDepth(double depth)
        {
            MLINK_FUNC(void, 0x03125214, double)(depth);
        }

        static void color4f(double r, double g, double b, double a)
        {
            MLINK_FUNC(void, 0x30E4BA8, double, double, double, double)(r, g, b, a);
        }

        static void colorMask(bool r, bool g, bool b, bool a)
        {
            MLINK_FUNC(void, 0x03105704, bool, bool, bool, bool)(r, g, b, a);
        }

        static void cullFace(int face)
        {
            MLINK_FUNC(void, 0x0310B2BC, int)(face);
        }

        static void deleteTexture(int id)
        {
            MLINK_FUNC(void, 0x03124F10, int)(id);
        }

        static void depthFunc(int func)
        {
            MLINK_FUNC(void, 0x030E9BD4, int)(func);
        }

        static void depthMask(bool arg1)
        {
            MLINK_FUNC(void, 0x030E52FC, bool)(arg1);
        }

        static void disableAlphaTest()
        {
            MLINK_FUNC(void, 0x03108E10)();
        }

        static void disableBlend()
        {
            MLINK_FUNC(void, 0x030E5328)();
        }

        static void disableCull()
        {
            MLINK_FUNC(void, 0x030F974C)();
        }

        static void disableDepthTest()
        {
            MLINK_FUNC(void, 0x030E9B9C)();
        }

        static void disableFog()
        {
            MLINK_FUNC(void, 0x03108C44)();
        }

        static void disableLighting()
        {
            MLINK_FUNC(void, 0x030E4B24)();
        }

        static void disableRescaleNormal()
        {
            MLINK_FUNC(void, 0x03111FB8)();
        }

        static void disableTexture()
        {
            MLINK_FUNC(void, 0x030E6268)();
        }

        static void enableAlphaTest()
        {
            MLINK_FUNC(void, 0x031056BC)();
        }

        static void enableBlend()
        {
            MLINK_FUNC(void, 0x30E5284)();
        }

        static void enableCull()
        {
            MLINK_FUNC(void, 0x030F9768)();
        }

        static void enableDepthTest()
        {
            MLINK_FUNC(void, 0x030E9BB8)();
        }

        static void enableFog()
        {
            MLINK_FUNC(void, 0x03108BA4)();
        }

        static void enableLighting()
        {
            MLINK_FUNC(void, 0x030E4C04)();
        }

        static void enableRescaleNormal()
        {
            MLINK_FUNC(void, 0x0310B1A8)();
        }

        static void enableTexture()
        {
            MLINK_FUNC(void, 0x030E6294)();
        }

        static void endList(int mode)
        {
            MLINK_FUNC(void, 0x031252FC, int)(mode);
        }

        static int genTexture()
        {
            return MLINK_FUNC(int, 0x03124EF8)();
        }

        static void lineWidth(float size)
        {
            MLINK_FUNC(void, 0x030E9BFC, float)(size);
        }

        static void loadIdentity()
        {
            MLINK_FUNC(void, 0x03103080)();
        }

        static void matrixMode(uint32_t arg1)
        {
            MLINK_FUNC(void, 0x3103064, uint32_t)(arg1);
        }

        static void newList(int list, int mode)
        {
            MLINK_FUNC(void, 0x031252DC, int, int)(list, mode);
        }

        static void ortho(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6)
        {
            MLINK_FUNC(void, 0x3110D4C, double, double, double, double, double, double)(arg1, arg2, arg3, arg4, arg5, arg6);
        }

        static void popMatrix()
        {
            MLINK_FUNC(void, 0x030E4BD8)();
        }

        static void pushMatrix()
        {
            MLINK_FUNC(void, 0x030E4B3C)();
        }

        static void rotatef(float x, float y, float z, float w)
        {
            MLINK_FUNC(void, 0x030E4B84, float, float, float, float)(x, y, z, w);
        }

        static void scalef(float x, float y, float z)
        {
            MLINK_FUNC(void, 0x030E4B6C, float, float, float)(x, y, z);
        }

        static void shadeModel(int model)
        {
            MLINK_FUNC(void, 0x031251FC, int)(model);
        }

        static void translatef(float x, float y, float z)
        {
            MLINK_FUNC(void, 0x30E4B54, float, float, float)(x, y, z);
        }

        static void enablePolygonOffset()
        {
            MLINK_FUNC(void, 0x03124D04)();
        }

        static void disablePolygonOffset()
        {
            MLINK_FUNC(void, 0x03124D20)();
        }

        static void polygonOffset(float param_1, float param_2)
        {
            MLINK_FUNC(void, 0x030E52D4, float, float)(param_1, param_2);
        }
    };
} // namespace mc
