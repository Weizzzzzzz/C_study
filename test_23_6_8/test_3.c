#include <stdio.h>

////计算n的阶乘
// int main()
// {
//     int i = 1;
//     int n = 0;
//     int ret = 1;
//     scanf("%d", &n);
//     for (i = 1;i <= n;i++)
//         ret = ret * i;
//     printf("%d\n", ret);
// 
//     return 0;
// }
// 
// //计算1~10的阶乘相加
// int main()
// {
//     int i = 1;
//     int ret = 1;
//     int sum = 0;
//     for (i = 1;i <= 10;i++)
//     {
//         ret = ret * i;
//         sum = sum + ret;
//     }
//     printf("%d\n", sum);
// 
//     return 0;
// }
// 
// int main()
// {
//     int i = 1;
//     int ret = 1;
//     int sum = 0;
//     while(i <= 10)
//     {
//         ret = ret * i;
//         sum = sum + ret;
//         i++;
//     }
//     printf("%d\n", sum);

//     return 0;
// }
// 
int main()
{
    int i = 1;
    int ret = 1;
    int sum = 0;
    do
    { 
        ret = ret * i;
        sum = sum + ret;
        i++;
    } while (i <= 10);
    
    printf("%d\n", sum);

    return 0;
}
