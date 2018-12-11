#pragma once
#ifndef __CLOUD__
#define __CLOUD__

#include "GameObject.h"
#include "TextureManager.h"
#include "SoundManager.h"

class Cloud : public GameObject {
public:
	// Constructor / Destructor
	Cloud();
	~Cloud();

	// Inherited via GameObject
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
private:
	void _move();
	void _checkBounds();
	void _reset();

};
#endif // !__CLOUD__
