#include <stdio.h>

int main(void) 
{
    struct Test 
    {
        unsigned int a:1;  // 只能放下0~1
        unsigned int b:1;
        unsigned int c:2;  // 只能存两个字节
    };

    struct Test test = {0,1,3};
    printf("a= %d b= %d c= %d \n",test.a,test.b,test.c);
    return 0;
}