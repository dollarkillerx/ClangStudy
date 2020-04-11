#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *ptr;

    ptr = (int *)malloc(sizeof(int)); // 这个存放在堆上
    if (ptr == NULL) {
        printf("分配内存失败");
        exit(1);
    }
    printf("请输入一个整数: ");
    scanf("%d",ptr);
    printf("你输入的整数是: %d \n",*ptr);

    free(ptr); // 释放
    return 0;
}