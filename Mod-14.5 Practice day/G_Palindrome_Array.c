#include <stdio.h>
int main()
{
    int a, i, j, flag = 0;
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++)
    {
        for (j = a - 1; j >= 0; j--)
        {
            // printf("%d ", arr[j]);
            printf("%d %d\n", arr[i], arr[j]);
            if (arr[i] == arr[j])
            {
                flag = 1;
            }
            i++;
        }
        break;
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}