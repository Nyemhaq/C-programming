#include <stdio.h>
int count_before_zero(int arr[], int a)
{
    int i, count = 0;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a, i, b;
    scanf("%d", &a);
    int arr[a];
    b = count_before_zero(arr, a);
    printf("%d\n", b);
    return 0;
}