#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (j = 0; j < b; j++)
    {
        printf("%d ", arr[a - 1][j]);
    }
    printf("\n");
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i][b - 1]);
    }
    return 0;
}