#include <cstdio>
#include "factorial.cpp"
#include "exponent.cpp"

double taylor(int x, int precision);


int main()
{
    // more precision would overflow the numbers
    printf("%f\n", taylor(4, 14));
    return 0;
}

double taylor(int x, int precision)
{
    if (precision == 0)
    {
        return 1;
    }
    else
    {
        double term = 
        ((double)pow((unsigned long) x, (unsigned long) precision))
        /
        factorial((unsigned int) precision);

        return taylor(x, (int) precision - 1) + term;
        
    }
}