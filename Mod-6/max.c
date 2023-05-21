#include <stdio.h>
#include <limits.h>
int main()
{
    int a, i, n, max = INT_MAX;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d\n", max);
    return 0;
}