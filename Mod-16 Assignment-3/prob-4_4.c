#include <stdio.h>
#include <math.h>
void math(double a) // no return but has parameter
{
    double b, c, d;
    b = ceil(a);
    c = floor(a);
    d = round(a);
    printf("Ceil value is %.2lf\n", b);
    printf("Floor value is %.2lf\n", c);
    printf("Round value is %.2lf\n", d);
}
int main()
{
    double a;
    scanf("%lf", &a);
    math(a);
    return 0;
}