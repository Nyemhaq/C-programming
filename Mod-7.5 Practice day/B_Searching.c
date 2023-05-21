#include <stdio.h>
int main()
{
    int a, i, b = 0, c = -1;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    for (i = 0; i < a; i++)
    {
        if (b == arr[i])
        {
            c = i;
            break;
        }
    }
    printf("%d\n", c);
    return 0;
}