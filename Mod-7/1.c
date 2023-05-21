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
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}