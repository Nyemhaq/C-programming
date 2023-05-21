#include <stdio.h>
int main()
{
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
    c = a - b;
    if (c >= 0)
    {
        printf("%d\n", a - b);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}