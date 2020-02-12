/*
编写一段程序，读取两个数，然后显示前者是后者的百分之几
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

    int c = (double)x / y * 100 ;
printf("%.2d %%\n",c = (double)x/y*100);

return 0;
}