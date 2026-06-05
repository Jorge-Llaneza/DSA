#include <cstdio>

unsigned int factorial(int n);
unsigned int iterative_factorial(int n);

/* int main() 
{
    printf("%d \n", factorial(12));
    printf("%d \n", iterative_factorial(12));
} */

// O(n) time and space
unsigned int factorial(unsigned int n)
{
    if (n <= 0) 
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

// O(n) time but O(1) space
unsigned int iterative_factorial(int n) 
{
    unsigned int prod = 1;
    for (unsigned int i = 1; i <= (unsigned int) n; i++) 
    {
        prod *= i;
    }
    return prod;
}