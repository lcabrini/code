#include <stdio.h>

#define START 1
#define END 10

int main(void)
{
    int i = START;

    do
    {
        printf("%d\n", i);
    } while (++i <= END);

    return 0;
}
