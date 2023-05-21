#include <stdio.h>
void print(int a)
{
    if (a == 0)
        return;
    printf("%d", a);
    if (a > 1)
        printf(" ");
    print(a - 1);
}
int main()
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}