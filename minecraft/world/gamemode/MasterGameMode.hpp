#pragma once

#include "mlink/MLink.hpp"

#include "ui/scene/LaunchMoreOptionsMenuInitData.hpp"

namespace mc
{
    class MasterGameMode
    {
    public:
        static void SetDefaults(LaunchMoreOptionsMenuInitData &options)
        {
            MLINK_FUNC(void, 0x02CA1E94, LaunchMoreOptionsMenuInitData *)(&options);
        }
    };
} // namespace mc
