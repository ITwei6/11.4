#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//接下来对各函数进行声明定义；
void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);
void Computer_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);