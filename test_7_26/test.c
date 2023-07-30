// #include <stdio.h>

// int main()
// {
//     int score = 0;
//     int max = 0;
//     int min = 100;
//     int sum = 0;
//     int count = 0;
//     // 输入
//     while (scanf("%d ", &score) == 1)
//     {
//         sum += score;
//         max = score > max ? score : max;
//         min = score < min ? score : min;
//         count++;
//         if (count == 7)
//         {
//             // 输出
//             printf("%.2f\n", (sum - max - min) / 5.0);
//             //重置
//             max = 0;
//             min = 100;
//             sum = 0;
//             count = 0;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     while (n)
//     {
//         printf("%d", n % 10);
//         n /= 10;
//     }

//     return 0;
// }

// #include <stdio.h>
// void print(int x)
// {
//     if (x > 5)
//     {
//         print(x / 6);
//     }
//     printf("%d", x % 6);
// }

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     print(n);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int date = 0;
//     int k = 1;
//     int sum = 0;
//     scanf("%d", &date);
//     for (int i = 1; k <= date; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (k > date)
//             {
//                 break;
//             }
//             sum += i;
//             k++;
//         }
//     }
//     printf("%d", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 0;
    int num = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int reverse = 0;
        num = i;
        while (num)
        {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }
        if (reverse == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}