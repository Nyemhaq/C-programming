#include <stdio.h>
int main()
{
    int a, i, j, k = 1, s;
    scanf("%d", &a);
    s = a - 1;
    for (i = 1; i <= a; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("%d", i);
        }
        printf("\n");
        s--;
        k++;
    }
    return 0;
}