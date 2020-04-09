#include <stdio.h>

int main(void) 
{
    printf("First");

    int arrFirst[5] = {1,2,3,4,5};
    for (int i = 0;i< 5;i++){
        printf("%d \n",arrFirst[i]);
    }

    printf("Second");

    int arrSecond[] = {1,2,3,4,5,6};
    for (int i = 0;i<6;i++) {
        printf("%d \n",arrFirst[i]);
    }

    printf("Third");
    int arrThird[5];
    arrThird[0] = 1;
    arrThird[1] = 2;
    arrThird[2] = 3;
    arrThird[3] = 4;
    for (int i=0;i<6;i++) {
        printf("Id: %d S: %d \n",i,arrThird[i]);
    }    

    return 0;
}