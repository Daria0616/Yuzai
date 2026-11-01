#include <stdio.h>
int main()
{
int a,b,ab,ac,c;
scanf("%f,%f,%f",&a,&b,&c);
ab=a+b;
ac=a*c;
printf("a+b+c=%.6f\n",ab+c);
printf("a*b*c=%.6f\n",a*c*b);
return 0;
}
