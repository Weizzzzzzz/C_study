#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void Displayboaed(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        // 打印数据
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        // 打印分割
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("玩家请落子\n");

    while (1)
    {
        printf("请输入坐标:>");
        scanf("%d %d", &i, &j);
        // 输入合理性的判断
        if (i >= 1 && i <= row && j >= 1 && j <= col)
        {
            if (board[i - 1][j - 1] == ' ')
            {
                board[i - 1][j - 1] = '*';
                break;
            }
            else
            {
                printf("坐标被占用,请重新输入\n");
            }
        }
        else
        {
            printf("输入非法,请重新输入\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("电脑落子\n");

    while (1)
    {
        i = rand() % row;
        j = rand() % col;
        if (board[i][j] == ' ')
        {
            board[i][j] = '#';
            break;
        }
    }
}

// 判断棋盘是否满
// 满了返回1
// 未满返回0
int Is_Full(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char Is_Win(char board[ROW][COL], int row, int col)
{
    // int i = 0;
    // int j = 0;
    // //判断行
    // for (i = 0; i < row; i++)
    // {
    //     if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
    //     {
    //         return board[i][1];
    //     }
    // }

    // //判断列
    // for (j = 0; j < col; j++)
    // {
    //     if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
    //     {
    //         return board[1][j];
    //     }
    // }

    // //判断对角线
    // if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
    // {
    //     return board[1][1];
    // }

    // if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
    // {
    //     return board[1][1];
    // }

    // if(Is_Full(board,row,col))
    // {
    //     return 'Q';
    // }

    // return 'C';

    int i = 0;
    int j = 0;
    int a = 0;
    int count = 0;
    // 判断行
    for (i = 0; i < row; i++)
    {
        // 玩家
        for (a = 0; a < col; a++)
        {
            if (board[i][a] == '*')
                count++;
            else
                count = 0;
            if (count == chess)
                return board[i][a];
        }
        // 电脑
        for (a = 0; a < col; a++)
        {
            if (board[i][a] == '#')
                count++;
            else
                count = 0;
            if (count == chess)
                return board[i][a];
        }
    }
    // 判断列
    for (j = 0; j < col; j++)
    {
        // 玩家
        for (a = 0; a < row; a++)
        {
            if (board[a][j] == '*')
                count++;
            else
                count = 0;
            if (count == chess)
                return board[a][j];
        }
        // 电脑
        for (a = 0; a < row; a++)
        {
            if (board[a][j] == '#')
                count++;
            else
                count = 0;
            if (count == chess)
                return board[a][j];
        }
    }
    // 判断对角
    for (i = 0, j = 0; i < row, j < col; i++, j++)
    {
        if (board[i][j] == '*')
            count++;
        else
            count = 0;
        if (count == chess)
            return board[i][j];
    }
    for (i = row - 1, j = 0; i < row, j < col; i--, j++)
    {
        if (board[i][j] == '*')
            count++;
        else
            count = 0;
        if (count == chess)
            return board[i][j];
    }
    for (i = 0, j = 0; i < row, j < col; i++, j++)
    {
        if (board[i][j] == '#')
            count++;
        else
            count = 0;
        if (count == chess)
            return board[i][j];
    }
    for (i = row - 1, j = 0; i < row, j < col; i--, j++)
    {
        if (board[i][j] == '#')
            count++;
        else
            count = 0;
        if (count == chess)
            return board[i][j];
    }
    // 平局
    if (Is_Full(board, ROW, COL))
    {
        return 'Q';
    }
    // 游戏继续
    return 'C';
}