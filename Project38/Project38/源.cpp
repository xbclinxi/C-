#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//һ���Ӻ�ػ�
again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n������>:");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
	{
		system("shutdown -a");//ֹͣ�ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}