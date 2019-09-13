#include "main.h"

int main(int argc, char *argv[])
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d %s a perfect number.\n", n, is_perfect(n) ? "is" : "is not");

    return EXIT_SUCCESS;
}

bool is_perfect(int n)
{
    int i, t;

    t = 0;
    for (i = 1; i < n; ++i) 
    {
        if (n % i == 0) 
            t += i;
    }

    return t == n;
}
