#pragma once
#ifndef __CollisionManager__
#define __CollisionManager__

// core libraries
#include <iostream>

#include "GameObject.h"
#include <GLM/gtx/norm.hpp>
#include "SoundManager.h"

class CollisionManager
{
public:
	static int squaredDistance(glm::vec2 P1, glm::vec2 P2);
	static bool squaredRadiusCheck(GameObject* object1, GameObject* object2);
	static bool AABBCheck(GameObject* object1, GameObject* object2);
	static bool CollisionResponse(GameObject* object);

private:
	CollisionManager();
	~CollisionManager();
};

typedef CollisionManager Collision;

#endif /* defined (__CollisionManager__) */
