#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}
//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//条件操作符（三目操作符）
//exp1 ？exp2 : exp3
//int main()
//{
//	int a = 0;
//	int b = 2;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//逗号表达式
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 4;
//	int d = (a = b - 2, b = a + 2, c = a + b);
//	printf("%d", d);
//	return 0;
//}
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 2000;
//	return 0;
//}
//static
//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0; 
//}
//int main()
//{
//	int a = 10;
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct stu s = { "张三",20,92.3 };
	printf("%s %d %.2lf\n", s.name, s.age, s.score);
	return 0;
}