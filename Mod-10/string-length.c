#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int count = 0, i;
    for (i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}