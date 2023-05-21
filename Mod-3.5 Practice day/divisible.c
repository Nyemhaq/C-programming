#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a >= 1 && a <= 1000)
    {
        for (i = 1; i <= a; i++)
        {
            if (i % 5 == 0)
            {
                printf("%d Yes\n", i);
            }
            else
            {
                printf("%d No\n", i);
            }
        }
    }
    return 0;
}