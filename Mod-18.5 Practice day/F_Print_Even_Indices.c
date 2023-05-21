#include <stdio.h>
void even(int arr[], int a, int b)
{
    if (a <= 0)
        return;
    even(arr, a - 2, b + 2);
    printf("%d ", arr[b]);
}
int main()
{
    int a, i;
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        scanf("%d", &arr[i]);
    }
    even(arr, a, 1);
    return 0;
}