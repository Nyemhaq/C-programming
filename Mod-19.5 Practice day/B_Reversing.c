#include <stdio.h>
int main()
{
    int a, i, b = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            b = i;
        }
    }
    printf("%d", b);
    return 0;
}