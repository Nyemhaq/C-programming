#include <stdio.h>
int main()
{
    int a, b, c, d = 0;
    scanf("%d %d %d", &a, &b, &c);
    d = (a * c) / b;
    printf("%d\n", d);
    return 0;
}