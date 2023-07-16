#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int m = n;
    if ((m % 2 == 0) || (m % 3 == 0) || (m % 7 == 0))
    {
        if (m % 2 == 0)
        {
            printf("2 ");
        }
        if (m % 3 == 0)
        {
            printf("3 ");
        }
        if (m % 7 == 0)
        {
            printf("7 ");
        }
    }
    else
    {
        printf("n ");
    }

    return 0;
}