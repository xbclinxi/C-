#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int d = 300000;
	int p = 6000;
	double r = 0.01;
	double m = 0;
	m = log(p / (p - d * r)) / log(1 + r);
	printf("%.1f", m);
	return 0;
}