// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     while (scanf("%d", &n) == 1)
//     {
//         int i = 0;
//         int j = 0;
//         for (i = 0; i < n; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 if (((i > 0) && (i < n - 1)) && ((j > 0) && (j < n - 1)))
//                 {
//                     printf("  ");
//                 }
//                 else
//                 {
//                     printf("* ");
//                 }
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     while (scanf("%d", &n) != EOF)
//     {
//         int i = 0;
//         int j = 0;
//         for (i = 0; i < n; i++)
//         {
//             for (j = 0; j <= i; j++)
//             {
//                 if (i == (n - 1) || j == 0 || i == j)
//                 {
//                     printf("* ");
//                 }
//                 else
//                 {
//                     printf("  ");
//                 }
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 1; j <= i + 1; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}