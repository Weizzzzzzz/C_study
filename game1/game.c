#include "game.h"

void Initboard(char board[Row][Col], int row, int col)
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

void Displayboaed(char board[Row][Col], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < Col; j++)
        {
            printf(" %c ", board[i][j]);
            if(j < Col-1)
            {
                printf("|");
            }
        }
        printf("\n");
    }
}
