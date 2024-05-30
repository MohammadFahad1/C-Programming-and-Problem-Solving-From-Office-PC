#include <stdio.h>
#include <stdint.h>

int count_before_one(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            return i;
        }
    }
    return N;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("%d", count_before_one(A, N));
    return 0;
}