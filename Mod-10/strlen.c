#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int l = 0;
    l = strlen(a);
    printf("%d", l);
    return 0;
}