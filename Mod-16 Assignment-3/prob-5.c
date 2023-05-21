// #include <stdio.h>
// #include <string.h>
// int is_palindrome(char a[])
// {
//     int len, i, count = 0;
//     len = strlen(a);
//     for (i = 0; i < len; i++)
//     {
//         if (a[len - i - 1] != a[i])
//         {
//             count++;
//         }
//     }
//     if (count++)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }
// int main()
// {
//     char ch[100];
//     int count = 0, b;
//     scanf("%s", ch);
//     b = is_palindrome(ch);
//     if (b == 1)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int is_palindrome(char a[])
{
    char b[100];
    int i, j, len = 0, cmp;
    len = strlen(a);
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[len] = '\0';
    cmp = strcmp(a, b);
    if (cmp == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char a[100];
    scanf("%s", a);
    int b = is_palindrome(a);
    if (b == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}