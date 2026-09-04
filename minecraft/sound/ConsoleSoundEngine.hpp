#pragma once

#include "mlink/MLink.hpp"

namespace mc
{
    class ConsoleSoundEngine
    {
    public:
        ConsoleSoundEngine()
        {
            MLINK_FUNC(void, 0x02ADB550, ConsoleSoundEngine *)(this);
        }

        ~ConsoleSoundEngine()
        {
            MLINK_FUNC(void, 0x02ADBAD8, ConsoleSoundEngine *, uint32_t)(this, 0);
        }

        float getMasterMusicVolume()
        {
            return MLINK_FUNC(float, 0x02ADBBB0, ConsoleSoundEngine *)(this);
        }

        void setMasterMusicVolume(float volume)
        {
            MLINK_FUNC(void, 0x02ADBBD0, ConsoleSoundEngine *, float)(this, volume);
        }

        float getMasterSoundEffectVolume()
        {
            return MLINK_FUNC(float, 0x02ADBBD8, ConsoleSoundEngine *)(this);
        }

        void setMasterSoundEffectVolume(float volume)
        {
            MLINK_FUNC(void, 0x02ADBBE0, ConsoleSoundEngine *, float)(this, volume);
        }

        void limitMusicVolume()
        {
            MLINK_FUNC(void, 0x02ADBBE8, ConsoleSoundEngine *)(this);
        }

        void removeMusicVolumeLimit()
        {
            MLINK_FUNC(void, 0x02ADBCB8, ConsoleSoundEngine *)(this);
        }

        bool getIsPlayingStreamingCDMusic()
        {
            return MLINK_FUNC(bool, 0x02ADBDAC, ConsoleSoundEngine *)(this);
        }

        bool getIsPlayingStreamingGameMusic()
        {
            return MLINK_FUNC(bool, 0x02ADBDB4, ConsoleSoundEngine *)(this);
        }

        void setIsPlayingStreamingCDMusic(bool value)
        {
            MLINK_FUNC(void, 0x02ADBDBC, ConsoleSoundEngine *, bool)(this, value);
        }

        void setIsPlayingStreamingGameMusic(bool value)
        {
            MLINK_FUNC(void, 0x02ADBDC4, ConsoleSoundEngine *, bool)(this, value);
        }

        bool getIsPlayingEndMusic()
        {
            return MLINK_FUNC(bool, 0x02ADBDCC, ConsoleSoundEngine *)(this);
        }

        bool getIsPlayingNetherMusic()
        {
            return MLINK_FUNC(bool, 0x02ADBDD4, ConsoleSoundEngine *)(this);
        }

        void setIsPlayingEndMusic(bool value)
        {
            MLINK_FUNC(void, 0x02ADBDDC, ConsoleSoundEngine *, bool)(this, value);
        }

        void setIsPlayingNetherMusic(bool value)
        {
            MLINK_FUNC(void, 0x02ADBDE4, ConsoleSoundEngine *, bool)(this, value);
        }
    };
} // namespace mc
