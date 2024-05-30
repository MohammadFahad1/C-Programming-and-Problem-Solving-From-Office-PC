#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int x, found = 0;
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                found++;
            }
        }
        if (found > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}