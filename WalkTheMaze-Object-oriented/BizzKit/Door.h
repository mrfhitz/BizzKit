#ifndef __EnemyCharacter
#define __EnemyCharacter

#include "GlobalVars.h"
#include "Point.h"

class Door {
public:
	StudioModel model;
	Point *position;

	Door(int x, int y, string mdl);
	~Door();
	void setDefaults(int x, int y);

};

#endif


