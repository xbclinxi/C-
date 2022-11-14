#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%db=%d", &a, &b);
	getchar();
	scanf("%f%e", &x, &y);
	scanf("%c%c", &c1, &c2);
	printf("%d %d %f %e %c %c", a, b, x, y, c1, c2);
	return 0;
}