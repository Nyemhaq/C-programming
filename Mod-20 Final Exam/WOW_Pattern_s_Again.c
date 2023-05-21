#include <stdio.h>
int main()
{
    int a, i, j, s, k = 1;
    scanf("%d", &a);
    s = a - 1;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        if (i % 2 != 0)
        {
            for (j = 0; j < k; j++)
            {
                printf("^");
            }
        }
        if (i % 2 == 0)
        {
            for (j = 0; j < k; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        k = k + 2;
    }
    return 0;
}