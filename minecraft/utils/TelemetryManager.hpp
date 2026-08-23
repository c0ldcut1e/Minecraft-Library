#pragma once

#include <cstdint>

#include "MinecraftLib.hpp"
#include "internal/VTable.hpp"

namespace mc
{
    class VTable_TelemetryManager;

    class TelemetryManager
    {
    public:
        static TelemetryManager *getManager()
        {
            return *(TelemetryManager **) 0x104F6970;
        }

        uint32_t field_0x0;
        uint32_t field_0x4;
        uint32_t field_0x8;
        uint32_t field_0xC;
        uint32_t field_0x10;
        uint32_t field_0x14;
        uint32_t field_0x18;
        uint32_t field_0x1C;
        uint32_t field_0x20;
        VTable_TelemetryManager *vtable;
    };
    MC_CHECK_SIZE(TelemetryManager, 0x28);

    class VTable_TelemetryManager : public VTable
    {
    public:
        MC_VFUNC(void, TelemetryManager, __dt);
        MC_VFUNC(void, TelemetryManager, Init);
        MC_VFUNC(void, TelemetryManager, Tick);
        MC_VFUNC(void, TelemetryManager, Flush);
        MC_VFUNC(void, TelemetryManager, RecordPlayerSessionStart);
        MC_VFUNC(void, TelemetryManager, RecordPlayerSessionExit);
        MC_VFUNC(void, TelemetryManager, RecordHeartBeat);
        MC_VFUNC(void, TelemetryManager, RecordLevelStart);
        MC_VFUNC(void, TelemetryManager, RecordLevelExit);
        MC_VFUNC(void, TelemetryManager, RecordLevelSaveOrCheckpoint);
        MC_VFUNC(void, TelemetryManager, RecordLevelResume);
        MC_VFUNC(void, TelemetryManager, RecordPauseOrInactive);
        MC_VFUNC(void, TelemetryManager, RecordUnpauseOrActive);
        MC_VFUNC(void, TelemetryManager, RecordMenuShown, uint32_t, uint32_t, uint32_t);
        MC_VFUNC(void, TelemetryManager, RecordAchievementUnlocked);
        MC_VFUNC(void, TelemetryManager, RecordMediaShareUpload);
        MC_VFUNC(void, TelemetryManager, RecordUpsellPresented);
        MC_VFUNC(void, TelemetryManager, RecordUpsellResponded);
    };
    MC_CHECK_SIZE(VTable_TelemetryManager, 0x98);
} // namespace mc
