#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("********************\n");
	printf("**   超低配扫雷   **\n");
	printf("** 1.play  0.exit **\n");
	printf("********************\n");
}

void game()
{
	char mine[ROWS][COLS];//存放布置好的雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息

	InitBoard(mine, ROWS, COLS,'0');//'0'
	InitBoard(show, ROWS, COLS,'*');//'*'

	DisplayBoard(show, ROW, COL);//盘

	SetMine(mine, ROW, COL);//布置雷
	//DisplayBoard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);//排查雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}