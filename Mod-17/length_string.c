#include <stdio.h>
int length(char a[], int b)
{
    if (a[b] == '\0')
        return 0;
    int l = length(a, b + 1);
    return l + 1;
}
int main()
{
    char a[100];
    scanf("%s", a);
    int l = length(a, 0);
    printf("%d\n", l);
    return 0;
}