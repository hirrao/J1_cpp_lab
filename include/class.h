#include <iostream>
extern int Sum_Line;
extern int Now_Line;
extern long long Calculation(long long i, long long j);
namespace YangHui
{
    class YangHuiTriangle
    {
    public:
    YangHuiTriangle();
    private:
    int line;
    friend std::ostream &operator <<(std::ostream &os, const YangHuiTriangle &Triangle)
    {
        for (int i = 0; i < Sum_Line - Triangle.line; i++)
        {
            os << " ";
        }
        for(int j = 1; j <= Triangle.line; j++)
        {
			os << Calculation(Triangle.line - 1, j - 1) << " ";
		}
        for (int i = 0; i < Sum_Line - Triangle.line - 1 ; i++)
        {
            os << " ";
        }
        return os;
    }
    };
}