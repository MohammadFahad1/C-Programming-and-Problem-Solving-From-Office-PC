#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t = n - 1;
    int s = 0;
    for (int i = 0; i < n * 2; i++)
    {
        for (int k = t; k > 0; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= s; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i >= n - 1)
        {
            s -= 2;
            t++;
        }
        else
        {
            s += 2;
            t--;
        }

        printf("\n");
    }
    return 0;
}