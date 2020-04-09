#include <stdio.h>
#include <string.h>
int main(void) 
{
    char a[]= "你好世界!";
    char b[6] = {'h','e','l','l','o','\0'};  // \0为结束符
    printf("%s \n",a);
    printf("%s \n",b);

    char s1[] = "a";
    char s2[] = "a";
    char s3[] = "c";

    // 常用字符串函数
    printf("a ASICII: %d \n",'a');
    printf("b ASICII: %d \n",'b');
    printf("s1 len: %d s2 ;en: %d \n",strlen(a),strlen(b));
    printf("s1 eq s2 ?: %d \n",strcmp(s1,s2));
    printf("s1 eq b s3: %d \n",strcmp(s1,s3));  // o eq 反之就是asicii的差值

    // strcpy()  字符串覆盖
    char test1[] = "hello world";
    strcpy(test1,"helo"); // 会把 helo 覆盖到test1中  不能超出啊
    printf("%s \n",test1);

    // strcat() 字符串拼接
    char a1[100]="我是你爸爸 ";
    char b1[] = "Hello World";
    strcat(a1,b1);
    printf("%s \n",a1);
    return 0; 
}