#include <stdio.h>
#include <string.h>
int main()
{
    int a, i, len = 0;
    char ch[101];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%s", ch);
        len = strlen(ch);
        if (len > 10)
        {
            printf("%c%d%c\n", ch[0], len - 2, ch[len - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }
    return 0;
}
