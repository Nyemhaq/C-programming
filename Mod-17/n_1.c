#include <stdio.h>
void print(int a)
{
    if (a == 0)
        return;
    printf("%d\n", a);
    print(a - 1);
}
int main()
{
    print(5);
    return 0;
}