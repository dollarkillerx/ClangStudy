// 冒泡排序
#include <stdio.h>

void sort(int a[]) {
    for (int j=4;j>0;j--) {
        for (int i=0;i<j;i++) {
            int temp;
            if (a[i] < a[i + 1]) {
                temp = a[i + 1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main(void) 
{
    int a[] = {1,3,2,3,5};
    sort(a);
    for (int i=0;i<5;i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}