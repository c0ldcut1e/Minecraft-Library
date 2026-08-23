#pragma once

namespace mc
{
    class SoundSource
    {
    public:
        enum ESoundSource : int
        {
            master  = 0,
            music   = 1,
            records = 2,
            weather = 3,
            blocks  = 4,
            hostile = 5,
            neutral = 6,
            players = 7,
        };
    };
} // namespace mc
