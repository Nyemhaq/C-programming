#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    int count = 0;
    scanf("%s", ch);
    int len = strlen(ch);
    for (int i = 0; i < len; i++)
    {
        if (ch[len - i - 1] != ch[i])
        {
            count++;
            break;
        }
    }
    if (count++)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}