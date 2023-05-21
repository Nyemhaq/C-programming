#include <stdio.h>
int main()
{
    char c[5] = {'N', 'A', 'Y', 'E', 'M'};
    char a[] = "FAHIMA\0";
    char b[14] = "Muhammad (s)";
    printf("%s\n", b);
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", c[i]);
    }
    printf("\n%s\n", a);
    printf("%d\n", sizeof(a));
    return 0;
}