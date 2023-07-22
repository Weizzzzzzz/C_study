// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     while (scanf("%d %d %d", &a, &b, &c) == 3)
//     {
//         if ((a + b > c) && (a + c > b) && (b + c > a))
//         {
//             if (a == b && b == c)
//             {
//                 printf("Equilateral triangle!\n");
//             }
//             else if ((a == b) || (a == c) || (b == c))
//             {
//                 printf("Isosceles triangle!\n");
//             }
//             else
//             {
//                 printf("Ordinary triangle!\n");
//             }
//         }
//         else
//         {
//             printf("Not a triangle!\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int y, m, d;
//     int y1, m1, d1;
//     scanf("%d %d %d", &y, &m, &d);
//     scanf("%d %d %d", &y1, &m1, &d1);
//     if (y < y1)
//     {
//         printf("yes\n");
//     }
//     else if (y == y1)
//     {
//         if (m < m1)
//         {
//             printf("yes\n");
//         }
//         else if (m == m1)
//         {
//             if (d <= d1)
//             {
//                 printf("yes\n");
//             }
//             else
//             {
//                 printf("no\n");
//             }
//         }
//         else
//         {
//             printf("no\n");
//         }
//     }
//     else
//     {
//         printf("no\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     float a = 0.0, b = 0.0, c = .0;
//     float t = 0.0;
//     while (scanf("%f %f %f", &a, &b, &c) == 3)
//     {
//         t = b * b - 4 * a * c;
//         if (a == 0)
//         {
//             printf("Not quadratic equation\n");
//         }
//         else
//         {
//             if (t == 0)
//             {
//                 if (-b + sqrt(t) == 0)
//                 {
//                     printf("x1=x2=%.2f\n", (-b + sqrt(t)));
//                 }
//                 else
//                 {
//                     printf("x1=x2=%.2f\n", (-b + sqrt(t)) / (2 * a));
//                 }
//             }
//             else if (t > 0)
//             {
//                 printf("x1=%.2f;x2=%.2f\n", ((-b) - sqrt(t)) / (2 * a),
//                        ((-b) + sqrt(t)) / (2 * a));
//             }
//             else
//             {
//                 printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", (-b) / (2 * a), sqrt(-t) / (2 * a),
//                        (-b) / (2 * a), sqrt(-t) / (2 * a));
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int y = 0;
    int m = 0;
    while (scanf("%4d %d", &y, &m) == 2)
    {
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("30\n");
        }
        else if (m == 2)
        {
            if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)
            {
                printf("29\n");
            }
            else
            {
                printf("28\n");
            }
        }
        else
        {
            printf("31\n");
        }
    }

    return 0;
}