#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Number of arguments: %d\n", argc-1);
    for (i = 1; i < argc; ++i)
    {
        printf("%2d. %s\n", i, argv[i]);
    }

    return 0;
}
