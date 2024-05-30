#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);
        int cap = 0, sml = 0, num = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] > 64 && s[i] < 91)
            {
                cap++;
            }
            else if (s[i] > 96 && s[i] < 123)
            {
                sml++;
            }
            else if (s[i] > 47 && s[i] < 58)
            {
                num++;
            }
        }

        printf("%d %d %d\n", cap, sml, num);
    }

    return 0;
}