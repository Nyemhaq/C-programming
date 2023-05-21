#include <stdio.h>
void print(int a)
{
    if (a == 0)
        return;
    print(a - 1);
    printf("%d\n", a);
}
int main()
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}