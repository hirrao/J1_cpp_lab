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

int Player::random(int a, int b)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int32_t> distrib(a, b);
	return distrib(gen);
}

//Random相关函数

int Random::play()
{
	value = random(1, 3);
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
		last_win_value = random(1, 3);
	}
	if (last_win_value == UNDEDINED_PLAY)
		value = random(1, 3);
	else
		value = last_win_value;
	return value;
}

//LeastUse相关函数

int LeastUse::play()
{
	if (use[0] < 2 || use[1] < 2 || use[2] < 2)
	{
		value = random(1, 3);
	}
	else
	{
		if (use[0] == use[1] && use[0] == use[2] && use[1] == use[2])
		{
			value = random(1, 3);
		}
		else if (use[0] == use[1] && use[0] < use[2])
		{
			value = random(1, 2);
		}
		else if (use[0] == use[2] && use[0] < use[1])
		{
			value = (2 * random(0, 1)) + 1;
		}
		else if (use[1] == use[2] && use[1] < use[0])
		{
			value = random(2, 3);
		}
		else if (use[0] < use[1] && use[0] < use[2])
		{
			value = 1;
		}
		else if (use[1] < use[0] && use[1] < use[2])
		{
			value = 2;
		}
		else
		{
			value = 3;
		}
	}
	use[value - 1]++;
	return value;
}

//MostWin相关函数

int MostWin::play()
{
	if (last_result != 0)
	{
		Frequency[(last_result % 10) - 1]++;
	}
	if (last_result / 10 == 3)
	{
		Frequency[last_result % 10 + 2]++;
	}
	if (Frequency[0] < 2 || Frequency[1] < 2 || Frequency[2] < 2 || Frequency[3] < 1 || Frequency[4] < 1 || Frequency[5] < 1)
	{
		value = random(1, 3);
	}
	else if (Proportion(0) == Proportion(1) && Proportion(0) == Proportion(2) && Proportion(1) == Proportion(2))
	{
		value = random(1, 3);
	}
	else if (Proportion(0) == Proportion(1) && Proportion(0) > Proportion(2))
	{
		value = random(1, 2);
	}
	else if (Proportion(0) == Proportion(2) && Proportion(0) > Proportion(1))
	{
		value = (2 * random(0, 1)) + 1;
	}
	else if (Proportion(1) == Proportion(2) && Proportion(1) > Proportion(0))
	{
		value = random(2, 3);
	}
	else if (Proportion(0) > Proportion(1) && Proportion(0) > Proportion(2))
	{
		value = 1;
	}
	else if (Proportion(1) > Proportion(0) && Proportion(1) > Proportion(2))
	{
		value = 2;
	}
	else
	{
		value = 3;
	}
	return value;
}

double MostWin::Proportion(int a)
{
	return double(Frequency[a + 3]) / Frequency[a];
}