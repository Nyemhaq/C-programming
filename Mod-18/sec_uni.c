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
            if ((i + j) == row - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
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
        printf("Secondary unit matrix\n");
    }
    else
    {
        printf("Not a unit matrix\n");
    }
    return 0;
}