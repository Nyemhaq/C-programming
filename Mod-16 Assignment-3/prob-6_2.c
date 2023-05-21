#include <stdio.h>
int refer(int *a)
{
    *a = 100;
    return a;
}
int main()
{
    int a = 99, b;
    refer(&a);
    printf("%d\n", a);
    return 0;
}