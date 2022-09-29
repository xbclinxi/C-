#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";//3
	char arr2[] = { 'a','b','c' };//Ëæ»úÖµ
	printf("%lld\n", strlen(arr1));
	printf("%lld\n", strlen(arr2));
	return 0;
}