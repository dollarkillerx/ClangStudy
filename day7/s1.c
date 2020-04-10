#include <stdio.h>
#define R 10 // 定义宏  编译器认为宏就是字符串
#define N(n) n * 10
int main(void) 
{
    int a = R;  // 预处理阶段 会吧10替换到这里
    printf("A : %d \n",a);

    int b = N(a); // int b = a * 10;
    printf("B: %d \n",b);
    printf("Hello World !!!");
    return 0;
}