#include "main.h"
void play(mouse_msg& msg)
{
	Player Player_value = Player(choose(msg));
	Computer_Player Computer_value;
	switch (type)
	{
	case RANDOM:
		Random v;
		v.play();
		Computer_value = v;
		break;
	}
	Print_Computer_Value(Computer_value);
	if (Player_value == Computer_value)
	{
		equip();
	}
	else if (Player_value > Computer_value)
	{
		win();
	}
	else
	{
		lose();
	}
	return;
}