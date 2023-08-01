// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     while (scanf("%d", &num) != EOF)
//     {
//         for (int i = 0; i < num; i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int side = 0;
//     while (scanf("%d", &side) == 1)
//     {
//         for (int i = 0; i < side; i++)
//         {
//             for (int j = 0; j < side; j++)
//             {
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int side = 0;
//     while (scanf("%d", &side) == 1)
//     {
//         for (int i = 0; i < side; i++)
//         {
//             for (int j = 0; j <= i; j++)
//             {
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int side = 0;
//     while (scanf("%d", &side) == 1)
//     {
//         for (int i = 0; i < side; i++)
//         {
//             for (int j = 0; j < side - i; j++)
//             {
//                 printf("* ");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int side = 0;
    while (scanf("%d", &side) == 1)
    {
        for (int i = 0; i < side; i++)
        {
            int j = 0;
            for (j = 0; j < side - 1 - i; j++)
            {
                printf("  ");
            }
            for (; j < side; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}