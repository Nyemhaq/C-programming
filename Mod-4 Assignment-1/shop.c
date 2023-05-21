#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    if (a >= 1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes\n");
    }
    else if (a < 1500 && a > 1000)
    {
        printf("I will buy Punjabi\n");
    }
    else
    {
        printf("Bad luck!\n");
    }
    return 0;
}