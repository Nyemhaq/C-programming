#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int m = 0, n = 0;
    m = strlen(a);
    n = strlen(b);
    printf("%d %d\n", m, n);
    printf("%s %s\n", a, b);
    return 0;
}