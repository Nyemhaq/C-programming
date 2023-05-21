#include <stdio.h>
void fun(int ar[], int a, int i)
{
    if (i == a)
        return;
    fun(ar, a, i + 1);
    printf("%d ", ar[i]);
}
int main()
{
    int a, i;
    scanf("%d", &a);
    int ar[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, a, 0);
    return 0;
}