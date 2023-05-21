#include <stdio.h>
void nth(int a)
{
    int i;
    for (i = 1; i <= a; i++)
    {
        printf("%d", i);
        if (i < a)
            printf(" ");
    }
}
int main()
{
    int a;
    scanf("%d", &a);
    nth(a);
    return 0;
}