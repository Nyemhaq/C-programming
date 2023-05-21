#include <stdio.h>
int main()
{
    int i, j, a, s, k = 1;
    scanf("%d", &a);
    s = a - 1;
    for (i = 0; i < (2 * a); i++)
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
        if (i < a - 1)
        {
            k = k + 2;
            s--;
        }
        if (i > a - 1)
        {
            k = k - 2;
            s++;
        }
    }
    return 0;
}