#include <stdio.h>

void c(int *a,int *b)
{
    int *c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d,%d",&a,&b);
    c(&a,&b);
    printf("a: %d  ,b: %d\n",a,b);
    return 0;
}
