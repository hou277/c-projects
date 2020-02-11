/*
读取一个整数并显示该整数加上12之后的结果。
*/
#include <stdio.h>

int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d",&no);

    printf("它加上12的值%d\n", no + 12);

    return 0;
}