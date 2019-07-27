#include <stdio.h>

#define ERROR -1
#define START -1
#define END 10

long factorial(int n);

int main(int argc, char *argv[])
{
    long f;
    int i;

    for (i = START; i <= END; ++i)
    {
        if ((f = factorial(i)) > 0)
            printf("%2d %15d\n", i, f);
        else
            printf("%2d % 15s\n", i, "Not defined");
    }

    return 0;
}

long factorial(int n)
{
    if (n < 0)
        return ERROR;
    else if (n < 2)
        return 1;
    else 
        return n * factorial(n-1);
}
