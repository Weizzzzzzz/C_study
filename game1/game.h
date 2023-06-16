#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3
#define chess 3

// 初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);

// 打印棋盘
void Displayboaed(char board[ROW][COL], int row, int col);

//玩家落子
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑落子
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
char Is_Win(char board[ROW][COL], int row, int col);