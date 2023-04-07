#include "main.h"
#include "class.h"
using namespace std;
PrimeNumber::PrimeNumber(int num)
{
    number=num;
    for(int n=2;n<number;++n)
    {
        if(number%n==0)
        {
            is_pn = false;
            return;
        }
    }
    is_pn = true;
    return;
}

bool PrimeNumber::Is_PrimeNumber()
{
    return is_pn;
}

std::ostream& operator<<(std::ostream &os,PrimeNumber &out) 
{
        return os << out.GetNumber() << endl ;
}

int PrimeNumber::GetNumber()
{
    return number;
}