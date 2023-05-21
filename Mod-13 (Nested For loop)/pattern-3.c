#include <stdio.h>
int main()
{
    int i, j, a, k = 1;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }
    return 0;
}