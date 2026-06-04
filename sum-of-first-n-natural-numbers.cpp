#include <cstdio>
int sum_recursive(int n);
int sum_loop(int n);
int sum_formula(int n);

int main() 
{
    printf("First 100 natural numbers sum with recursion: %d\n", sum_recursive(100));
    printf("First 100 natural numbers sum with loops: %d\n", sum_loop(100));
    printf("First 100 natural numbers sum with formula: %d\n", sum_formula(100));

    return 0;
}

//O(n) time and space
int sum_recursive(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return sum_recursive(n-1) + n;
    }
}

//O(n) time but O(1) space
int sum_loop(int n)
{
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

//O(1) time and space
int sum_formula(int n)
{
    return (n * (n+1) / 2);
}