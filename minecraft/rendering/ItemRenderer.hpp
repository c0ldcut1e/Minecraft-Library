#pragma once

#include "mlink/MLink.hpp"

#include "Font.hpp"
#include "client/resource/texture/TextureAtlasSprite.hpp"
#include "internal/basic_string.hpp"
#include "internal/not_null_ptr.hpp"
#include "item/ItemInstance.hpp"

namespace mc
{
    class ItemRenderer
    {
    public:
        void renderAndDecorateItem(const mboost::not_null_ptr<ItemInstance> &item, float xPos, float yPos, float scaleX, float scaleY, float alpha,
                                   bool foil, bool constantBlend, bool useCompiled, TextureAtlasSprite *icon)
        {
            MLINK_FUNC(void, 0x0316FB58, ItemRenderer *, mboost::not_null_ptr<ItemInstance>, float, float, float, float, float, bool, bool, bool,
                       TextureAtlasSprite *)(this, item, xPos, yPos, scaleX, scaleY, alpha, foil, constantBlend, useCompiled, icon);
        }

        void renderAndDecorateItem(const mboost::not_null_ptr<ItemInstance> &item, int xPos, int yPos)
        {
            MLINK_FUNC(void, 0x0316FF3C, ItemRenderer *, mboost::not_null_ptr<ItemInstance>, int, int)(this, item, xPos, yPos);
        }

        void renderGuiItemDecorations(Font *font, const mboost::not_null_ptr<ItemInstance> &item, int xPos, int yPos,
                                      const mstd::basic_string<wchar_t> &countText, int color, float scale)
        {
            MLINK_FUNC(void, 0x031707EC, ItemRenderer *, Font *, mboost::not_null_ptr<ItemInstance>, int, int, const mstd::basic_string<wchar_t> &,
                       int, float)(this, font, item, xPos, yPos, countText, color, scale);
        }

        void renderGuiItemDecorations(Font *font, const mboost::not_null_ptr<ItemInstance> &item, int xPos, int yPos, float scale)
        {
            MLINK_FUNC(void, 0x0317157C, ItemRenderer *, Font *, mboost::not_null_ptr<ItemInstance>, int, int, float)(this, font, item, xPos, yPos,
                                                                                                                      scale);
        }
    };
} // namespace mc
