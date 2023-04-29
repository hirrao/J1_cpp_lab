#include "main.h"

//Player相关函数

int Player::get_value()
{
	return value;
}

Player::Player()
{
	value = UNDEDINED_PLAY;
}

Player::Player(int v)
{
	value = v;
}

int Player::play()
{
	value = UNDEDINED_PLAY;
	return value;
}


//Random相关函数

int Random::play()
{
	value = rand() % 3 + 1;
	return value;
}


//Inherit相关函数

int Inherit::play()
{
	return 0;
}