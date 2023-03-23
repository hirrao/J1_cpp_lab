#ifndef CLASS1
#define CLASS1

#include<vector>
#include<iostream>
namespace members
{
	class member
	{
	public:
		static int loc;
		member();
		int GetLocation();
	private:
		int location;
	};

	class class1
	{
	public:
		class1();
		std::vector<members::member> circle;
		int thrownum;
		int ThrowOut();
	private:
		int CircleLen;
	};
}
#endif