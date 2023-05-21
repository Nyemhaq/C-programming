#include <stdio.h>
int main()
{
    int a, b, i, even = 0, odd = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b % 2 == 0)
        {
            even = even + b;
        }
        else
        {
            odd = odd + b;
        }
    }
    printf("%d %d\n", even, odd);

    return 0;
}