#include <iostream>
#include <iomanip>
using namespace std;
int   main( )
{
   int num1,num2,num3;
   float average;
   cout<<"Please input three numbers: ";
   cin>>num1>>num2>>num3;
   average=(num1+num2+num3)/3.0;
   cout<<fixed<<setprecision(2)<<average<<endl;
}
