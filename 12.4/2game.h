#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//�������Ը����������������壻
void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);
void Computer_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);