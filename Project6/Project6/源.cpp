#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	int input = 0;
	printf("���밲��\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("�ؼ�����\n");
	return 0;
}