#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************************\n");
	printf("****   1.play   0.exit          ***\n");
	printf("***********************************\n");
}
//RAND_MAX
void game()
{
	int ret = 0;
	int guess = 0;
	//srand((unsigned int)time(NULL));
	ret = rand() % 100 + 1;//选数在0-100之间
	/*printf("%d\n,ret");*/
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了 \n");
			break;
		}
	}
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
		case 1://注意是分号不是冒号
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

