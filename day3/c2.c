#include <stdio.h>

int ac() 
{
    static int a = 0;  // 静态变量只会初始化一次
    a++;
    return a;
}

int acp = 10;

int main()
{
    int b;
    for (int a=0;a<10;a++) {
        int b = ac();
    }

    printf("ac: %d\n",b);

    register int cup_s  =  10; // 寄存器变量
    printf("cpu: %d\n",cup_s);

    printf("acp: %d\n",acp);

    return 0;
}