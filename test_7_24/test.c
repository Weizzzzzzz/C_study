// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         printf("Happy new year!Good luck!\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     long sum = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 1; i <= n;i++)
//     {
//         sum += i;
//     }
//     printf("%ld", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n = 0;
    int odd = 0;
    int even = 0;
    scanf("%d",&n);
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", odd, even);

    return 0;
}