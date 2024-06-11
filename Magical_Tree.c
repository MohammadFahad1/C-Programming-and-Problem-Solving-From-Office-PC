#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num_cols = 10 + n;
    int num_rows = num_cols / 2;

    for (int i = 0; i <= num_rows; i++)
    {
        for (int j = 0; j < num_rows - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int num_cols = 10 + n;
//     int num_rows = num_cols / 2;

//     for (int i = 0; i <= num_rows; i++)
//     {
//         for (int j = 0; j < num_rows - i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j <= 2 * i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("     ");
//         for (int j = 0; j < n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
