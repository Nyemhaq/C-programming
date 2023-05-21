#include <stdio.h>
#include <limits.h>
void min_max(int a)
{
    int i, arr[a], min = INT_MAX, max = INT_MIN;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d %d\n", min, max);
}
int main()
{
    int a;
    scanf("%d", &a);
    min_max(a);
    return 0;
}