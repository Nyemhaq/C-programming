#include <stdio.h>
int main()
{
    int a, i, j, swap = 0, count = 0, b = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= a - 1; i++)
    {
        for (j = i + 1; j <= a; j++)
        {
            if (arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    if (a % 2 != 0)
    {
        b = (a + 1) / 2;
        printf("%d\n", arr[b]);
    }
    else
    {
        b = (a / 2);
        printf("%d %d\n", arr[b], arr[b + 1]);
    }
    return 0;
}