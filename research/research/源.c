#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;
	while (left<=right)
	{
		if (arr[mid] == n)
		{
			printf("%d", mid+1);
			break;
		}else if (arr[mid] > n)
		{
			right = mid;
			mid = (left + right) / 2;
		}
		else if (arr[mid] < n)
		{
			left = mid;
			mid = (left + right) / 2;
		}
	}
	if (left>right)
	{
		printf("can't found.");
	}
	return 0;
}
