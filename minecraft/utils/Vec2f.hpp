#pragma once

#include "MinecraftLib.hpp"

double mc_sqrt(double x);

namespace mc
{
    class Vec2f
    {
    public:
        Vec2f(float xValue, float yValue)
        {
            x = xValue;
            y = yValue;
        }

        Vec2f(float all)
        {
            x = all;
            y = all;
        }

        Vec2f() = default;

        Vec2f(const Vec2f &other) = default;

        float distance(const Vec2f &other) const
        {
            return (*this - other).lengthSqrt();
        }

        float length() const
        {
            return (x * x) + (y * y);
        }

        float lengthSqrt() const
        {
            return mc_sqrt(length());
        }

        Vec2f normalize() const
        {
            const float len = lengthSqrt();
            return (len == 0.0F) ? Vec2f(0.0F, 0.0F) : *this / len;
        }

        float operator[](int index) const
        {
            return ((float *) this)[index];
        }

        Vec2f operator+(const Vec2f &other) const
        {
            return {x + other.x, y + other.y};
        }

        Vec2f operator+(float amt) const
        {
            return {x + amt, y + amt};
        }

        Vec2f operator-(const Vec2f &other) const
        {
            return {x - other.x, y - other.y};
        }

        Vec2f operator-(float amt) const
        {
            return {x - amt, y - amt};
        }

        Vec2f operator*(const Vec2f &other) const
        {
            return {x * other.x, y * other.y};
        }

        Vec2f operator*(float amt) const
        {
            return {x * amt, y * amt};
        }

        Vec2f operator/(const Vec2f &other) const
        {
            return {x / other.x, y / other.y};
        }

        Vec2f operator/(float amt) const
        {
            return {x / amt, y / amt};
        }

        Vec2f &operator=(const Vec2f &other) = default;

        Vec2f &operator*=(float amt)
        {
            x *= amt;
            y *= amt;
            return *this;
        }

        Vec2f &operator/=(float amt)
        {
            x /= amt;
            y /= amt;
            return *this;
        }

        bool operator==(const Vec2f &other) const
        {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vec2f &other) const
        {
            return x != other.x || y != other.y;
        }

        float x = 0.0F;
        float y = 0.0F;
    };
    MC_CHECK_SIZE(Vec2f, 0x8);
} // namespace mc
