#include <stdio.h>
#include <math.h>
double math() // return with no argument
{
    double a, b;
    scanf("%lf", &a);
    b = sqrt(a);
    return b;
}
int main()
{
    double a = math();
    printf("%.2lf\n", a);
    return 0;
}