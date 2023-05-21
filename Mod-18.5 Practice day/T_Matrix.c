#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i, j, sum_1 = 0, sum_2 = 0;
    scanf("%d", &a);
    int arr[a][a];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (i == j)
            {
                sum_1 = sum_1 + arr[i][j];
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if ((i + j) == a - 1)
            {
                sum_2 = sum_2 + arr[i][j];
            }
        }
    }
    int r = abs(sum_1 - sum_2);
    printf("%d\n", r);
    return 0;
}