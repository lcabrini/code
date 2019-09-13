#include "main.h"

int main(int argc, char *argv[])
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d %s a prime number.\n", n, is_prime(n) ? "is" : "is not");

    return EXIT_SUCCESS;
}

bool is_prime(int n)
{
    int i;

    if (n == 1)
        return false;

    for (i = 2; i <= sqrt(n); ++i) 
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
