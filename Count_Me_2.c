#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char s[100000];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}