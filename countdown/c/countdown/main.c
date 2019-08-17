#include <stdio.h>

#define START 10
#define END 1
#define STEP -1

int main(int argc, char *argv[])
{
    int i;

    for (i = START; i >= END; i += STEP)
    {
        printf("%d\n", i);
    }

    return 0;
}
