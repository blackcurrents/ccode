#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//The old version
//int main()
//{
//	int net = 0;
//	int x = 0;
//	int sum = 0;
//	printf("enter one number:");
//	scanf("%d", &net);
//	for (x = 1; x < net + 1; x++)
//	{
//		int i = 0;
//		int num = 1;
//		for (i = 1; i < x + 1; i++)
//		{
//			num = num * i;
//		}
//		sum += num;
//	}
//	printf("result is:%d", sum);
//	return 0;
//}


//The New Version
int main()
{
	int sum = 0;
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("enter a number:");
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("result:%d",sum);
	return 0;
}