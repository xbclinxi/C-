#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble_sort(int arr[],int sz)//冒泡排序
{
	//确定冒泡排序的趟数
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);对数组arr进行传参，实际上传过去的是arr首元素的地址&arr[0]

	for (i = 0; i < sz - 1; i++)
	{
		//每一趟冒泡排序
		int j = 0;

		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];

				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}