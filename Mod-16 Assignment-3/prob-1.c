#include <stdio.h>
int main()
{
    int a, i, j, s, k;
    scanf("%d", &a);
    s = a - 1;
    k = 1;
    for (i = 0; i < (2 * a) - 1; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i < a - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
    }
    return 0;
}