#pragma once
#include <iostream>
namespace PN {
    class PrimeNumber
    {
        public:
        bool Is_PrimeNumber();
        int GetNumber();
        PrimeNumber(int num);
        friend std::ostream& operator<<(std::ostream &os,PrimeNumber &out)
        {
            return os << out.GetNumber() << std::endl ;
        }
        private:
        int number;
        bool is_pn;
    };
}