#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int x = 0;
	int num = 1;
	printf("�׳˵ļ���\n����������:");
	scanf("%d", &x);
	for (i = 1; i < x + 1; i++)
	{
		num = num * i;
	}
	printf("%d�Ľ׳�Ϊ%d", x, num);
	return 0;
}