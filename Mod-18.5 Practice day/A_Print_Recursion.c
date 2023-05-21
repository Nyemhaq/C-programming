#include <stdio.h>
void print(int a)
{
    if (a == 0)
        return;
    printf("I love Recursion\n");
    print(a - 1);
}
int main()
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}