#include<stdio.h>

int ac(int a,int b) {
    return a + b;
}

int main()
{
    int a = 0;
    int b = 0;
    printf("输入计算机啊: ");
    scanf("%d,%d",&a,&b);
    int c = ac(a,b);
    printf("计算器:%d\n",c);
    return 0;
}