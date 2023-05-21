#include <stdio.h>
int main()
{
    int a, i, b = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        if (arr[i] > 0)
        {
            b = 1;
            printf("%d ", b);
        }
        if (arr[i] < 0)
        {
            b = 2;
            printf("%d ", b);
        }
        if (arr[i] == 0)
        {
            b = 0;
            printf("%d ", b);
        }
    }

    return 0;
}