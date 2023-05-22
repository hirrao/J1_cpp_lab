#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
enum Play_Type {
	UNDEDINED_PLAY,
	STONE,
	SCISSORS,
	CLOTH,
};

enum Open_Type {
	UNDEDINED_OPEN,
	RANDOM,
	INHERIT,
	LEASTUSE,
	MOSTWIN
};

extern int last_result;