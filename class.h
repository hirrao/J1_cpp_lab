#pragma once
#include "head.h"
namespace CP
{
	class Player
	{
	public:
		Player();
		Player(int);
		virtual int play();
		int get_value();
		friend bool operator < (const Player& A, const Player& B)
		{
			if (A.value == B.value)
				return false;
			else if (A.value == STONE && B.value == SCISSORS)
				return false;
			else if (A.value == SCISSORS && B.value == CLOTH)
				return false;
			else if (A.value == CLOTH && B.value == STONE)
				return false;
			else
				return true;
		};
		friend bool operator > (const Player& A, const Player& B)
		{
			if (A.value == B.value)
				return false;
			else if (A.value == STONE && B.value == SCISSORS)
				return true;
			else if (A.value == SCISSORS && B.value == CLOTH)
				return true;
			else if (A.value == CLOTH && B.value == STONE)
				return true;
			else
				return false;
		}
		friend bool operator == (const Player& A, const Player& B)
		{
			if (A.value == B.value)
				return true;
			else
				return false;
		}
	protected:
		int value;
	};
	class Computer_Player : public Player
	{

	};

	class Random : public Computer_Player
	{
	public:
		virtual int play();
	};
}