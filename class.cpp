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
	if (last_result / 10 == 3)
	{
		last_win_value = last_result % 10;
	}
	else
	{
		last_win_value = rand() % 3 + 1;
	}
	if(last_win_value == UNDEDINED_PLAY)
		value = rand() % 3 + 1;
	else
		value = last_win_value;
	return value;
}