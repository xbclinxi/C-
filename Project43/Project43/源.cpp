#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap1(int x, int y)//不能交换
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
void Swap2(int* pa, int* pb)//pa指针变量
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;//解引用变量
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap1(a, b);
	printf("a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}