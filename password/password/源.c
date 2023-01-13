#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[] = "123456";
	char pass[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("Please enter password:");
		scanf("%s", pass);
		if (strcmp(pass, password) == 0)
		{
			printf("succeed\n");
			break;
		}
		else {
			printf("wrong,please retry!");
		}
	}
	if (i == 3)
	{
		printf("you have entered your password incorrectly three times,exit the program.");
	}
	return 0;
}