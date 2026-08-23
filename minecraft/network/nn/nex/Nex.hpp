#pragma once

#include "mlink/MLink.hpp"

#include "NgsFacade.hpp"

namespace mc
{
    inline nn::nex::NgsFacade *Nex_GetNgsFacadeInstance()
    {
        return MLINK_FUNC(nn::nex::NgsFacade *, 0x034B1164)();
    }
} // namespace mc
