#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int l = 0; l < k; l++)
        {
            printf(" ");
        }
        for (int j = i + 1; j > 0; j--)
        {
            printf("%d", j);
        }
        k--;
        printf("\n");
    }
    return 0;
}