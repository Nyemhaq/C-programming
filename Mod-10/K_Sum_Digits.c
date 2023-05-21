#include <stdio.h>
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    char ch[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%c", &ch[i]);
        sum = sum + ch[i];
    }
    printf("%d\n", sum);
    return 0;
}