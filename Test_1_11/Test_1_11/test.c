#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������if���
//int main()
//{
//	int a = 0;
//	printf("����������:\n");
//	scanf("%d", &a);
//	if (a >= 18)
//	{
//		printf("���ѳ��ꡣ");
//	}
//	else {
//		printf("δ����.");
//	}
//	return 0;
//}
//elseֻ�������ifƥ��
//�ж�һ�����Ƿ�������
//int main()
//{
//	int a = 0;
//	printf("������һ����:\n");
//	scanf("%d", &a);
//	if (1 == a % 2)
//	{
//		printf("��������\n");
//	}
//	else {
//		printf("��ż����\n");
//	}
//	return 0;
//}
//���1~100�������
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
//	//�����㷨
//	for (a = 1; a < 101; a += 2)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}
//switch���
//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ��\n");
//		break;
//	case 2:
//		printf("���ڶ���\n");
//		break;
//	case 3:
//		printf("��������\n");
//		break;
//	case 4:
//		printf("�����ġ�\n");
//		break;
//	case 5:
//		printf("�����塣\n");
//		break;
//	case 6:
//		printf("��������\n");
//		break;
//	case 7:
//		printf("�����졣\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//while ���
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
//continue������
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
//getchar������
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
//getchar��ȡ����᷵��EOF������-1
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N����");
//	//getchar();//�����������\0
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch = 'Y')
//	{
//		printf("����ɹ�!\n");
//		printf("����ȷ��Ϊ��%s", password);
//	}
//	else {
//		printf("����ʧ��!");
//	}
//	
//	return 0;
//}
//for ���ѭ��
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