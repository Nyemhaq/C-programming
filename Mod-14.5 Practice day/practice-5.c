#include <stdio.h>

char capital_to_small(char ch)
{
    if (ch >= 'A' && ch <= 'z')
    {
        ch = ch + 32;
    }
    return ch;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char a = capital_to_small(ch);
    printf("%c\n", a);
    return 0;
}