#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "network/nn/pia/session/ISessionInfo.hpp"
#include "network/nn/pia/session/ISessionInfoList.hpp"

namespace nn::pia::session
{
    class SessionInfoList : public ISessionInfoList
    {
    public:
        ~SessionInfoList()
        {
            MLINK_FUNC(void, 0x0357FFCC, SessionInfoList *, uint32_t)(this, 2);
        }

        [[nodiscard]] const ISessionInfo *const *Begin() const
        {
            return MLINK_FUNC(const ISessionInfo *const *, 0x0358009C, const SessionInfoList *)(this);
        }

        [[nodiscard]] ISessionInfo **Begin()
        {
            return MLINK_FUNC(ISessionInfo **, 0x035800A4, SessionInfoList *)(this);
        }

        [[nodiscard]] const ISessionInfo *const *End() const
        {
            return MLINK_FUNC(const ISessionInfo *const *, 0x035800AC, const SessionInfoList *)(this);
        }

        [[nodiscard]] ISessionInfo **End()
        {
            return MLINK_FUNC(ISessionInfo **, 0x035800C0, SessionInfoList *)(this);
        }

        [[nodiscard]] uint16_t GetSize() const
        {
            return MLINK_FUNC(uint16_t, 0x035800D4, const SessionInfoList *)(this);
        }

        [[nodiscard]] uint16_t GetMaxSize() const
        {
            return MLINK_FUNC(uint16_t, 0x035800DC, const SessionInfoList *)(this);
        }

        void Clear()
        {
            MLINK_FUNC(void, 0x035800E4, SessionInfoList *)(this);
        }

        uint16_t size;
        uint16_t maxSize;
        ISessionInfo **entries;
    };
    MC_CHECK_SIZE(SessionInfoList, 0xC);
} // namespace nn::pia::session
