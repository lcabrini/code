#include <stdio.h>

int main()
{
    int t[13][13];
    int r, c;

    for (r = 0; r <= 12; ++r) 
    {
        for (c = 0; c <= 12; ++c) 
        {
            if (r == 0) 
            {
                t[r][c] = c;
            }
            else if (c == 0)
            {
                t[r][c] = r;
            }
            else
            {
                t[r][c] = r * c;
            }
        }
    }

    for (r = 0; r <= 12; ++r)
    {
        for (c = 0; c <= 12; ++c)
        {
            printf("%4d%c", t[r][c], c == 0 ? '|' : ' ');
        }
        printf("\n");
 
        if (r == 0) 
        {
            for (c = 0; c <= 12; ++c)
            {
                printf("----%c", c ==0 ? '+' : '-');
            }
            printf("\n");
        }
    }

    return 0;
}
