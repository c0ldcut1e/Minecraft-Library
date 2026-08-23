#pragma once

#include "mlink/MLink.hpp"

#include "Level.hpp"
#include "entity/Entity.hpp"
#include "internal/shared_ptr.hpp"
#include "sound/SoundSource.hpp"

namespace mc
{
    class Entity;
    class SoundEvent;

    class MultiPlayerLevel : public Level
    {
    public:
        void addEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x031FCECC, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void getEntity(mboost::shared_ptr<Entity> *outEntity, int id)
        {
            MLINK_FUNC(void, 0x031FDBE0, MultiPlayerLevel *, mboost::shared_ptr<Entity> *, int)(this, outEntity, id);
        }

        void playSound(const mboost::shared_ptr<Player> &player, double x, double y, double z, const SoundEvent *sound,
                       SoundSource::ESoundSource source, float volume, float pitch, float unk1 = 16.0F)
        {
            MLINK_FUNC(void, 0x031FF120, MultiPlayerLevel *, mboost::shared_ptr<Player>, double, double, double, const SoundEvent *,
                       SoundSource::ESoundSource, float, float, float)(this, player, x, y, z, sound, source, volume, pitch, unk1);
        }

        void putEntity(int id, const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x031FD7D4, MultiPlayerLevel *, int, mboost::shared_ptr<Entity>)(this, id, entity);
        }

        void removeEntity(const mboost::shared_ptr<Entity> &entity)
        {
            MLINK_FUNC(void, 0x031FD3B0, MultiPlayerLevel *, mboost::shared_ptr<Entity>)(this, entity);
        }

        void setChunkVisible(int x, int y, bool visible, bool unk1)
        {
            MLINK_FUNC(void, 0x031FBF0C, MultiPlayerLevel *, int, int, bool, bool)(this, x, y, visible, unk1);
        }
    };
} // namespace mc
