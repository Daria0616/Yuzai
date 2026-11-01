#include"stdio.h"
int max(int x,int y)
{
	return(x>y?x:y);
}
int main()
{
	int num1,num2,num3;
	printf("Input two integer number:");
	scanf("%d,%d",&num1,&num2);
	num3=max(num1,num2);
	printf("max=%d\n",num3);
	return 0;
}
