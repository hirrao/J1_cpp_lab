#include"Class1.h"
using namespace std;
using members::class1;
using members::member;
int member::loc = 0;

class1::class1()
{
	cin >> CircleLen >> thrownum;
	member initmem;
	vector<member> initlen = {};
	for(int n=0;n<CircleLen;n++)
	{
		member a;
		initlen.push_back(a);
	}
	circle = initlen;
	return;
}


member::member()
{
	location = loc;
	loc++;
	return;
}

int member::GetLocation()
{
	return location;
}

int class1::ThrowOut()
{
	while (1)
	{
		vector<member> &C = class1::circle;
		size_t size = C.size();
		if (size == 1)
		{
			return C[0].GetLocation();
		}
		else
		{
			C.erase(C.begin() + class1::thrownum%size);
		}
	}
}