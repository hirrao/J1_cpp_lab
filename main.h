#pragma once
#include "class.h"
#include "resource.h"
#include <graphics.h>
#include <Windows.h>
#include <tchar.h>
#include <random>
using CP::Player;
using CP::Random;
using CP::Inherit;
using CP::LeastUse;
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
