#include <stdio.h>

int ac(int a) {
    a++;
    if (a < 10) {
        return ac(a);
    }
    return a;
}

int main()
{
    int a = ac(1);
    printf("%d\n",a);
    return 0;
}