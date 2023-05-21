#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    strcpy(a, b);
    printf("%s %s\n", a, b);
    return 0;
}