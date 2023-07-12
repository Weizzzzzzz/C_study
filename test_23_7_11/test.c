// #include <stdio.h>

// int main()
// {
//     int grade = 0;

//     while ((scanf("%d", &grade)) != EOF)
//     {
//         if (grade >= 60)
//         {
//             printf("Pass\n");
//         }
//         else
//         {
//             printf("Fail\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     while ((scanf("%d", &i)) != EOF)
//     {
//         if (i % 2 == 0)
//         {
//             printf("Even\n");
//         }
//         else
//         {
//             printf("Odd\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char ch = 0;
//     char arr[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
//     while ((scanf("%c", &ch)) != EOF)
//     {
//         if (ch != '\n')
//         {
//             int i = 0;
//             for (i = 0; i < 10; i++)
//             {
//                 if (ch == arr[i])
//                 {
//                     printf("Vowel\n");
//                     break;
//                 }
//             }
//             if (i == 10)
//             {
//                 printf("Consonant\n");
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x >= l && x <= r)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}