#pragma once

#include "mlink/MLink.hpp"

#include "Item.hpp"
#include "MinecraftLib.hpp"
#include "internal/unordered_map.hpp"

namespace mc
{
    class ItemCooldowns
    {
    public:
        class CooldownInstance
        {
        public:
            CooldownInstance(int startTick, int endTick)
            {
                MLINK_FUNC(void, 0x024A5DE0, CooldownInstance *, int, int)(this, startTick, endTick);
            }

            int startTick;
            int endTick;
        };
        MC_CHECK_SIZE(CooldownInstance, 0x8);

        ItemCooldowns()
        {
            MLINK_FUNC(void, 0x024A49A4, ItemCooldowns *)(this);
        }

        void addCooldown(Item *item, int duration)
        {
            MLINK_FUNC(void, 0x024A5E40, ItemCooldowns *, Item *, int)(this, item, duration);
        }

        float getCooldownPercent(Item *item, float partialTicks)
        {
            return MLINK_FUNC(float, 0x024A4EB0, ItemCooldowns *, Item *, float)(this, item, partialTicks);
        }

        bool isOnCooldown(Item *item)
        {
            return MLINK_FUNC(bool, 0x024A4FC4, ItemCooldowns *, Item *)(this, item);
        }

        void removeCooldown(Item *item)
        {
            MLINK_FUNC(void, 0x024A5ED8, ItemCooldowns *, Item *)(this, item);
        }

        void tick()
        {
            MLINK_FUNC(void, 0x024A522C, ItemCooldowns *)(this);
        }

        mboost::unordered::unordered_map<Item *, CooldownInstance *> cooldowns;
        int tickCount;
        void *vtable;
    };
    MC_CHECK_SIZE(ItemCooldowns, 0x20);
} // namespace mc
