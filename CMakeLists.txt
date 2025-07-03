cmake_minimum_required(VERSION 3.31)
project(tower-defense)

set(CMAKE_CXX_STANDARD 23)

add_executable(tower-defense src/main.cpp
        src/Core/EntityManager.cpp
        src/Core/EntityManager.hpp
        src/Core/ComponentManager.cpp
        src/Core/ComponentManager.hpp
        src/Components/HealthComponent.hpp
        src/Components/VelocityComponent.hpp
        src/Components/RewardComponent.hpp
        src/Components/DamageComponent.hpp)
