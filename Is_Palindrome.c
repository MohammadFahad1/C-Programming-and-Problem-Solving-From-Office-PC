#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int n = strlen(s);
    int j = 0;
    char backward[n];
    for (int i = n - 1; i >= 0; i--)
    {
        // printf("%c", s[i]);
        backward[j] = s[i];
        j++;
    }
    backward[n] = '\0';
    if (strcmp(s, backward) == 0)
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
    char s[1001];
    scanf("%s", s);
    is_palindrome(s);
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}