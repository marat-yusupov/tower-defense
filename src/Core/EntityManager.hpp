#pragma once
#include <unordered_set>

namespace Core {
    using Entity = std::uint32_t;
    constexpr Entity INVALID_ENTITY_ID = 0;

    class EntityManager {
    public:
        Entity create();

        void destroy(Entity entityId);

        const std::unordered_set<Entity>& getAll() const;

    private:
        Entity nextEntityId = 1;

        std::unordered_set<Entity> _entities;
    };
}
