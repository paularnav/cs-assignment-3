# cs-assignment-3
#include<iostream>
using namespace std;
int main ()
{
 int n,i,fd,ld,sum;
 cout<<"enter a number : ";
 cin>>n;
 ld=n%10;
 i=0;
 while(n>0)
 {fd=n%10;
  n=n/10;

 }
 sum=fd+ld;
 cout<< "sum of  last digit and first digit : "<<sum<<endl;
 return 0;
}

