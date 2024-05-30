#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }

    int j = n;
    for (int i = 0; i < m; i++)
    {
        ans[j] = arr1[i];
        j++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}