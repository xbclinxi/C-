#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
extern int Add(int, int);

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}