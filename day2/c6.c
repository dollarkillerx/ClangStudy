/*
老王年底打算买辆车，他制定出的方案是，如果存款在100万以上包括100万买A6，
如果存款在50万到100万之间买帕萨特，如果在20万到50万之间买奇瑞，如果在20万以下的话就买奥拓，
在下面选择最合适的分支语句
*/

#include <stdio.h>

int main()
{
    int deposit; // 老王的存款
    printf("请输入老王的存款(W)：");
    scanf("%d",&deposit);
    if (deposit >= 100){
        printf("购买A6\n");
    }else if (deposit >= 50) {
        printf("购买帕萨特\n");
    }else if (deposit > 20) {
        printf("购买奇瑞\n");
    }else {
        printf("购买奥托\n");
    }
    return 0;
}