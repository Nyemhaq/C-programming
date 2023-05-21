#include <stdio.h>
int main()
{
    int row, col, i, j, flag = 1;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if (row != col)
    {
        flag = 0;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary diagonal matrix\n");
    }
    else
    {
        printf("Not a diagonal matrix\n");
    }
    return 0;
}