#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double r = 0.07;
	int n = 10;
	double p = 1;

	for (n = 1; n <= 10; n++)
	{
		p = (1 + r) * p;
	}
	printf("%f", p);
	return 0;
}