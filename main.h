#pragma once
#include "class.h"
#include "resource.h"
#include <graphics.h>
#include <Windows.h>
#include <tchar.h>
#define FRONT_OUTPUT_SET_NUMBER setfont(-60,0,_T("微软雅黑"))
using CP::Player;
using CP::Random;
using CP::Inherit;
using namespace std;
int open_msg(mouse_msg& msg);
void play(mouse_msg& msg);
int choose(mouse_msg& msg);
void result(Player P_value, Player Cp_value);
void Print_Computer_Value(Player& Computer_value);
void Pattern_init();
extern int equip_value;
extern int win_value;
extern int lose_value;
extern int type;