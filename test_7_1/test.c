// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     printf("%d", 2 << (n - 1));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     long int age = 0;
//     long int second = 31560000;
//     scanf("%ld", &age);
//     printf("%ld", age * second);

//     return 0;
// }

#include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     float score[100] = {0};
//     float max = 0.0;
//     float min = 100.0;
//     float avg = 0.0;
//     float sum = 0.0;
//     int i = 0;
//     for (i = 0; i <= n-1; i++)
//     {
//         scanf("%f", &score[i]);
//         if (score[i] > max)
//         {
//             max = score[i];
//         }
//         if (score[i] < min)
//         {
//             min = score[i];
//         }
//         sum += score[i];
//         avg = sum / n;
//     }
//     printf("%.2f %.2f %.2f", max, min, avg);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     float p = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     float circumference = 0;
//     float area = 0;
//     circumference = a + b + c;
//     p = circumference / 2.0;
//     area = sqrt(p * (p - a) * (p - b) * (p - c));
//     printf("circumference=%.2f area=%.2f", circumference, area);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float n = 0;
//     float h = 0;
//     float m = 0;
//     scanf("%f %f %f", &n, &h, &m);
//     printf("%d\n", (int)(n - m / h));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float f = 0.0;
//     float c = 0.0;
//     scanf("%f", &f);
//     c = 5.0 / 9 * (f - 32);
//     printf("%.3f", c);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float r = 0.0;
//     scanf("%f", &r);
//     printf("%.2f", 3.14 * r * r);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float r1 = 0.0;
//     float r2 = 0.0;
//     float r = 0.0;
//     scanf("%f %f", &r1, &r2);
//     r = (r1 * r2) / (r1 + r2);
//     printf("%.1f", r);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float pi = 3.14;
//     int h = 0;
//     int r = 0;
//     float V = 0.0;
//     int n = 0;
//     scanf("%d %d", &h, &r);
//     V = pi * h * r * r;
//     n = (10000 / V) + 1;
//     printf("%d", n);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d", &a, &b);
    c = b + (b - a);
    printf("%d", c);

    return 0;
}