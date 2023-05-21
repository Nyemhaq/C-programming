#include <stdio.h>
int main()
{
    int a, i, j, b, flag = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[i] + arr[j] == b)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}