#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a >= 21 && a <= 10000)
    {
        for (i = 1; i <= a; i++)
        {
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}