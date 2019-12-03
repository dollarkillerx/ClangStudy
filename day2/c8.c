#include <stdio.h>

int main()
{
    int sum = 0;
    for(int a=1;a<=100;a++) {
        sum += a;
    }
    printf("%d\n",sum);
    return 0;
}