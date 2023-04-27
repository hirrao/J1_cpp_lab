#include "main.h"

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

int Random::play()
{
	value = rand() % 3 + 1;
	return value;
}