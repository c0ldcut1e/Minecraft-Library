#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"

namespace mc
{
    class MapDecoration
    {
    public:
        class Type
        {
        public:
            Type(int icon, bool renderedOnFrame, bool player, int mapColor)
            {
                MLINK_FUNC(void, 0x025D7F40, Type *, int, bool, bool, int)(this, icon, renderedOnFrame, player, mapColor);
            }

            static const Type *byIcon(uint8_t icon)
            {
                return MLINK_FUNC(const Type *, 0x025CD738, uint8_t)(icon);
            }

            bool isPlayer() const
            {
                return MLINK_FUNC(bool, 0x025CCCA0, const Type *)(this);
            }

            uint8_t getIcon() const
            {
                return MLINK_FUNC(uint8_t, 0x025CCCA8, const Type *)(this);
            }

            bool isRenderedOnFrame() const
            {
                return MLINK_FUNC(bool, 0x025D7EC0, const Type *)(this);
            }

            bool hasMapColor() const
            {
                return MLINK_FUNC(bool, 0x025D7FC0, const Type *)(this);
            }

            int getMapColor() const
            {
                return MLINK_FUNC(int, 0x025D7FD0, const Type *)(this);
            }

            uint8_t icon;
            bool renderedOnFrame;
            bool player;
            uint8_t field_0x3;
            int mapColor;
        };

        MapDecoration()
        {
            MLINK_FUNC(void, 0x025CCF5C, MapDecoration *)(this);
        }

        MapDecoration(const Type *type, int8_t x, int8_t y, int8_t rot, int entityId, bool visible)
        {
            MLINK_FUNC(void, 0x025CD05C, MapDecoration *, const Type *, int8_t, int8_t, int8_t, int, bool)(this, type, x, y, rot, entityId, visible);
        }

        const Type *getType() const
        {
            return MLINK_FUNC(const Type *, 0x025D7E94, const MapDecoration *)(this);
        }

        const Type *type;
        uint8_t field_0x4;
        uint8_t field_0x5;
        uint8_t field_0x6;
        uint8_t x;
        uint8_t field_0x8;
        uint8_t field_0x9;
        uint8_t field_0xA;
        uint8_t y;
        uint8_t rot;
        uint8_t field_0xD;
        uint8_t field_0xE;
        uint8_t field_0xF;
        int entityId;
        bool visible;
        uint8_t field_0x15;
        uint8_t field_0x16;
        uint8_t field_0x17;
    };
    MC_CHECK_SIZE(MapDecoration::Type, 0x8);
    MC_CHECK_SIZE(MapDecoration, 0x18);
} // namespace mc
