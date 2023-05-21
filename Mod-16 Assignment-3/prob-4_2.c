#include <stdio.h>
#include <stdlib.h>
void math() // no return with no argument
{
    int a, b;
    scanf("%d", &a);
    b = abs(a);
    printf("%d\n", b);
}
int main()
{
    math();
    return 0;
}