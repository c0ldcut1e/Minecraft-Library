#pragma once

#include "mlink/MLink.hpp"

#include "fuiBitmap.hpp"

namespace mc
{
    class fuiFile
    {
    public:
        void initialiseRenderTexture(fuiBitmap *bitmap, bool keepLoaded)
        {
            MLINK_FUNC(void, 0x02BA7EC8, fuiFile *, fuiBitmap *, bool)(this, bitmap, keepLoaded);
        }
    };
} // namespace mc
