#include<stdio.h>
int main()
{    
double n;    
scanf("%lf",&n);    
printf("输入一个数字：你输入的是 ");    
if (n>0)printf("正数");    
else if (n<0)printf("负数");    
else printf("0");    
printf("。\n");    
return 0;
}
