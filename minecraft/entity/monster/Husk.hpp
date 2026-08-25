#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "entity/Entity.hpp"
#include "entity/monster/Zombie.hpp"
#include "internal/shared_ptr.hpp"
#include "world/Level.hpp"

namespace mc
{
    class Husk : public Zombie
    {
    public:
        Husk(Level *level)
        {
            MLINK_FUNC(void, 0x024E5ECC, Husk *, Level *)(this, level);
        }

        static Husk *Create(Level *level)
        {
            return MLINK_FUNC(Husk *, 0x023E6280, Level *)(level);
        }

        static uint64_t GetType()
        {
            return MLINK_FUNC(uint64_t, 0x0252DF64)();
        }

        bool checkSpawnRules()
        {
            return MLINK_FUNC(bool, 0x024E5F88, Husk *)(this);
        }

        bool isSunSensitive()
        {
            return MLINK_FUNC(bool, 0x024E6014, Husk *)(this);
        }

        bool doHurtTarget(mboost::shared_ptr<Entity> target)
        {
            return MLINK_FUNC(bool, 0x024E6058, Husk *, mboost::shared_ptr<Entity>)(this, target);
        }

        void finishConversion()
        {
            MLINK_FUNC(void, 0x024E65B4, Husk *)(this);
        }
    };
    MC_CHECK_SIZE(Husk, 0x750);
} // namespace mc
