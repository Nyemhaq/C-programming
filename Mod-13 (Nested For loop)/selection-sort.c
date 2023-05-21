#include <stdio.h>
int main()
{
    int a, i, j, b = 0;
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
                b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[i] < arr[j])
            {
                b = arr[i];
                arr[i] = arr[j];
                arr[j] = b;
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}