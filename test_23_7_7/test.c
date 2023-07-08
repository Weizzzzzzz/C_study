// #include <stdio.h>

// int main()
// {
//     int r = 0;
//     scanf("%d", &r);
//     printf("%.2f", 4.0 / 3 * (3.14 * r * r * r));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int hour = 0;
//     int minute = 0;
//     int k = 0;
//     scanf("%d:%d %d", &hour, &minute, &k);
//     hour = (hour + (minute + k) / 60) % 24;
//     minute = (minute + k) % 60;

//     printf("%02d:%02d", hour, minute);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 0;
//     int m = 0;
//     scanf("%d", &n);
//     m = 4 * (n / 12) + 2;
//     printf("%d", m);

//     return 0;
// }

#include <stdio.h>

long long is_GCD(long long n, long long m)
{
    while (n % m)
    {
        long long tmp = n % m;
        n = m;
        m = tmp;
    }
    return m;
}

long long is_LCM(long long n, long long m, long long G)
{
    long long L = (n * m) / G;
    return L;
}

int main()
{
    long long n = 0;
    long long m = 0;
    long long G = 0;
    long long L = 0;
    // 输入
    scanf("%lld %lld", &n, &m);
    // 求最大公约数
    G = is_GCD(n, m);
    // 求最小公倍数
    L = is_LCM(n, m, G);
    // 输出
    printf("%lld\n", G + L); 

    return 0;
}