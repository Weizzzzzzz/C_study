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
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if(j < col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i < row-1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j < col-1)
                {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    printf("玩家请落子\n");

    while(1)
    {
        printf("请输入坐标:>");
        scanf("%d %d", &i, &j);
        //输入合理性的判断
        if (i >= 1 && i <= row && j >= 1 && j <= col)
        {
            if(board[i-1][j-1] == ' ')
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

    while(1)
    {
        i = rand() % row;
        j = rand() % col;
        if(board[i][j] == ' ')
        {
            board[i][j] = '#';
            break;
        }
    }
}

// //判断是否越界
// //越界返回1
// //不越界返回0
// int is_out_of_range(int i,int j)
// {
//     if((i < 0||i >= ROW)||(j < 0||j >= COL))
//         return 1;
//     else
//         return 0;
// }

//判断棋盘是否满
//满了返回1
//未满返回0
int Is_Full(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char Is_Win(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    //判断行
    for (i = 0; i < row; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
        {
            return board[i][1];
        }
    }

    //判断列
    for (j = 0; j < col; j++)
    {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
        {
            return board[1][j];
        }
    }

    //判断对角线
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
    {
        return board[1][1];
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
    {
        return board[1][1];
    }

    if(Is_Full(board,row,col))
    {
        return 'Q';
    }

    return 'C';

    // int count = 0;
    // //判断列
    // for (i = row - chess; i <= row; i++)
    // {
    //     if(is_out_of_range(i,col))
    //         continue;
    //     if(board[i][col] != ' '&)
    //         count++;
    //     else
    //         count = 0;
    //     if(count == chess)
    //         return board[i][col];
    // }
    // //判断行
    // for (j = col - chess; j <= col; j++)
    // {
    //     if(is_out_of_range(row,j))
    //         continue;
    //     else
    //         count++;
    //     if(count == chess)
    //         return board[row][j];
    // }
    // //判断对角

}