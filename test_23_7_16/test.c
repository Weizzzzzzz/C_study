// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int m = n;
//     if ((m % 2 == 0) || (m % 3 == 0) || (m % 7 == 0))
//     {
//         if (m % 2 == 0)
//         {
//             printf("2 ");
//         }
//         if (m % 3 == 0)
//         {
//             printf("3 ");
//         }
//         if (m % 7 == 0)
//         {
//             printf("7 ");
//         }
//     }
//     else
//     {
//         printf("n ");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stddef.h>

// struct S2
// {
//     char c1;
//     char c2;
//     int i;
// };

// int main()
// {
//     printf("%d\n", offsetof(struct S2, c1));
//     printf("%d\n", offsetof(struct S2, c2));
//     printf("%d\n", offsetof(struct S2, i));

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[10];
    int i = 0;
    int positive = 0;
    int negative = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("positive:%d\n", positive);
    printf("negative:%d\n", negative);

    return 0;
}