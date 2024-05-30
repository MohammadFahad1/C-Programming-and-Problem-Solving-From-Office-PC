#include <stdio.h>

void fun(int n)
{
    if (n == 0)
        return;
    int i = n % 10;
    printf("%d ", i);
    fun(n / 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        printf("\n");
    }

    return 0;
}