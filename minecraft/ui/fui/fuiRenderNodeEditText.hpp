#pragma once

#include "mlink/MLink.hpp"

#include "fuiRenderNode.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class fuiRenderNodeEditText : public fuiRenderNode
    {
    public:
        mstd::basic_string<wchar_t> *getText()
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t> *, 0x02BB7CE8, fuiRenderNodeEditText *)(this);
        }
    };
} // namespace mc
