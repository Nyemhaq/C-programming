#include <stdio.h>
int main()
{
    long long int a, b, c, min = 0, d = 0, count = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    a = a - min;
    b = b - min;
    c = c - min;
    if (a >= 2 && c >= 1)
    {
        count++;
        a = a - 2;
        c--;
    }
    printf("%lld\n", min + count);
    return 0;
}