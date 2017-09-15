# cs-assignment-3
#include<iostream>
using namespace std;
int main ()
{
 int n,di,sum;
 cout << "enter a number : ";
 cin >> n;
 sum=0;
 while(n>0)
 {
 di=n%10;
 n=n/10;
 sum=di+sum;
 
 }
 cout<<"sum of digits is : "<<sum<<endl;
 return 0;
}
 
