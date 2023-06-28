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

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d%8d%8d", a, b, c);
    return 0;
}