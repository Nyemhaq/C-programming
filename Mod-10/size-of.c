#include <stdio.h>
int main()
{
    int a[5];
    long long int b[5];
    float c[5];
    double d[5];
    int p = sizeof(a) / sizeof(int);
    int q = sizeof(b) / sizeof(long long int);
    int r = sizeof(c) / sizeof(float);
    int s = sizeof(d) / sizeof(double);
    printf("Size of a = %d\n", sizeof(a));
    printf("Size of b = %d\n", sizeof(b));
    printf("Size of c = %d\n", sizeof(c));
    printf("Size of a = %d\n", sizeof(d));
    printf("Size of int = %d\n", sizeof(int));
    printf("Size of Long Long int = %d\n", sizeof(long long int));
    printf("Size of float = %d\n", sizeof(float));
    printf("Size of double = %d\n", sizeof(double));
    printf("Index of a is %d\n", p);
    printf("Index of b is %d\n", r);
    printf("Index of c is %d\n", r);
    printf("Index of d is %d\n", s);
    return 0;
}