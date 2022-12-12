#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 7, y = 12;
	int m = 0;

	m = y %= x - x % 5;
	printf("%d\n", m);

	x = 7, y = 12;
	m = y %= (x %= 5);
	printf("%d\n", m);

	x = 7, y = 12;
	m = y %= (x - x % 5);
	printf("%d\n", m);

	x = 7, y = 12;
	m = (y %= x) - (x %= 5);
	printf("%d\n", m);
	return 0;
}