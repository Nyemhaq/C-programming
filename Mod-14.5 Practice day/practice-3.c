#include <stdio.h>

int char_to_ascii(char a)
{
    return a;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    char_to_ascii(ch);
    printf("%d\n", ch);

    return 0;
}