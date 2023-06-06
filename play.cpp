#include "main.h"
void play(mouse_msg& msg) {
	Player Player_value = Player(choose(msg));
	if (Player_value == 0)
		return;
	Player Computer_value;
	switch (type) {
	case RANDOM: {
		Random v;
		v.play();
		Computer_value = v;
		break;
	}
	case INHERIT: {
		Inherit v;
		v.play();
		Computer_value = v;
		break;
	}
	case LEASTUSE: {
		LeastUse v;
		v.play();
		Computer_value = v;
		break;
	}
	case MOSTWIN: {
		MostWin v;
		v.play();
		Computer_value = v;
		break;
	}
	}
	Print_Computer_Value(Computer_value);
	result(Player_value, Computer_value);
	return;
}