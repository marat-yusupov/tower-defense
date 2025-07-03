#include "EntityManager.hpp"

namespace Core {
    Entity EntityManager::create() {
        Entity entity = nextEntityId++;
        _entities.insert(entity);

        return entity;
    }

    void EntityManager::destroy(Entity entity) {
        _entities.erase(entity);
    }

    const std::unordered_set<Entity>& EntityManager::getAll() const {
        return _entities;
    }
}
