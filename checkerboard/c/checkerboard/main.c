#include <stdio.h>

#define CELLS_PER_ROW 8
#define ROWS 8
#define CELLS (CELLS_PER_ROW * ROWS)
#define EVEN_ROW (2 * CELLS_PER_ROW)

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (i < CELLS)
    {
        if ((i + CELLS_PER_ROW) % EVEN_ROW == 0)
            printf(" ");

        printf("* ");
        ++i;

        if (i % CELLS_PER_ROW == 0)
            printf("\n");
    }

    return 0;
}
