/*
输入两个整数，如果两数值相等，则显示“A和B相等。”。如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。
*/
#include <stdio.h>

int main()
{
    int a;
    int b;

     puts("请输入一个整数：");
    scanf("%d", &a);
     puts("请输入一个整数：");
    scanf("%d", &b);

    if (a == b)
    {
        printf("a等于b");
    }
    if (a > b)
    {./
        printf("a大于b");
    }
    if (a < b)
    {
        printf("a小于b");
    }
    return 0;
}