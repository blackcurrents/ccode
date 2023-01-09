#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//extern int a;
//int main()
//{
//	
//	printf("%d", a);
//
//}
//const int a = 0;
//int main()
//{
//	a = 20;
//}
//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'a','b','c'};
//	int len = strlen(arr1);
//	printf("%d\n", len);
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);
//	*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//	return 0;
//	
//}
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int x = 0;
	int y = 0;
	int sum = 0;
	scanf("%d %d", &x,&y);
	sum = add(x, y);
	printf("%d\n", sum);
	return 0;
}