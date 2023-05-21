#include <stdio.h>
int main()
{
    int a, i, j, k = 1, s;
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
        printf("\n");
        k++;
        s--;
    }
    return 0;
}