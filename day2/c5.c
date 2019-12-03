#include <stdio.h>

int main()
{
    int a;
    printf("猜谜 请输入数字:");
    scanf("%d",&a);
    int b = a==12? 1:0;
    if (b) {
        printf("命中目标\n");
    }else{
        printf("目标未命中\n");
    }

    return 0;
}