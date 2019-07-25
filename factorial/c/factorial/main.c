#include <stdio.h>

#define ERROR -1
#define NOT_DEFINED "Not defined"

long factorial(int n);

int main(int argc, char *argv[])
{
    int i;
    long f;

    for (i = -1; i <= 10; ++i)
    {
        f = factorial(i);
        if (f == ERROR)
            printf("%2d %15s\n", i, NOT_DEFINED);
        else
            printf("%2d %15d\n", i, f);
    }

    return 0;
}

long factorial(int n)
{
    long f;
    int i;

    if (n < 0)
        f = ERROR;
    else 
    {
        f = 1;
        for (i = n; i > 1; --i)
            f *= i;
    }

    return f;
}
