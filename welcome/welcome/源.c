#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr[] = "wlecome to the world!";
	char arr1[] = "#####################";
	int left = 0;
	int right = strlen(arr)-1;
	while (left <= right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		printf("%s\n", arr1);
		Sleep(500);
		left++;
		right--;
	}

	return 0;
}