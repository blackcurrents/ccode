#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("###############\n");
	printf("#####1.play####\n");
	printf("#####0.exit####\n");
	printf("###############\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int ret = rand()%100+1;
	int guess = 0;
	while(1)
	{
		printf("guess:");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("congratulation!you win!\n");
			break;
		}
		else if(guess<ret){
			printf("too small,retry.\n");
		}
		else {
			printf("too big,retry.\n");
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("game start:\n");
			game();
			break;
		case 0:
			printf("exit.\n");
			break;
		default:
			printf("error.retry.\n");
			break;
		}
	} while (input);
	
	return 0;
}