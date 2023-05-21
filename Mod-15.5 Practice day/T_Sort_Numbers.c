#include <stdio.h>

void sort(long long int a, long long int b, long long int c)
{
    if (a <= b && a <= c && b <= c)
    {
        printf("%lld\n%lld\n%lld\n", a, b, c);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
    else if (a <= b && a <= c && c <= b)
    {
        printf("%lld\n%lld\n%lld\n", a, c, b);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
    else if (b <= a && b <= c && a <= c)
    {
        printf("%lld\n%lld\n%lld\n", b, a, c);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
    else if (b <= a && b <= c && c <= a)
    {
        printf("%lld\n%lld\n%lld\n", b, c, a);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
    else if (c <= a && c <= b && a <= b)
    {
        printf("%lld\n%lld\n%lld\n", c, a, b);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
    else if (c <= a && c <= b && b <= a)
    {
        printf("%lld\n%lld\n%lld\n", c, b, a);
        printf("\n%lld\n%lld\n%lld\n", a, b, c);
    }
}
int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    sort(a, b, c);
    return 0;
}