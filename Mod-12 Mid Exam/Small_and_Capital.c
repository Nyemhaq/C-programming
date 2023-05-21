#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    int cap = 0, sma = 0;
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            cap++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            sma++;
        }
    }
    printf("%d %d\n", cap, sma);
    return 0;
}