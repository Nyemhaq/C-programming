#include <stdio.h>
int main()
{
    int i, j, a, k, s = 1;
    scanf("%d", &a);
    k = (2 * a) - 1;
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
        printf("\n");
        s++;
        k = k - 2;
    }
    return 0;
}