#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000001];
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
        else if (ch[i] == ',')
        {
            ch[i] = ' ';
        }
    }
    printf("%s\n", ch);
    return 0;
}