// #include <stdio.h>

// int main()
// {
//     int r = 0;
//     scanf("%d", &r);
//     printf("%.2f", 4.0 / 3 * (3.14 * r * r * r));

//     return 0;
// }

#include <stdio.h>

int main()
{
    int hour = 0;
    int minute = 0;
    int k = 0;
    scanf("%d:%d %d", &hour, &minute, &k);
    hour = (hour + (minute + k) / 60) % 24;
    minute = (minute + k) % 60;

    printf("%02d:%02d", hour, minute);

    return 0;
}