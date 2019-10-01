#include <stdio.h>
#include <stdlib.h>

#define BOOL(x) ((x) == 0 ? "F" : "T")

int main(int argc, char *argv[])
{
    unsigned char b;

    printf("%5s|%5s|%5s\n", "A", "B", "A | B");
    printf("-----+-----+-----\n");
    for (b = 0; b < 4; ++b)
    {
        printf("%5s|%5s|%5s\n",
                BOOL(b & 2),
                BOOL(b & 1),
                BOOL((b & 2) || (b & 1)));
    }

    return EXIT_SUCCESS;
}
