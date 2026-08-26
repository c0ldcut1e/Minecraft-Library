#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "CallContext.hpp"
#include "MinecraftLib.hpp"
#include "ProtocolCallContext.hpp"
#include "RendezVous.hpp"

namespace nn::nex
{
    class NgsFacade : public RendezVous
    {
    public:
        NgsFacade()
        {
            MLINK_FUNC(void, 0x0362582C, NgsFacade *)(this);
        }

        ~NgsFacade()
        {
            MLINK_FUNC(void, 0x036259FC, NgsFacade *)(this);
        }

        void TerminateImpl(CallContext *context)
        {
            MLINK_FUNC(void, 0x036252F8, NgsFacade *, CallContext *)(this, context);
        }

        bool LoginAndRequestAuthenticationToken(ProtocolCallContext *context, uint32_t gameId, const wchar_t *username, const char *password,
                                                char *authenticationToken, int tokenSize, uint32_t timeout)
        {
            return MLINK_FUNC(bool, 0x0362650C, NgsFacade *, ProtocolCallContext *, uint32_t, const wchar_t *, const char *, char *, int,
                              uint32_t)(this, context, gameId, username, password, authenticationToken, tokenSize, timeout);
        }

        bool Login(ProtocolCallContext *context, uint32_t gameId, const wchar_t *username, int timeout, uint32_t flags)
        {
            return MLINK_FUNC(bool, 0x0362653C, NgsFacade *, ProtocolCallContext *, uint32_t, const wchar_t *, int,
                              uint32_t)(this, context, gameId, username, timeout, flags);
        }

        void Logout(ProtocolCallContext *context)
        {
            MLINK_FUNC(void, 0x0362656C, NgsFacade *, ProtocolCallContext *)(this, context);
        }

        [[nodiscard]] bool LoginJobIsInProgress() const
        {
            return MLINK_FUNC(bool, 0x036266D4, const NgsFacade *)(this);
        }

        [[nodiscard]] int GetLastLoginErrorCode() const
        {
            return MLINK_FUNC(int, 0x036266FC, const NgsFacade *)(this);
        }

        uint32_t field_0xE8;
        uint32_t field_0xEC;
        uint32_t field_0xF0;
        uint32_t field_0xF4;
        uint32_t field_0xF8;
        uint32_t field_0xFC;
        uint32_t field_0x100;
        uint32_t field_0x104;
        uint32_t field_0x108;
        uint32_t field_0x10C;
        uint32_t field_0x110;
        uint32_t field_0x114;
        uint32_t field_0x118;
        uint32_t field_0x11C;
    };
    MC_CHECK_SIZE(NgsFacade, 0x120);
} // namespace nn::nex
