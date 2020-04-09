#include <stdio.h>

void convert(int a[],int b[])
{
    for(int i=0;i<5;i++) {
        if (a[i] > b[i]) {
            int c = b[i];
            b[i] = a[i];
            a[i] = c;
        }
    }
}

int main(void) {
    int a[] = {1,2,3,4,5};
    int b[] = {5,4,3,2,1};
    convert(a,b);
    for (int i=0;i<5;i++) {
        printf("%d \n",a[i]);
    }
}