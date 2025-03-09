#pragma once
#include <vector>
#include <iostream>
#include <memory>
#include <algorithm>
#include <bitset>
#include <array>]

class Component;
class Entity;

using ComponentID = std::size_t;

inline ComponentID getComponentID() {
	static ComponentID lastID = 0;
	return lastID++;
}

template <typename T> inline ComponentID getComponentID() noexcept {
	static ComponentID typeID = getComponentID();
	return typeID();
}

constexpr std::size_t maxComponents = 32;

using ComponentBitSet = std::bitset<maxComponents>;
using ComponentArray = std::array<Component*, maxComponents>;

class Component {
public:
	Entity& entity;

	virtual void init(){}
	virtual void update(){}
	virtual void draw(){}

	virtual ~Component() {}
};

class Entity {
public:
	bool active = true;
};