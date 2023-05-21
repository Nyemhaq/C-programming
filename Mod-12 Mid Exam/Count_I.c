#include <stdio.h>
int main()
{
    int a, i, even = 0, odd = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
    return 0;
}