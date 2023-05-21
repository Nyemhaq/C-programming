#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int r;
    scanf("%d", &r);
    for (j = 0; j < col; j++)
    {
        printf("%d ", arr[r][j]);
    }
    return 0;
}