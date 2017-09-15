# cs-assignment-3
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n,i,fd,ld,a,b,c;
 cout<<"enter a number : ";
 cin>>n;
 ld=n%10;
 i=0;
c=n;
 while(n>0)
 {fd=n%10;
  n=n/10;
 i++;
 }
i=i-1;
 a=c-ld+fd;
 b=a-(fd*pow(10,i)) +( ld*pow(10,i));
 cout<<"new number is : "<<b<<endl;
 return 0;
}

