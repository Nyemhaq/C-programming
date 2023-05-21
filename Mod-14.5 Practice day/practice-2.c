#include <stdio.h>
int main()
{
    int i, j, a, s = 0, k;
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
        k = k - 2;
        s++;
    }
    return 0;
}