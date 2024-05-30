#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cTwo = 0;
    int cThree = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cTwo++;
        }
        else if (a[i] % 3 == 0)
        {
            cThree++;
        }
    }

    printf("%d %d", cTwo, cThree);

    return 0;
}