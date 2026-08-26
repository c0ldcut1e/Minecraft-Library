#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class L10N
    {
    public:
        static const wchar_t *GetString(int stringId)
        {
            return MLINK_FUNC(const wchar_t *, 0x02F24864, int)(stringId);
        }

        static void loadStringTable()
        {
            MLINK_FUNC(void, 0x02F27BD4)();
        }
    };
} // namespace mc
