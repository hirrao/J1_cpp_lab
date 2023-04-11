#pragma once
#include <iostream>
namespace PN 
{
    class PrimeNumber
    {
        public:
        bool Is_PrimeNumber();
        PrimeNumber(int num);
        friend std::ostream& operator<<(std::ostream &os,const PrimeNumber &out)
        {
            os << out.number << std::endl ;
            return os;
        }
        private:
        int number;
        bool is_pn;
    };
}