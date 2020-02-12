/*
编写一段程序，读取两个整数，然后输出它们的和以及积。
*/
#include <stdio.h>

int main(  )
{
    int x;
    int y;

    printf("输入第一个数");
    scanf("%d",&x);
    printf("第一个数是 %d\n", x) ;
    printf("输入第二个数");
    scanf("%d",&y);
    printf("第二个数是 %d\n", y) ;
//计算两个数的和
int z = x + y;
printf("%d + %d = %d\n", x, y, z);

//计算两个数的积
z = x * y;
printf("%d * %d =%d\n",x, y, z);

return 0;
}