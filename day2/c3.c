#include <stdio.h>

int main()
{
    int a = 3;
    int b = 4;
    
    int c = a + b %(a + b)/a + a*b-b;
    printf("ac %d\n",c);
    return 0;
}