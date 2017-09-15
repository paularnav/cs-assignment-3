# cs-assignment-3
#include<iostream>
using namespace std;
int main()
{
 int di,n,a,pro;
 cout<<"enter a number : ";
 cin>>n;
 pro=1;
 while(n>0)
 {
 di=n%10;
 n=n/10;
 pro=pro*di;
 }
 cout<<"product of digits of numbers is : "<<pro<<endl;
 return 0;
}
