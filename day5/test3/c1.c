#include <stdio.h>

/*
 * stdin 标准输入
 * stdout 标准输出
 * stderr 标准错误流
 */


int main(int argv,char* argc[])
{
	char name;
	printf("请输入你的名称: ");
	scanf("%s",&name);
	printf("you name:%s\n",&name);
	return 0;
}
