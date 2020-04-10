#include <stdio.h>

union data {
    int a;
    char b;
    int c;
};

int main(void) {
    union data d1;
    d1.a = 11;
    printf("d1 a: %d \n",d1.a); // 11
    d1.c = 12;
    printf("d1 c: %d \n",d1.c); // 12

    printf("d1 a: %d \n",d1.a); // 12

    return 0;
}