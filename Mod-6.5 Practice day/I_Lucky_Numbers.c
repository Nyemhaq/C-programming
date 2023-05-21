#include <stdio.h>
int main()
{
    int a, div, mod;
    scanf("%d", &a);
    div = a / 10;
    mod = a % 10;
    if (div != 0 && mod != 0)
    {
        if (div % mod == 0 || mod % div == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}