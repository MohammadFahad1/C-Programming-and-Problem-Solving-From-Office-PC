#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        printf("%d\n", d - (m1 * d) / (m1 + m2));
    }

    return 0;
}