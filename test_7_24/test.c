// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         printf("Happy new year!Good luck!\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     long sum = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n;i++)
//     {
//         sum += i;
//     }
//     printf("%ld", sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int odd = 0;
//     int even = 0;
//     scanf("%d",&n);
//     int i = 0;
//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("%d %d", odd, even);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int count = 0;
//     int i = 0;
//     int j = 0;
//     for (i = 100; i <= 999; i++)
//     {
//         int flag = 1;
//         for (j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int j = 0;
//     for (i = 1; i < 10; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d*%d=%2d ", j, i, i * j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int ret = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n; i += 2)
//     {
//         ret += i;
//     }
//     for (i = 2; i <= n; i += 2)
//     {
//         ret -= i;
//     }
//     printf("%d", ret);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     double res = 0.0f;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n; i++)
//     {
//         res += (1.0 / i);
//     }
//     printf("%lf", res);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int sum = 0;
//     double res = 0.0f;
//     int flag = 1;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n; i++)
//     {
//         sum += flag * (2 * i - 1);
//         res += 1.0 / sum;
//         flag = -flag;
//     }
//     printf("%.3lf\n", res);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int sum = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n; i++)
//     {
//         int j = 0;
//         for (j = 1; j <= i; j++)
//         {
//             sum += j;
//         }
//     }
//     printf("%d", sum);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int res = 0;
//     scanf("%d", &n);
//     while (n)
//     {
//         res += n % 10;
//         n /= 10;
//     }
//     printf("%d", res);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int count = 0;
//     scanf("%d", &n);
//     while (n != 1)
//     {
//         if (n % 2 == 0)
//         {
//             n /= 2;
//             count++;
//         }
//         else
//         {
//             n = n * 3 + 1;
//             count++;
//         }
//     }
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int count = 0;
//     int num = 0;
//     int i = 0;
//     for (i = 1; i <= 2019; i++)
//     {
//         num = i;
//         while (num)
//         {
//             if (num % 10 == 9)
//             {
//                 count++;
//                 break;
//             }
//             num /= 10;
//         }
//     }
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int chinese = 0;
//     int math = 0;
//     int english = 0;
//     int average = 0;
//     int count = 0;
//     while (scanf("%d %d %d", &chinese, &math, &english) == 3)
//     {
//         average = (chinese + math + english) / 3;
//         if (average < 60)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int m = 0;
    int n = 0;
    int flag = 0;
    int a = 0, b = 0, c = 0;
    while (scanf("%d %d", &m, &n) == 2)
    {
        int i = 0;
        for (i = m; i <= n; i++)
        {
            a = i / 100;        // 百位数
            b = (i % 100) / 10; // 十位数
            c = i % 10;         // 个位数
            if (a * a * a + b * b * b + c * c * c == i)
            {
                flag += 1;
                printf("%d ", i);
            }
        }
        if (flag == 0)
        {
            printf("no\n");
        }
        else
            printf("\n");
    }

    return 0;
}