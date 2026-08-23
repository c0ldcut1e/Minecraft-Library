#pragma once

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "internal/basic_string.hpp"

namespace mc
{
    class BossEvent
    {
    public:
        BossEvent() = default;

        BossEvent(const mstd::basic_string<wchar_t> &id, int nameId, const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0218BD3C, BossEvent *, const mstd::basic_string<wchar_t> &, int, const mstd::basic_string<wchar_t> &, unsigned int,
                       unsigned int)(this, id, nameId, name, 0, 0);
        }
        ~BossEvent()
        {
            MLINK_FUNC(void, 0x021A7EE4, BossEvent *)(this);
        }

        mstd::basic_string<wchar_t> getId() const
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x0218BE20, const BossEvent *)(this);
        }

        mstd::basic_string<wchar_t> getName() const
        {
            return MLINK_FUNC(mstd::basic_string<wchar_t>, 0x0218BE98, const BossEvent *)(this);
        }

        int getNameId() const
        {
            return MLINK_FUNC(int, 0x0218BF10, const BossEvent *)(this);
        }

        float getPercent() const
        {
            return MLINK_FUNC(float, 0x0218BF34, const BossEvent *)(this);
        }

        void setCreateWorldFog(bool createWorldFog)
        {
            MLINK_FUNC(void, 0x0218BF84, BossEvent *, bool)(this, createWorldFog);
        }

        void setDarkenScreen(bool darkenScreen)
        {
            MLINK_FUNC(void, 0x0218BF6C, BossEvent *, bool)(this, darkenScreen);
        }

        void setName(const mstd::basic_string<wchar_t> &name)
        {
            MLINK_FUNC(void, 0x0218BF18, BossEvent *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        void setPercent(float percent)
        {
            MLINK_FUNC(void, 0x0218BF3C, BossEvent *, float)(this, percent);
        }

        void setPlayBossMusic(bool playBossMusic)
        {
            MLINK_FUNC(void, 0x0218BF7C, BossEvent *, bool)(this, playBossMusic);
        }

        bool shouldCreateWorldFog() const
        {
            return MLINK_FUNC(bool, 0x0218BF8C, const BossEvent *)(this);
        }

        bool shouldDarkenScreen() const
        {
            return MLINK_FUNC(bool, 0x0218BF64, const BossEvent *)(this);
        }

        bool shouldPlayBossMusic() const
        {
            return MLINK_FUNC(bool, 0x0218BF74, const BossEvent *)(this);
        }

        unsigned int field_0x0;
        unsigned int idSsoBuffer[4];
        unsigned int idHeapPtr;
        unsigned int idSize;
        unsigned int idCap;
        unsigned int field_0x20;
        unsigned int nameSsoBuf[4];
        unsigned int nameHeapPtr;
        unsigned int nameSize;
        unsigned int nameCap;
        int nameId;
        float percent;
        unsigned int color;
        unsigned int overlay;
        bool darkenScreen;
        bool playBossMusic;
        bool createWorldFog;
        unsigned char field_0x53;
        void *vtable;
    };
    MC_CHECK_SIZE(BossEvent, 0x58);
} // namespace mc
