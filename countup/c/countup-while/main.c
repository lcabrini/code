#include <stdio.h>

#define START 1
#define END 10

int main(void)
{
    int i = START;

    while (i <= END)
    {
        printf("%d\n", i);
        ++i;
    }
}
