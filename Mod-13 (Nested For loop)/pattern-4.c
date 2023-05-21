#include <stdio.h>
int main()
{
    int i, j, a, s, k = 1;
    scanf("%d", &a);
    s = a - 1;
    k = 1;
    for (i = 0; i < (2 * a) - 1; i++)
    {
        for (j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (j = 0; j < k; j++)
        {
            printf("*");
        }
        if (i < a - 1)
        {
            s--;
            k = k + 2;
        }
        else
        {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}