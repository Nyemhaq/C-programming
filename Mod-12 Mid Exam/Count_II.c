#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1001];
    int count = 0;
    scanf("%s", ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}