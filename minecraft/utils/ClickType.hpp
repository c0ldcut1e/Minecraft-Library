#pragma once

namespace mc
{
    class ClickType
    {
    public:
        enum eClickType : int
        {
            AY_PRESS,
            X_PRESS,
            SWAP,
            CLONE,
            THROW,
            QUICK_CRAFT,
            PICKUP_ALL
        };
    };
} // namespace mc
