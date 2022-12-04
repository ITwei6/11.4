//�����ǶԸ��������ж��壬������������������
#include "2game.h"

void Init_board(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Print_board(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col;j++)
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
void Player_move(char board[ROW][COL], int row, int col)
{
	//����֮ǰҪ�����������Ƿ�Ϸ������巶Χ�Ƿ�Ϸ�������ط��Ƿ�Ϸ���
	printf("�����\n");
	while (1)
	{
		printf("�����룺\n");
		int x, y;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�����������룺\n");
			}

		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
}
void Computer_move(char board[ROW][COL], int row, int col)
{
	printf("������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}

}
int is_full(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{
		int j;
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0;i < row;i++)
	{//�ж�������ÿ�ж���ͬ��ΪӮ��
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0;i < col;i++)
	{//�ж�������ÿ�ж���ͬ��ΪӮ��
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ�����ͬ��ΪӮ��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (is_full == 1)
	{
		return 'Q';
	}




	return 'C';
}