#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//����
void InitBoard(char boart[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��-'Q'
//����-'C'

char IsWin(char board[ROW][COL], int row, int col);