#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	//计算arr所占空间的大小（加上‘\n’）
	printf("%d\n", strlen(arr));
	//求字符串的长度（‘\0’之前的字符个数）
	return 0;
}