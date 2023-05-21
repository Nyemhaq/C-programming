#include <stdio.h>
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = sum(a, b);
    printf("%d\n", c);
    return 0;
}