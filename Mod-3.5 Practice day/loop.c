#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    if (a >= 1 && a <= 1000)
    {
        for (i = 1; i <= a; i++)
        {
            printf("I Love Practice\n");
        }
    }
    return 0;
}