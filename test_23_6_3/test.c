#include <stdio.h>

//static修饰局部变量
void test()
{
    static int a = 1;
    a++;
    printf("%d\n",a);
}
int main()
{
    int i = 0;
    while(i < 10)
    {
        test();
        i++;
    }

    return 0;
}

