#include <stdio.h>
int main()
{
    int a, b, c, i, s = 0, r = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        if (b == c)
        {
            printf("Square\n");
        }
        if (b != c)
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}