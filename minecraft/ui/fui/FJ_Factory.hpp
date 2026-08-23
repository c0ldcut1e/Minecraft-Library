#pragma once

#include "mlink/MLink.hpp"

#include "FJ_FuiNode.hpp"
#include "fuiRenderNode.hpp"

namespace mc
{
    class FJ_Factory
    {
    public:
        static FJ_FuiNode *createObject(const char *className, fuiRenderNode *parent, bool addToParent, const char *name)
        {
            return MLINK_FUNC(FJ_FuiNode *, 0x02BD40E0, const char *, fuiRenderNode *, bool, const char *)(className, parent, addToParent, name);
        }
    };
} // namespace mc
