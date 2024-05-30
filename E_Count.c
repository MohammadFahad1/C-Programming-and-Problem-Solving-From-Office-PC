#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    int sum = 0;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - 48;
    }

    printf("%d", sum);

    return 0;
}