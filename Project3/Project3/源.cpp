#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}