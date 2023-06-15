#include "game.h"

void menu()
{
    printf("********************\n");
    printf("********************\n");
    printf("****** 1.Play ******\n");
    printf("****** 0.Exit ******\n");
    printf("********************\n");
    printf("********************\n");
}

void game()
{
    char board[Row][Col] = {0};
    //初始化棋盘
    Initboard(board, Row, Col);
    Displayboaed(board, Row, Col);
    //下棋
}

int main()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误,请重新输入\n");
        }
    } while(input);
    
    return 0;
}
