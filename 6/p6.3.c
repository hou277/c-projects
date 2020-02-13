/*
/创建一个函数，返回int型整数的立方。
int cube(int a)
*/

#include <stdio.h>

int sqr(int a)
{
    return a * a * a;
}

int diff(int a, int b)
{
    return (a > b ? a - b : b - a);
}

int main()
{
    int a, b;
    puts("请输入两个整数。");
    printf("整数:a"); scanf("%d", &a);
    printf("整数:b"); scanf("%d", &b);
    printf("a和b的立方差是%d。\n", diff(sqr(a), sqr(b)));
    return 0;
}