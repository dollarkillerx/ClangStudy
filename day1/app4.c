#include <stdio.h>

int main()
{
    // 拥有默认初始化值
    int price;
    printf("%d\n",price);

    // 定义常量
    // const int AMOUNT = 100;
    // printf("%d\n",AMOUNT);
    // return 0;

    printf("请分别输入身高的英尺和英寸,如该输入 5 7 着代表5英尺7英寸");
    float foot;
    float inch;
    scanf("%d %d",&foot,&inch);
    printf("身高为%d米\n",(foot + inch /12.0)* 0.3048);


    // 双精度浮点数
    // double foot;
    // double inch;
    // scanf("%lf %lf",&foot,&inch)

    return 0;
}