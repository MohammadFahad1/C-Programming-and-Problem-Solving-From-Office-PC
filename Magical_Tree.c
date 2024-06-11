#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num_cols = 10 + n;
    int num_rows = num_cols / 2;

    int k = 0;
    int s = 0;

    for (int i = 0; i <= num_rows; i++)
    {
        for (int j = k; j < num_rows; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= s; j++)
        {
            printf("*");
        }
        k++;
        s += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}