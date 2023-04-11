#include "main.h"
#include "class.h"
using YangHui::YangHuiTriangle;
using namespace std;
int Sum_Line = 0;
int main()
{
    cin >> Sum_Line;
    vector<YangHuiTriangle> Triangle;
    for (int i = 1; i <= Sum_Line; i++)
    {
        YangHuiTriangle NewTriangle;
        Triangle.push_back(NewTriangle);
    }
    for(auto i:Triangle)
    {
        cout << i << endl;
    }
}
