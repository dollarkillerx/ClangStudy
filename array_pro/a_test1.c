#include <stdio.h>
#include "max.c"
int max(int a,int b);
int main(void)
{
    int maxNum=max(12,345);
    printf("max: %d \n",maxNum);
    return 0;
}
