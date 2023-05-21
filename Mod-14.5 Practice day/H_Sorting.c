#include <stdio.h>
int main()
{
    int a, i, j, tmp = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}