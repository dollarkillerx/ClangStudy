#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(void) 
{
    int *ptr;
    ptr = (int *)malloc(N * sizeof(int));
    if (ptr == NULL) {
        exit(1);
    }

    memset(ptr,0,N * sizeof(int));
    for (int i=0;i<N;i++) {
        printf("%d \n",ptr[i]);
    }
    free(ptr);
    return 0;
}