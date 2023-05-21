#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100], c, d[100];
    int a_len = 0, b_len = 0;
    scanf("%s %s", a, b);
    a_len = strlen(a);
    b_len = strlen(b);
    strcpy(d, a);
    printf("%d %d\n%s\n", a_len, b_len, strcat(a, b));
    c = d[0];
    d[0] = b[0];
    b[0] = c;
    printf("%s %s\n", d, b);
    return 0;
}