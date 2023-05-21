#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a <= 0)
    {
        for (i = a; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}