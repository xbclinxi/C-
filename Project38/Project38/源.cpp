#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//一分钟后关机
again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串
	{
		system("shutdown -a");//停止关机
	}
	else
	{
		goto again;
	}
	return 0;
}