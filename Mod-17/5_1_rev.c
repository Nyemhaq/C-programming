#include <stdio.h>
void print(int a)
{
    if (a == 6)
        return;
    print(a + 1);
    printf("%d\n", a);
}
int main()
{
    print(1);
    return 0;
}