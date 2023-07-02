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

int main()
{
    int n = 0;
    scanf("%d", &n);
    float score[100] = {0};
    float max = 0.0;
    float min = 100.0;
    float avg = 0.0;
    float sum = 0.0;
    int i = 0;
    for (i = 0; i <= n-1; i++)
    {
        scanf("%f", &score[i]);
        if (score[i] > max)
        {
            max = score[i];
        }
        if (score[i] < min)
        {
            min = score[i];
        }
        sum += score[i];
        avg = sum / n;
    }
    printf("%.2f %.2f %.2f", max, min, avg);
    return 0;
}