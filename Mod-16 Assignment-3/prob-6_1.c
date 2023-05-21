#include <stdio.h>
int add(int a)
{
    int sum = 0, b = 0;
    a = 0;
    sum = a + b;
    return sum;
}
int main()
{
    int a, b, sum = 0, d;
    scanf("%d %d", &a, &b);
    sum = a + b;
    add(a);
    printf("%d\n", sum);
    return 0;
}