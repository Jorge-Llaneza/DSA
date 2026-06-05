#include <cstdio>
int fun(int n);

/* int main()
{
    fun(95);
    return 0;
} */

int fun(int n)
{
    printf("%d ", n);

    if (n> 100)
    {
        return n - 10;
    }
    else 
    {
        return fun(fun(n +11));
    }
}