#include <stdio.h>
void sp(int *a,int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void spc(int a) {
    printf("you put: %d \n",a);
}

int main(void) 
{
    int a = 16;
    int b = 32;
    sp(&a,&b);
    printf("a: %d ,b: %d \n",a,b);
    return 0;
}
