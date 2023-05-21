#include <stdio.h>
int main()
{
    int i, j, a, b;
    scanf("%d", &a);
    b = a;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("*");
        }
        b--;
        printf("\n");
    }
    return 0;
}