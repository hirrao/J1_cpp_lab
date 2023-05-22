#include "main.h"
int type = 0;
int value[3] = {};
int last_result = 0;
int Inherit::last_win_value = 0;
int LeastUse::use[3] = {};
int MostWin::Frequency[6] = {};
int main() {
	initgraph(1280, 640, INIT_RENDERMANUAL);
	ege_enable_aa(true);
	setcaption("Stone-Cloth-Scissors!");
	setcolor(EGEACOLOR(255, BLACK));
	setbkcolor(EGEACOLOR(255, EGERGB(216, 216, 32)));
	PIMAGE open_image = newimage();
	getimage(open_image, TEXT("PNG"), MAKEINTRESOURCE(OPEN));
	putimage(0, 0, open_image);
	delimage(open_image);

	for (;is_run();delay_fps(120)) {
		mouse_msg msg = getmouse();
		if (msg.is_down()) {
			type = open_msg(msg);
			if (type != 0)
				break;
		}
	}

	PIMAGE play_image = newimage();
	getimage(play_image, TEXT("PNG"), MAKEINTRESOURCE(PLAY));
	putimage(0, 0, play_image);
	delimage(play_image);

	Pattern_init();
	for (;is_run();delay_fps(120)) {
		mouse_msg msg = getmouse();
		if (msg.is_down())
		{
			play(msg);
		}
	}
	closegraph();
	return 0;
}