#include <stdio.h>
int main()
{
    long long int a, b, i, j, swap = 0, sum = 0;
    scanf("%lld %lld", &a, &b);
    long long int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (i = 0; i < a - 1; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (arr[i] < arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for (i = 0; i < b; i++)
    {
        sum = sum + arr[i];
    }
    printf("%lld\n", sum);
    return 0;
}