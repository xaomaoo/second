#include <stdio.h>

int main()
{
    int i, j, k, space;
      // number of rows

    for (i = 1; i <= 4; i++)
    {
        /* printing spaces for centering */
        for (space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }

        /* printing increasing numbers */
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        

        /* printing decreasing numbers */
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
