#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "block/BlockPos.hpp"

double mc_abs(double x);
double mc_cos(double x);
float mc_degToRad(float deg);
double mc_floor(double x);
double mc_sin(double x);
double mc_sqrt(double x);

namespace mc
{
    class Vec3
    {
    public:
        Vec3(double xValue, double yValue, double zValue)
        {
            x = xValue;
            y = yValue;
            z = zValue;
        }

        Vec3(float yaw, float pitch)
        {
            x = mc_abs(mc_sin(mc_degToRad(pitch - 90.0F))) * mc_sin(mc_degToRad(yaw - 180.0F));
            y = mc_sin(mc_degToRad(pitch - 180.0F));
            z = mc_abs(mc_sin(mc_degToRad(pitch - 90.0F))) * mc_cos(mc_degToRad(yaw));
        }

        Vec3(double all)
        {
            x = all;
            y = all;
            z = all;
        }

        Vec3(const BlockPos &pos)
        {
            x = MLink::ToFloat(pos.x);
            y = MLink::ToFloat(pos.y);
            z = MLink::ToFloat(pos.z);
        }

        Vec3() = default;

        Vec3(const Vec3 &other) = default;

        BlockPos blockPos() const
        {
            return {(int) mc_floor(this->x), (int) this->y, (int) mc_floor(this->z)};
        }

        Vec3 cross(const Vec3 &other) const
        {
            return {(y * other.z) - (z * other.y), (z * other.x) - (x * other.z), (x * other.y) - (y * other.x)};
        }

        double distance(const Vec3 &other) const
        {
            return (*this - other).lengthSqrt();
        }

        double length() const
        {
            return (x * x) + (y * y) + (z * z);
        }

        double lengthSqrt() const
        {
            return mc_sqrt(length());
        }

        Vec3 normalize() const
        {
            const double len = lengthSqrt();
            if (len < 0.0001)
            {
                return {};
            }

            return *this / len;
        }

        Vec3 rotateDegrees(float degrees) const
        {
            const double angle = (double) degrees * 0.017453292;
            const double oldX  = x;
            const double oldY  = y;

            return {(mc_cos(angle) * oldX) - (mc_sin(angle) * oldY), (mc_sin(angle) * oldX) + (mc_cos(angle) * oldY), z};
        }

        Vec3 rotateHorizontalDegrees(float degrees) const
        {
            const double angle = (double) degrees * 0.017453292;
            const double oldX  = x;
            const double oldZ  = z;

            return {(mc_cos(angle) * oldX) - (mc_sin(angle) * oldZ), y, (mc_sin(angle) * oldX) + (mc_cos(angle) * oldZ)};
        }

        double sqrMagnitude() const
        {
            return length();
        }

        double operator[](int index) const
        {
            return ((double *) this)[index];
        }

        Vec3 operator+(const Vec3 &other) const
        {
            return {x + other.x, y + other.y, z + other.z};
        }

        Vec3 operator+(double amt) const
        {
            return {x + amt, y + amt, z + amt};
        }

        Vec3 operator-(const Vec3 &other) const
        {
            return {x - other.x, y - other.y, z - other.z};
        }

        Vec3 operator-(double amt) const
        {
            return {x - amt, y - amt, z - amt};
        }

        Vec3 operator*(const Vec3 &other) const
        {
            return {x * other.x, y * other.y, z * other.z};
        }

        Vec3 operator*(double amt) const
        {
            return {x * amt, y * amt, z * amt};
        }

        Vec3 operator/(const Vec3 &other) const
        {
            return {x / other.x, y / other.y, z / other.z};
        }

        Vec3 operator/(double amt) const
        {
            return {x / amt, y / amt, z / amt};
        }

        Vec3 &operator=(const Vec3 &other) = default;

        Vec3 &operator*=(double amt)
        {
            x *= amt;
            y *= amt;
            z *= amt;

            return *this;
        }

        Vec3 &operator/=(double amt)
        {
            x /= amt;
            y /= amt;
            z /= amt;

            return *this;
        }

        Vec3 &operator+=(const Vec3 &other)
        {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        Vec3 &operator-=(const Vec3 &other)
        {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        bool operator==(const Vec3 &other) const
        {
            const bool b_x = x == other.x;
            const bool b_y = y == other.y;
            const bool b_z = z == other.z;

            return b_x && b_y && b_z;
        }

        bool operator!=(const Vec3 &other) const
        {
            const bool b_x = x != other.x;
            const bool b_y = y != other.y;
            const bool b_z = z != other.z;

            return b_x && b_y && b_z;
        }

        double x = 0.0F;
        double y = 0.0F;
        double z = 0.0F;
    };
    MC_CHECK_SIZE(Vec3, 0x18);
} // namespace mc
