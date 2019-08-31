#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
#define BOOL(x) ((x) ? "T" : "F")

int main(int argc, char *argv[])
{
    unsigned char a, b;

    printf("%5s|%5s|%5s\n", "A", "B", "A & B");
    printf("-----+-----+-----\n");
    for (a = FALSE; a <= TRUE; ++a)
        for (b = FALSE; b <= TRUE; ++b)
            printf("%5s|%5s|%5s\n", BOOL(a), BOOL(b), BOOL(a && b));

    return EXIT_SUCCESS;
}
