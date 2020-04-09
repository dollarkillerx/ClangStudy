#include <stdio.h>

int main()
{
    fprintf(stdout,"HelloWorld\n"); // stdout 默认是指终端
    int a;
    fscanf(stdin,"%d",&a);  // 标准输入
    if (a < 0) {
        fprintf(stderr,"this value must > 0"); // 标准错误输出
        return 1;
    }else {
        fprintf(stdout,"a is %d",a);   // 标准输出
    }
    return 0;
}