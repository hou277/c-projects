/*
编写一段程序，输入一个整数值，显示出它的绝对值。
*/
#include <stdio.h>
    int main()
    {
        int a ;
        puts("请输入一个整数：");

        scanf("%d" , &a);

        if(a > 0)
        {
            printf("%d\n" , a);
        }
        else
        {
            printf("%d\n" , -a);

        }
        return 0;
    }