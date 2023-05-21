#include <stdio.h>

char small_to_capital(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    return ch;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char a = small_to_capital(ch);
    printf("%c\n", a);
    return 0;
}