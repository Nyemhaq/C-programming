#include <stdio.h>
int main()
{
    int a;
    long long int b, c, d, i, s, r = 0;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%lld %lld %lld %lld", &s, &b, &c, &d);
        r = s - (b + c + d);
        printf("%lld\n", r);
    }
    return 0;
}