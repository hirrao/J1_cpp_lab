#include "class.h"
using YangHui::YangHuiTriangle;
using namespace std;
int Now_Line = 1;
YangHuiTriangle::YangHuiTriangle()
{
    line = Now_Line;
    Now_Line++;
}

long long C(long long n, long long k)
{
    return P(n, k) / P(k, k);
}

long long P(long long n, long long k)
{
    long long result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= (n - i);
    }
    return result;
}