#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    int i, value, count[26] = {0};
    scanf("%s", ch);
    for (i = 0; i < strlen(ch); i++)
    {
        value = ch[i] - 'a';
        count[value]++;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }
    return 0;
}