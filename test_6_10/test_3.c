#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void game()
{
    int ret = rand() % 100 + 1;
    int guess = 0;
    while (1)
    {
        printf("请输入数字>:");
        scanf("%d", &guess);
        if (guess > ret)
            printf("猜大了\n");
        else if (guess < ret)
            printf("猜小了\n");
        else
        {
            printf("恭喜你，猜对了\n");
            system("shutdown -a");
            break;
        }
    }
}

int main()
{
    int input = 0;
    system("shutdown -s -t 60");
    printf("你的电脑将在一分钟后关机,猜出0~100之间的数字,取消关机\n");
    srand((unsigned int)time(NULL));
    game();

    return 0;
}