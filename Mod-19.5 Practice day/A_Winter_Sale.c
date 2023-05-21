#include <stdio.h>
int main()
{
    float a, b, c = 0;
    scanf("%f %f", &a, &b);
    c = (100 / (100 - a)) * b;
    printf("%.2f\n", c);
    return 0;
}