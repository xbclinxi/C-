#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	int ch = 0;
	printf("����������:>");
	scanf("%s", password);
	while ((ch = getchar() != '\n'))
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:>");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;
}