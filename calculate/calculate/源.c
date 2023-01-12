#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int net = 0;
	int x = 0;
	int sum = 0;
	printf("enter one number:");
	scanf("%d", &net);
	for (x = 1; x < net + 1; x++)
	{
		int i = 0;
		int num = 1;
		for (i = 1; i < x + 1; i++)
		{
			num = num * i;
		}
		sum += num;
	}
	printf("result is:%d", sum);
	return 0;
}