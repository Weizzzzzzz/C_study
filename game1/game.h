#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3
#define chess 3

// ��ʼ������
void Initboard(char board[ROW][COL], int row, int col);

// ��ӡ����
void Displayboaed(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char Is_Win(char board[ROW][COL], int row, int col);