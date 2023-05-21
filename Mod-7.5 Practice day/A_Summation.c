#include <stdio.h>
int main()
{
    long long int a, i, sum = 0;
    scanf("%lld", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        printf("%lld\n", sum * (-1));
    }
    else
    {
        printf("%lld\n", sum);
    }
    return 0;
}