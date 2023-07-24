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

// #include <stdio.h>

// int main()
// {
//     int x, l, r;
//     scanf("%d %d %d", &x, &l, &r);
//     if (x >= l && x <= r)
//     {
//         printf("true\n");
//     }
//     else
//     {
//         printf("false\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     if ((n % 100 != 0 && n % 4 == 0) || n % 400 == 0)
//     {
//         printf("yes\n");
//     }
//     else
//     {
//         printf("no\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char ch = 0;
//     scanf("%c", &ch);
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 0;
//     int m = 0;
//     scanf("%d",&a);
//     m = a%100;
//     if((m>=3)&&(m<=5))
//     {
//         printf("spring\n");
//     }
//     else if((m>=6)&&(m<=8))
//     {
//         printf("summer\n");
//     }
//     else if((m>=9)&&(m<=11))
//     {
//         printf("autumn\n");
//     }
//     else {
//     printf("winter\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float w, h, BMI;
//     scanf("%f %f", &w, &h);
//     BMI = w / (h * h);
//     if ((BMI >= 18.5) && (BMI <= 23.9))
//     {
//         printf("Normal\n");
//     }
//     else
//     {
//         printf("Abnormal\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[4];
//     int max = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char n = 0;
    while ((scanf("%c", &n)) == 1)
    {
        if (n != '\n')
        {
            if (((n >= 'A') && (n <= 'Z')) || ((n >= 'a') && (n <= 'z')))
            {
                printf("%c is an alphabet.\n", n);
            }
            else
            {
                printf("%c is not an alphabet.\n", n);
            }
        }
    }

    return 0;
}