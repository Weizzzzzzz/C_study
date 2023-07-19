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

// #include <stdio.h>

// int main()
// {
//     int arr[10];
//     int i = 0;
//     int positive = 0;
//     int negative = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] > 0)
//         {
//             positive++;
//         }
//         else
//         {
//             negative++;
//         }
//     }
//     printf("positive:%d\n", positive);
//     printf("negative:%d\n", negative);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double price = 0.0;
//     int month = 0;
//     int day = 0;
//     int flag = 0;
//     // 输入
//     scanf("%lf %d %d %d", &price, &month, &day, &flag);
//     // 计算
//     if (flag == 1)
//     {
//         if ((month == 11) && (day == 11))
//         {
//             price = price * 0.7 - 50;
//         }
//         if ((month == 12) && (day == 12))
//         {
//             price = price * 0.8 - 50;
//         }
//     }
//     if (flag == 0)
//     {
//         if ((month == 11) && (day == 11))
//         {
//             price = price * 0.7;
//         }
//         if ((month == 12) && (day == 12))
//         {
//             price = price * 0.8;
//         }
//     }
//     // 输出
//     if (price <= 0)
//     {
//         printf("%.2lf", price = 0);
//     }
//     else
//     {
//         printf("%.2lf", price);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a = 0.0;
//     char b = 0;
//     int fee = 0;
//     scanf("%f %c", &a, &b);
//     if (a < 1)
//     {
//         fee = 20;
//     }
//     else
//     {
//         fee = 20 + ceil(a - 1);
//     }

//     if (b == 'y')
//     {
//         fee += 5;
//     }
//     printf("%d", fee);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float price = 0.0;
//     scanf("%f", &price);
//     if (price >= 100 && price < 500)
//     {
//         price *= 0.9;
//     }
//     if (price >= 500 && price < 2000)
//     {
//         price *= 0.8;
//     }
//     if (price >= 2000 && price < 5000)
//     {
//         price *= 0.7;
//     }
//     if (price >= 5000)
//     {
//         price *= 0.6;
//     }
//     printf("%.1f", price);

//     return 0;
// }

