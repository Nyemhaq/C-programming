#include <stdio.h>
int main()
{
    int a, b, c, i, t = 0, p = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        if (b > c)
        {
            t++;
        }
        if (c > b)
        {
            p++;
        }
    }
    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (p > t)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}