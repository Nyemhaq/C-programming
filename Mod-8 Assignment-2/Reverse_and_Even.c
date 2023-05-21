#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    if ((a - 1) % 2 == 0)
    {
        for (i = a - 1; i >= 0; i = i - 2)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        for (i = a - 2; i >= 0; i = i - 2)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}