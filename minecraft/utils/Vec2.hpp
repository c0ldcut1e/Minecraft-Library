#pragma once

#include "MinecraftLib.hpp"

double mc_sqrt(double x);

namespace mc
{
    class Vec2
    {
    public:
        Vec2(double xValue, double yValue)
        {
            x = xValue;
            y = yValue;
        }

        Vec2(double all)
        {
            x = all;
            y = all;
        }

        Vec2() = default;

        Vec2(const Vec2 &other) = default;

        double distance(const Vec2 &other) const
        {
            return (*this - other).lengthSqrt();
        }

        double length() const
        {
            return (x * x) + (y * y);
        }

        double lengthSqrt() const
        {
            return mc_sqrt(length());
        }

        Vec2 normalize() const
        {
            const double len = lengthSqrt();
            return (len == 0.0) ? Vec2(0.0, 0.0) : *this / len;
        }

        double operator[](int index) const
        {
            return ((double *) this)[index];
        }

        Vec2 operator+(const Vec2 &other) const
        {
            return {x + other.x, y + other.y};
        }

        Vec2 operator+(double amt) const
        {
            return {x + amt, y + amt};
        }

        Vec2 operator-(const Vec2 &other) const
        {
            return {x - other.x, y - other.y};
        }

        Vec2 operator-(double amt) const
        {
            return {x - amt, y - amt};
        }

        Vec2 operator*(const Vec2 &other) const
        {
            return {x * other.x, y * other.y};
        }

        Vec2 operator*(double amt) const
        {
            return {x * amt, y * amt};
        }

        Vec2 operator/(const Vec2 &other) const
        {
            return {x / other.x, y / other.y};
        }

        Vec2 operator/(double amt) const
        {
            return {x / amt, y / amt};
        }

        Vec2 &operator=(const Vec2 &other) = default;

        Vec2 &operator*=(double amt)
        {
            x *= amt;
            y *= amt;
            return *this;
        }

        Vec2 &operator/=(double amt)
        {
            x /= amt;
            y /= amt;
            return *this;
        }

        bool operator==(const Vec2 &other) const
        {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vec2 &other) const
        {
            return x != other.x || y != other.y;
        }

        double x = 0.0;
        double y = 0.0;
    };
    MC_CHECK_SIZE(Vec2, 0x10);
} // namespace mc
