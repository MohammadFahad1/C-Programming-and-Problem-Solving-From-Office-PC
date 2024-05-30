#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n - 1, s = 0;
    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= s; j++)
        {
            printf("*");
        }

        if (i >= n - 1)
        {
            s -= 2;
            k++;
        }
        else
        {
            s += 2;
            k--;
        }

        printf("\n");
    }
    return 0;
}