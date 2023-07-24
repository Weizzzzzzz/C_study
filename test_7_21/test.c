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

// #include <stdio.h>

// int main()
// {
//     int y = 0;
//     int m = 0;
//     while (scanf("%4d %d", &y, &m) == 2)
//     {
//         if (m == 4 || m == 6 || m == 9 || m == 11)
//         {
//             printf("30\n");
//         }
//         else if (m == 2)
//         {
//             if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)
//             {
//                 printf("29\n");
//             }
//             else
//             {
//                 printf("28\n");
//             }
//         }
//         else
//         {
//             printf("31\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int math = 0;
//     int chinese = 0;
//     int english = 0;
//     while (scanf("%d %d %d", &math, &chinese, &english) == 3)
//     {
//         if ((math + chinese + english) / 3 >= 60)
//         {
//             printf("NO\n");
//         }
//         else
//         {
//             printf("YES\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     char x = 0;
//     int mun = 0;
//     int m = 0;
//     int ret = 0;
//     char x1 = 0;
//     scanf("%d-%d-%d-%c", &a, &b, &c, &x);
//     mun = a * 100000000 + b * 100000 + c;
//     while (mun > 0)
//     {
//         int i = 0;
//         for (i = 9; i > 0; i--)
//         {
//             m = mun % 10;
//             ret += (m * i);
//             mun /= 10;
//         }
//     }
//     x1 = ret % 11;
//     // 如果x1的值等于10，那么将x1赋值为字符’X’，否则将x1的值与字符’0’连接起来。
//     x1 = x1 == 10 ? 'X' : x1 + '0';
//     if (x == x1)
//     {
//         printf("Right\n");
//     }
//     else
//     {
//         printf("%d-%d-%d-%c", a, b, c, x1);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double x1 = 0.0;
//     double x2 = 0.0;
//     char sign = 0.0;
//     scanf("%lf %c %lf", &x1, &sign, &x2);
//     if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
//     {
//         printf("Invalid operation!\n");
//         goto end;
//     }
//     if (sign == '/' && x2 == 0.0)
//     {
//         printf("Wrong!Division by zero!\n");
//         goto end;
//     }
//     if (sign == '+')
//     {
//         printf("%.4f+%.4f=%.4f", x1, x2, x1 + x2);
//     }
//     else if (sign == '-')
//     {
//         printf("%.4f-%.4f=%.4f", x1, x2, x1 - x2);
//     }
//     if (sign == '*')
//     {
//         printf("%.4f*%.4f=%.4f", x1, x2, x1 * x2);
//     }
//     if (sign == '/')
//     {
//         printf("%.4f/%.4f=%.4f", x1, x2, x1 / x2);
//     }
// end:
//     return 0;
// }

#include <stdio.h>

double Add(double x,double y)
{
    return x + y;
}

double Sub(double x,double y)
{
    return x - y;
}

double Mul(double x, double y)
{
    return x * y;
}

double Div(double x, double y)
{
    return x / y;
}

int main()
{
    double x1 = 0.0;
    double x2 = 0.0;
    char sign = 0.0;
    double ret = 0.0;
    scanf("%lf %c %lf", &x1, &sign, &x2);
    if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
    {
        printf("Invalid operation!\n");
        goto end;
    }
    if (sign == '/' && x2 == 0.0)
    {
        printf("Wrong!Division by zero!\n");
        goto end;
    }
    if (sign == '+')
    {
        ret=Add(x1, x2);
    }
    else if (sign == '-')
    {
        ret=Sub(x1, x2);
    }
    if (sign == '*')
    {
        ret=Mul(x1, x2);
    }
    if (sign == '/')
    {
        ret=Div(x1, x2);
    }
    printf("%lf", ret);
end:
    return 0;
}