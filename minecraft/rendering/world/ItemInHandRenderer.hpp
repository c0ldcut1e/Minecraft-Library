#pragma once

#include "mlink/MLink.hpp"

#include "entity/LivingEntity.hpp"
#include "internal/not_null_ptr.hpp"
#include "internal/shared_ptr.hpp"
#include "item/ItemInstance.hpp"
#include "utils/HumanoidArm.hpp"

namespace mc
{
    class ItemTransforms
    {
    public:
        enum TransformType : int
        {
            NONE,
            THIRD_PERSON_LEFT_HAND,
            THIRD_PERSON_RIGHT_HAND,
            FIRST_PERSON_LEFT_HAND,
            FIRST_PERSON_RIGHT_HAND,
            HEAD,
            GUI,
            GROUND,
            FIXED
        };
    };

    class ItemInHandRenderer
    {
    public:
        void applyItemArmAttackTransformation(const HumanoidArm *arm, float unk1)
        {
            MLINK_FUNC(void, 0x0317FD10, ItemInHandRenderer *, const HumanoidArm *, float)(this, arm, unk1);
        }

        void renderItem(const mboost::shared_ptr<LivingEntity> &entity, const mboost::not_null_ptr<ItemInstance> &item,
                        ItemTransforms::TransformType transformType, bool leftHand, int layer, bool foil)
        {
            MLINK_FUNC(void, 0x03179C50, ItemInHandRenderer *, mboost::shared_ptr<LivingEntity>, mboost::not_null_ptr<ItemInstance>,
                       ItemTransforms::TransformType, bool, int, bool)(this, entity, item, transformType, leftHand, layer, foil);
        }
    };
} // namespace mc
