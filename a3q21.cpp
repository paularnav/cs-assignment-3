# cs-assignment-3
#include<iostream>
using namespace std;
int main()
{
 float a,b,c,d,e,f,g,h;
 cout<<"enter units of electricity consumed : ";
 cin>>a;
 if(a<=50)
 {
 b=a*0.5;
 cout<<"total charges = "<<b;
 }
 else if(a>=50 && a<=150)
 {
 b=a-50;
 c=50*0.5;
 d=b*0.75;
 e=c+d;
 cout<<"total charges = "<<e;
 }
 else if(a>=150 && a<=250)
 {
 b=a-150;
 c=50*0.5;
 d=100*0.75;
 e=b*1.2;
 f=c+d+e;
 cout<<"total charges : "<<f;
 }
 else if(a>=250)
 {
 b=a-250;
 c=50*0.5;
 d=100*0.75;
 e=100*1.2;
 f=b*1.5;
 g=c+d+e+f;
 h=g*(1+0.2);
 cout<<"total charges : "<<h;
 }
 
 return 0;
}
