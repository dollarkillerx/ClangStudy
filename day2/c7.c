#include <stdio.h>

int main()
{
    // 1 + 到 100
    int i = 0;
    int sum = 0;
    while(i<100) {
        i++;
        sum += i;
    }
    
    printf("%d\n",sum);

    return 0;
}