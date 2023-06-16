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
    int ret = 0;

    char board[ROW][COL] = {0};
    //初始化棋盘
    Initboard(board, ROW, COL);
    Displayboaed(board, ROW, COL);
    // 下棋
    while(1)
    {
        PlayerMove(board, ROW, COL);
        // 判断输赢
        ret = Is_Win(board, ROW, COL);
        if(ret != 'C')
            break;
        Displayboaed(board, ROW, COL);
        ComputerMove(board, ROW, COL);
        // 判断输赢
        ret = Is_Win(board, ROW, COL);
        if(ret != 'C')
            break;
        Displayboaed(board, ROW, COL);
    }
    if(ret == '*')
        printf("玩家胜\n");
    else if(ret == '#')
        printf("电脑胜\n");
    else
        printf("平局\n");
    Displayboaed(board, ROW, COL);
}

int main()
{
    srand((unsigned int)time(NULL));

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
