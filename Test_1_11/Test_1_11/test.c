#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//常见的if语句
//int main()
//{
//	int a = 0;
//	printf("请输入年龄:\n");
//	scanf("%d", &a);
//	if (a >= 18)
//	{
//		printf("你已成年。");
//	}
//	else {
//		printf("未成年.");
//	}
//	return 0;
//}
//else只和最近的if匹配
//判断一个数是否是奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个数:\n");
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("是奇数。\n");
//	}
//	else {
//		printf("是偶数。\n");
//	}
//	return 0;
//}
//输出1~100间的奇数
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 101; a++)
//	{
//		if (1 == a % 2)
//		{
//			printf("%d ", a);
//		}
//	}
//	//进阶算法
//	for (a = 1; a < 101; a += 2)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}
//switch语句
//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一。\n");
//		break;
//	case 2:
//		printf("星期二。\n");
//		break;
//	case 3:
//		printf("星期三。\n");
//		break;
//	case 4:
//		printf("星期四。\n");
//		break;
//	case 5:
//		printf("星期五。\n");
//		break;
//	case 6:
//		printf("星期六。\n");
//		break;
//	case 7:
//		printf("星期天。\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//while 语句
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//continue的作用
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//getchar的运用
//int main()
//{
//	int ch = getchar();
//	printf("%c", ch);
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//getchar遇取错误会返回EOF，就是-1
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）：");
//	//getchar();//清除缓冲区的\0
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch = 'Y')
//	{
//		printf("输入成功!\n");
//		printf("密码确定为：%s", password);
//	}
//	else {
//		printf("输入失败!");
//	}
//	
//	return 0;
//}
//for 语句循环
int main()
{
	int i = 0;
	for (i = 1; i < 11; i++)
	{
		if (5 == i)
			break;
		printf("%d ", i);
	}
	return 0;
}