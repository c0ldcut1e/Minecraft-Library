#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "LivingEntity.hpp"
#include "MinecraftLib.hpp"
#include "TamableAnimal.hpp"
#include "internal/shared_ptr.hpp"

namespace mc
{
    class Wolf : public TamableAnimal
    {
    public:
        void setAngry(bool angry)
        {
            MLINK_FUNC(void, 0x02A81C44, Wolf *, bool)(this, angry);
        }

        void setTarget(const mboost::shared_ptr<LivingEntity> &target)
        {
            MLINK_FUNC(void, 0x02A81D68, Wolf *, mboost::shared_ptr<LivingEntity>)(this, target);
        }

        uint32_t field_0x788;
        uint32_t field_0x78C;
        uint8_t field_0x790;
        uint8_t field_0x791;
        uint8_t field_0x792;
        uint8_t field_0x793;
        uint32_t field_0x794;
        uint32_t field_0x798;
    };
    MC_CHECK_SIZE(Wolf, 0x7A0);
} // namespace mc
