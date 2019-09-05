#include "main.h"

int main(int argc, char *argv[])
{
    int a, b;

    a = 3;
    b = 5;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  a = %d, b = %d\n", a, b);
    
    return EXIT_SUCCESS;
}

void swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}
