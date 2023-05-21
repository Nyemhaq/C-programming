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
    int c;
    scanf("%d", &c);
    for (i = 0; i < row; i++)
    {
        printf("%d ", arr[i][c]);
    }
    return 0;
}