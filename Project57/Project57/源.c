#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	//����arr��ռ�ռ�Ĵ�С�����ϡ�\n����
	printf("%d\n", strlen(arr));
	//���ַ����ĳ��ȣ���\0��֮ǰ���ַ�������
	return 0;
}