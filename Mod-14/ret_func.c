#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int d = sum(a, b);
    printf("%d", d);
    return 0;
}