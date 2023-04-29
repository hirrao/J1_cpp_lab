#include "main.h"
int open_msg(mouse_msg& msg)
{
	if (msg.x >= 480 && msg.x <= 800 && msg.y >= 520 && msg.y <= 600)
	{
		exit(1);
	}
	if (msg.x <= 560)
	{
		if (msg.y <= 280 && msg.y >= 160)
		{
			return RANDOM;
		}
		if (msg.y <= 480 && msg.y >= 360)
		{
			return 0;
		}
	}
	else if (msg.x >= 720)
	{
		if (msg.y <= 280 && msg.y >= 160)
		{
			return 0;
		}
		if (msg.y <= 480 && msg.y >= 360)
		{
			return 0;
		}
	}
	return 0;
}

int choose(mouse_msg& msg)
{
	if (msg.x >= 480 && msg.x <= 720)
	{
		if (msg.y >= 160 && msg.y <= 280)
		{
			return STONE;
		}
		else if (msg.y >= 320 && msg.y <= 440)
		{
			return SCISSORS;
		}
		else if (msg.y >= 480 && msg.y <= 600)
		{
			return CLOTH;
		}
	}
	else if (msg.x >= 1000 && msg.y >= 520)
	{
		exit(1);
	}
	return 0;
}

void result(int P_value, int Cp_value)
{
	FRONT_OUTPUT_SET_NUMBER;
	setfillcolor(EGERGB(216, 216, 32));
	setbkcolor(EGERGB(216, 216, 32));
	bar(240, 280, 400, 360);
	setfillcolor(EGERGB(48, 156, 40));
	setbkcolor(EGERGB(48, 156, 40));
	bar(880, 360, 1120, 440);
	last_result += Cp_value;
	if (P_value == Cp_value)
	{
		equip_value++;
		string c = to_string(equip_value);
		xyprintf(240, 290, c.c_str());
		xyprintf(970, 370, "平局！");
		last_result += 10;
	}
	else if (P_value > Cp_value)
	{
		win_value++;
		string c = to_string(win_value);
		xyprintf(240, 50, c.c_str());
		xyprintf(940, 370, "你赢了！");
		last_result += 20;
	}
	else
	{
		lose_value++;
		string c = to_string(lose_value);
		xyprintf(240, 170, c.c_str());
		xyprintf(940, 370, "你输了！");
		last_result += 30;
	}
	return;
}

void Print_Computer_Value(Computer_Player& Computer_value)
{
	setfont(-90, 0, _T("微软雅黑"));
	setfillcolor(EGEACOLOR(255, EGERGB(156, 75, 40)));
	setbkcolor(EGEACOLOR(255, EGERGB(156, 75, 40)));
	bar(880, 160, 1120, 280);
	switch (Computer_value.get_value())
	{
	case STONE:
	{
		xyprintf(940, 160, "石头");
		break;
	}
	case CLOTH:
	{
		xyprintf(990, 160, "布");
		break;
	}
	case SCISSORS:
	{
		xyprintf(940, 160, "剪刀");
		break;
	}
	}
	return;
}

void Pattern_init()
{
	setfont(-60, 0, _T("微软雅黑"));
	switch (type)
	{
	case RANDOM:
	{
		xyprintf(60, 480, "随机模式");
		break;
	}
	}
	return;
}