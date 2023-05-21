#include <stdio.h>
int main()
{
    int a, i, j, tmp = 0;
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
                if (arr[i][j] != 1)
                {
                    tmp = 1;
                }
                continue;
            }
            if (arr[i][j] != 0)
            {
                tmp = 1;
            }
        }
    }
    if (tmp == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}