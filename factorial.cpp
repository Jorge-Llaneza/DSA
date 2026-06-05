#include <cstdio>

int factorial(int n);
int iterative_factorial(int n);

/* int main() 
{
    printf("%d \n", factorial(12));
    printf("%d \n", iterative_factorial(12));
}
 */
// O(n) time and space
int factorial(int n)
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
int iterative_factorial(int n) 
{
    int prod = 1;
    for (int i = 1; i <= n; i++) 
    {
        prod *= i;
    }
    return prod;
}