

#include "2game.h"
void meun()
{
	printf("*************************\n");
	printf("*******   1.play   ******\n");
	printf("*******   0.exit   ******\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL];
	Init_board(board, ROW, COL);//初始化数组为空格；
	Print_board(board, ROW, COL);//打印这个三子棋棋盘；
	while (1)
	{
		Player_move(board, ROW, COL);//打印完棋盘玩家开始下棋；
		Print_board(board, ROW, COL);
		//每次下完都有可能会有输赢，所以需要判断一下；
		 ret=is_win(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		Computer_move(board, ROW, COL);//玩家下完棋，电脑开始下棋；
		Print_board(board, ROW, COL);
		is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	if (ret == 'Q')
	{
		printf("平局\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int intput = 0;
	
	do
	{
		meun();
		printf("请输入：\n");
		
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:  game();
			break;
		case 0: printf("退出游戏\n");
			break;
		default:printf("输入错误，请重新输入：\n");
			break;
		}
	} while(intput);
}
int main()
{
	test();
	return 0;
}