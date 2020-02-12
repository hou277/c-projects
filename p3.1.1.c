/*
输入两个整数值，如果后者是前者的约数，则显示“B是A的约数”，如果不是，则显示“B不是A的约数
*/
#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("请输入一个整数：");
    scanf("%d", &a);
    printf("请输入一个整数：");
    scanf("%d", &b);

    if ((a % b) == 0)
    {
            puts("b是a的约数");
    }
    else
    {
        puts("b不是a的约数");
    }

    return 0;
}