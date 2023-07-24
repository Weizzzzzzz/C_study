#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
    printf("**********************\n");
    printf("******* 1.Play *******\n");
    printf("******* 0.Exit *******\n");
    printf("**********************\n");
}

void game()
{
    int ret = rand() % 100 + 1;
    int guess = 0;
    while(1)
    {
        printf("请输入猜的数字>:");
        scanf("%d", &guess);
        if(guess > ret)
            printf("猜大了\n");
        else if(guess < ret)
            printf("猜小了\n");
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择>:");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                break;
            defualt:
                printf("输入错误，请重新输入\n");
        }
    } while(input);

    return 0;
}