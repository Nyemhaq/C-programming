#include <stdio.h>
#include <limits.h>
int main()
{
    int a, i, min = INT_MAX, pos = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= a; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d\n", min, pos);
    return 0;
}