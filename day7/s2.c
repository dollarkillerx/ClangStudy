#include <stdio.h>
typedef int tni;
tni a = 0;
tni b = 1;
tni c = 2;

void zz(tni z) {
    switch (z) { // 这里为什么啥错误的？？？
        case a:
        printf("is a");
        case b:
        printf("is b"); 
        case c:
        printf("is c");
        default:
        printf("is waht"); 
    }
}

int main(void) 
{
    zz(a);
    return 0;
}