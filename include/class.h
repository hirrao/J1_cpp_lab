#pragma once
#include <iostream>
    class PrimeNumber
    {
        public:
        bool Is_PrimeNumber();
        int GetNumber();
        PrimeNumber(int num);
        friend std::ostream& operator<<(std::ostream &os,PrimeNumber &out);
        private:
        int number;
        bool is_pn;
    };