#include <stdio.h>
#include <string.h>
int my_len(char ch[])
{
    int i = 0, b = 0;
    while (ch[i] != '\0')
    {
        b++;
        i++;
    }
    return b;
}
int main()
{
    char ch[100];
    scanf("%s", ch);
    int b = my_len(ch);
    printf("%d\n", b);
    return 0;
}