#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    int n;
    scanf("%d", &n);
    int b[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    int arr[m + n];
    for (int i = 0; i < m; i++)
    {
        arr[i] = a[i];
    }
    int i = m;
    for (int j = 0; j < n; j++)
    {
        arr[i] = b[j];
        i++;
    }
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}