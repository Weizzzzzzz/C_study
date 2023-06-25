#include <stdio.h>

int main()
{
    char ch = 0;
    while (scanf("%c", &ch) == 1)
    {
        getchar();
        printf("%c\n", ch + 32);
    }

    return 0;
}