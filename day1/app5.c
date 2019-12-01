#include <stdio.h>

int main()
{
    int a;
    int b = 12;
    int c;
    scanf("%d",&a);

    c = a;
    a = b;
    b = c;
    printf("a = %d  , b = %d \n",a,b);
    return 0;
}