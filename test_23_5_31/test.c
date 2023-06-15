#include <stdio.h>

//判断大小
// int Max(int x,int y)
// {
//     if(x > y)
//         return x;
//     else
//         return y;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d%d", &a,&b);
//     int r = Max(a, b);
//     printf("%d\n", r);

//     return 0;
// }
int main()
{
    int x = 0;
    int y = 0;
    //输入
    scanf("%d", &x);
    //输出
    if(x>0)
        y = -1;
    else if(x=0)
        y = 0;
    else
        y = 1;
    printf("%d\n", y);
    return 0;
}