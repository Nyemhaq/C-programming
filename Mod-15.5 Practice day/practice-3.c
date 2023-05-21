#include <stdio.h>
int count_odd(int arr[], int a)
{
    int i, b = 0;
    for (i = 0; i < a; i++)
    {
        if (arr[i] % 2 != 0)
        {
            b++;
        }
    }
    return b;
}
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b = count_odd(arr, a);
    printf("%d\n", b);
    return 0;
}