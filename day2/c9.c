#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        printf("幸运");
        break;
    default:
        printf("快乐");
        break;
    }
}