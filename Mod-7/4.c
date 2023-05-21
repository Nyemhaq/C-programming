#include <stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a], sum = 0;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d\n", sum);
    return 0;
}