

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
	Init_board(board, ROW, COL);//��ʼ������Ϊ�ո�
	Print_board(board, ROW, COL);//��ӡ������������̣�
	while (1)
	{
		Player_move(board, ROW, COL);//��ӡ��������ҿ�ʼ���壻
		Print_board(board, ROW, COL);
		//ÿ�����궼�п��ܻ�����Ӯ��������Ҫ�ж�һ�£�
		 ret=is_win(board, ROW, COL);
		 if (ret != 'C')
		 {
			 break;
		 }
		Computer_move(board, ROW, COL);//��������壬���Կ�ʼ���壻
		Print_board(board, ROW, COL);
		is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int intput = 0;
	
	do
	{
		meun();
		printf("�����룺\n");
		
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:  game();
			break;
		case 0: printf("�˳���Ϸ\n");
			break;
		default:printf("����������������룺\n");
			break;
		}
	} while(intput);
}
int main()
{
	test();
	return 0;
}