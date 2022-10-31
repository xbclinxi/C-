#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0, capital = 0;
	double rate = 0.0225, deposit = 0;
	printf("input n,capital\n");
	scanf("%d,%d", &n,&capital);
	printf("rate=%f,n=%d,capital=%d\n", rate, n, capital);
	deposit = n*rate*capital;
	printf("deposit=%f", deposit);
	return 0;
}