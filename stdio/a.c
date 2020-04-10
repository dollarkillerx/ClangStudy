#include <stdio.h>
/**
 * stdin
 * stdout
 * stderr
 * */


int main(void) {
    fprintf(stdout,"Please input the value a:");
    int a;
    fscanf(stdin,"%d",&a);
    if (a < 0) {
        fprintf(stderr,"the value must > 0\n");
        return -1;
    }

    return 0;
}