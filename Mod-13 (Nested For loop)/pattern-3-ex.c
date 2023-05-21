#include <stdio.h>
int main()
{
    int i, j, a, k;
    scanf("%d", &a);
    k = a;
    for (i = 0; i < a; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }
    return 0;
}