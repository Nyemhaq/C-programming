#include <stdio.h>
int main()
{
    int a, tmp = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = a - 1;
    while (i < j)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}