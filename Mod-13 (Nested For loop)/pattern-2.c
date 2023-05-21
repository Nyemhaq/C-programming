#include <stdio.h>
int main()
{
    int i, j, a, k = 1, s;
    scanf("%d", &a);
    s = a;
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
        k = k + 2;
        s--;
    }
    return 0;
}