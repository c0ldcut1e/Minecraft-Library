#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class ElementStorage
    {
    public:
        enum class eHESThreadId : int
        {
            Main               = 0xA,
            Server             = 0x1,
            ServerPostUpdate   = 0x2,
            ServerLevelUpdate  = 0x7,
            NetworkGame        = 0x8,
            RendererUpdate     = 0xB,
            GameModeTransition = 0x10,
            RemoteSave         = 0x11,
            Storage            = 0x12
        };

        static void CreateNewThreadStorage(ElementStorage::eHESThreadId threadId)
        {
            MLINK_FUNC(void, 0x0229CFFC, ElementStorage::eHESThreadId)(threadId);
        }

        static void ReleaseThreadStorage()
        {
            MLINK_FUNC(void, 0x0229D1B4)();
        }
    };
} // namespace mc
