// #include <stdio.h>

// int main()
// {
//     char ch = 0;
//     while (scanf("%c", &ch) == 1)
//     {
//         getchar();
//         printf("%c\n", ch + 32);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0xABCDEF;
//     printf("%15d\n", i);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 1234;
//     printf("%#o %#X",a,a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char a = 0;
//     int b = 0;
//     float c = 0;
//     scanf("%c%d%f", &a, &b, &c);
//     printf("%c %d %.6f", a, b, c);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d", &a, &b, &c);
//     printf("%d%8d%8d", a, b, c);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%x %o", &a, &b);
//     c = a + b;
//     printf("%d", c);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     printf("%d", a + b);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d%d", &a, &b);
//     printf("%d", a / b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d%d", &a, &b);
//     printf("%d", a % b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float num = 0.0;
//     scanf("%f", &num);
//     printf("%d", (int)num % 10);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 0;
//     scanf("%d", &x);
//     printf("%d", 100 * x);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     printf("%d %d", a / b, a % b);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     printf("%d", num % 10);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     num = (num / 10) % 10;
//     printf("%d", num);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int X = 0;
//     int N = 0;
//     int res = 0;
//     scanf("%d %d", &X, &N);
//     res = (X + N - 1) % 7 + 1;
//     printf("%d", res);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int h = 0;
    int m = 0;
    int s = 0;
    scanf("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;
    printf("%d %d %d", h, m, s);

    return 0;
}