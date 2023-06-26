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

#include <stdio.h>

int main() {
    int a = 1234;
    printf("%#o %#X",a,a);
    return 0;
}