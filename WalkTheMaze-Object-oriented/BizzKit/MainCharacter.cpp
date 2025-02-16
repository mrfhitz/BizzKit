#include "MainCharacter.h"


MainCharacter::MainCharacter(){
    position = new Point();
    mdlviewer_init("homer.mdl", homer);
    position->x = -250;
    position->y = -250;
    position->z = CHARACTER_HEIGHT * 0.5;
    dir = 0;
    vel = 0.7;
	health = 100;
}

bool MainCharacter::IsDead()
{
	if (health <= 0)
		return true;
	else
		return false;
}

void MainCharacter::Die()
{
	if (health > 0)
	{
		health = 0;
		//Seq = 19 homer dying animation
		//Seq = 73 or 75 death animation
		//homer.SetSequence(19);
	}
}

MainCharacter::~MainCharacter(){}


void MainCharacter::setDefaults() {
	position->x = -250;
	position->y = -250;
	position->z = CHARACTER_HEIGHT * 0.5;
	dir = 0;
	health = 100;
}
