#include <cstdio>
long pow(long m, long n);
long pow_efficient(long m, long n);

int main()
{
    printf("2 to the power of 60: %ld\n", pow(2, 60));
    printf("2 to the power of 60: %ld\n", pow_efficient(2, 60));
}

long pow(long m, long n)
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

long pow_efficient(long m, long n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n)
    {
        return pow(m*m, n/2);
    }
    else
    {
        return m * pow(m, (n-1)/2);
    }
}