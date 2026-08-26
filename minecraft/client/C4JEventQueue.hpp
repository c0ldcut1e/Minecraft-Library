#pragma once

#include <cstdint>

#include "mlink/MLink.hpp"

#include "MinecraftLib.hpp"
#include "PlatformTypes.hpp"
#include "client/C4JEvent.hpp"
#include "client/C4JEventArray.hpp"
#include "client/C4JThreadImpl.hpp"
#include "internal/deque.hpp"

namespace mc
{
    class C4JEventQueue
    {
    public:
        void *vtable;
    };
    MC_CHECK_SIZE(C4JEventQueue, 0x4);

    class C4JEventQueueImpl : public C4JEventQueue
    {
    public:
        void setProcessor(int processor)
        {
            MLINK_FUNC(void, 0x034AA4A0, C4JEventQueueImpl *, int)(this, processor);
        }

        void setPriority(int priority)
        {
            MLINK_FUNC(void, 0x034AA4C4, C4JEventQueueImpl *, int)(this, priority);
        }

        void threadPoll()
        {
            MLINK_FUNC(void, 0x034AA56C, C4JEventQueueImpl *)(this);
        }

        static int threadFunc(void *queue)
        {
            return MLINK_FUNC(int, 0x034AA704, void *)(queue);
        }

        void init()
        {
            MLINK_FUNC(void, 0x034AA734, C4JEventQueueImpl *)(this);
        }

        void sendEvent(void *event)
        {
            MLINK_FUNC(void, 0x034AB3D8, C4JEventQueueImpl *, void *)(this, event);
        }

        void waitForFinish()
        {
            MLINK_FUNC(void, 0x034AB490, C4JEventQueueImpl *)(this);
        }

        ~C4JEventQueueImpl()
        {
            MLINK_FUNC(void, 0x034AB760, C4JEventQueueImpl *, uint32_t)(this, 0);
        }

        C4JThreadImpl *thread;
        mstd::deque<void *> events;
        C4JEventArrayImpl *eventAvailable;
        C4JEventImpl *finished;
        OSFastMutex eventMutex;
        void (*eventProcessor)(void *);
        void (*threadStarted)();
        uint32_t threadName_0x58;
        uint32_t threadName_0x5C;
        uint32_t threadName_0x60;
        uint32_t threadName_0x64;
        uint32_t threadName_0x68;
        uint32_t threadName_0x6C;
        uint32_t threadName_0x70;
        uint32_t threadName_0x74;
        uint32_t threadName_0x78;
        uint32_t threadName_0x7C;
        uint32_t threadName_0x80;
        uint32_t threadName_0x84;
        uint32_t threadName_0x88;
        uint32_t threadName_0x8C;
        uint32_t threadName_0x90;
        uint32_t threadName_0x94;
        int processor;
        int priority;
    };
    MC_CHECK_SIZE(C4JEventQueueImpl, 0xA0);
} // namespace mc
