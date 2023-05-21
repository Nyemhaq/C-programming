#include <stdio.h>
int sum(int arr[], int a, int b)
{
    int s = 0;
    if (a <= 0)
        return 0;
    int l = sum(arr, a - 1, b + 1);
    s = s + l;
    return s;
}
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = sum(arr, a, 1);
    printf("%d\n", l);
    return 0;
}