#include <stdio.h>
#include <limits.h>
int main()
{
    int a, i, max = INT_MIN, min = INT_MAX, max_idx = 0, min_idx = 0, d = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i]; // max
            max_idx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i]; // min
            min_idx = i;
        }
    }
    d = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = d;
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}