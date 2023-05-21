#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    int i, cap = 0, sml = 0;
    fgets(s, 1001, stdin);
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cap++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sml++;
        }
    }
    printf("Capital - %d\n", cap);
    printf("Small - %d\n", sml);
    printf("Spaces - %d\n", l - cap - sml);
    return 0;
}