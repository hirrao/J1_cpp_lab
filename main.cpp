#include "main.h"
int type = 0;
int value[3] = {};
int last_result = 0;
int Inherit::last_win_value = 0;
int LeastUse::use[3] = {};
int MostWin::Frequency[6] = {};
int main() {
	//初始化界面
	initgraph(1280, 640, INIT_RENDERMANUAL);
	ege_enable_aa(true);
	setcaption("Stone-Cloth-Scissors!");
	setcolor(EGEACOLOR(255, BLACK));
	setbkcolor(EGEACOLOR(255, EGERGB(216, 216, 32)));
	PIMAGE open_image = newimage();
	//将存储的PNG文件导入到exe内
	getimage(open_image, TEXT("PNG"), MAKEINTRESOURCE(OPEN));
	putimage(0, 0, open_image);
	delimage(open_image);
	//判断所选模式
	for (;is_run();delay_fps(120)) {
		mouse_msg msg = getmouse();
		if (msg.is_down()) {
			type = open_msg(msg);
			if (type != 0)
				break;
		}
	}
	//初始化游戏界面
	PIMAGE play_image = newimage();
	getimage(play_image, TEXT("PNG"), MAKEINTRESOURCE(PLAY));
	putimage(0, 0, play_image);
	delimage(play_image);
	//循环判断，保持游戏的进行，直到点击退出
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