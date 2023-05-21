#include <stdio.h>
int main()
{
    int row, col, i, j, count = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int e = row * col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    // printf("%d", count);
    if (count == e)
    {
        printf("Zero matrix\n");
    }
    else
    {
        printf("Not a zero matrix\n");
    }
    return 0;
}