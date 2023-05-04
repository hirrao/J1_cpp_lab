#include "class.h"
using YangHui::YangHuiTriangle;
using namespace std;
int Now_Line = 1;
YangHuiTriangle::YangHuiTriangle()
{
    line = Now_Line;
    Now_Line++;
}

long long Calculation(long long i, long long j) 
{
    if (j == 0 || j == i)
    {
        return 1;
    }
    else 
    {
        return Calculation(i - 1, j - 1) + Calculation(i - 1, j);
    }
}
