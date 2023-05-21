#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a + 1];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for (i = a; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (i = 0; i < a + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}