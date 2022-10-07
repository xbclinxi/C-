#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
template<typename T1, typename T2>
constexpr auto MAX(T1 X, T2 Y) { return (X>Y?X:Y); }
int main()
{
	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("max = %d\n", max);
	max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}