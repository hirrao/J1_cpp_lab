#include "main.h"
#include "class.h"
using namespace std;
using PN::PrimeNumber;
int main()
{
    int number=0;
    cin>>number;
    for(int num=2;num <= number;num++)
    {
        PrimeNumber PrNu=PrimeNumber(num);
        if(PrNu.Is_PrimeNumber()==true)
        {
            cout << PrNu;
        }
    }
    return 0;
}