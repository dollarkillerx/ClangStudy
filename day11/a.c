#include <stdio.h>
int write() {
    FILE *fp;
    if ((fp = fopen("file.txt","a+")) == NULL) {
        printf("打开文件失败!\n");
        return 1;
    }

    char wr[]= "Hello World!!!";
    fwrite(wr,sizeof(wr),1,fp);
    fclose(fp);
}

int read() {
    FILE *fp;
    fp = fopen("file.txt","r");
    if (fp == NULL) {
        printf("open file error \n");
        return 1;
    }
    int ch;
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
}

int main(void) 
{
    // write();
    return read();
    return 0;
}