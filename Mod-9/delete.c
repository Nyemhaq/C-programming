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
    int pos;
    scanf("%d", &pos);
    for (i = pos; i < a - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < a - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}