#include <cstdio>
unsigned long pow(unsigned long m, unsigned long n);
unsigned long pow_efficient(unsigned long m, unsigned long n);

/* int main()
{
    printf("2 to the power of 60: %ld\n", pow(2, 60));
    printf("2 to the power of 60: %ld\n", pow_efficient(2, 60));
} */

unsigned long pow(unsigned long m, unsigned long n)
{
    if (n == 1)
    {
        return m;
    }
    else
    {
        return m * pow(m, n-1);
    }
}

unsigned long pow_efficient(unsigned long m, unsigned long n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n)
    {
        return pow_efficient(m*m, n/2);
    }
    else
    {
        return m * pow_efficient(m, (n-1)/2);
    }
}