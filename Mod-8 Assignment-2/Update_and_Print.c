#include <stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &b, &c);
    for (i = 0; i < a; i++)
    {
        if (i == b)
        {
            arr[i] = c;
        }
    }
    for (i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}