#include <stdio.h>
void print(int a)
{
    if (a == 6)
        return;
    printf("%d\n", a);
    print(a + 1);
}
int main()
{
    print(1);
    return 0;
}