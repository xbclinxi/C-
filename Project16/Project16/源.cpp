#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age = 17;
	if (age<18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 100)
		printf("����\n");
	else
		printf("�ϲ���\n");
	return 0;
}