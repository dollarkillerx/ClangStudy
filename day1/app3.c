#include <stdio.h>

int main()
{
    int price = 0;
    printf("请输入金额(元): ");
    scanf("%d",&price);

    int change = 100 - price;
    if (change < 0) {
        printf("你的钱不够!\n");
    } else {
        printf("给你找零:%d\n",change);
    }
    return 0;
}