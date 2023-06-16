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

//判断是否越界
//越界返回1
//不越界返回0
int is_out_of_range(int i,int j)
{
    if((i < 0||i >= ROW)||(j < 0||j >= COL))
        return 1;
    else
        return 0;
}

char Is_Win(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    int count = 0;
    //判断列
    for (i = row - chess; i <= row; i++)
    {
        if(is_out_of_range(i,col))
            continue;
        if(board[i][col] != ' '&)
            count++;
        else
            count = 0;
        if(count == chess)
            return board[i][col];
    }
    //判断行
    for (j = col - chess; j <= col; j++)
    {
        if(is_out_of_range(row,j))
            continue;
        else
            count++;
        if(count == chess)
            return board[row][j];
    }
    //判断对角

}