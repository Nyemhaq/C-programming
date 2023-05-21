#include <stdio.h>
int main()
{
    int i, j, a, s, k = 1;
    scanf("%d", &a);
    s = a - 1;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    return 0;
}