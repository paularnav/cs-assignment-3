# cs-assignment-3
#include<iostream>
using namespace std;
int main()
{
 int p,c,m,b,cs,per,grd;
 cout<<"Enter physics marks : ";
 cin>>p;
 cout<<"Enter chemistry marks : ";
 cin>>c;
 cout<<"Enter mathematics marks : ";
 cin>>m;
 cout<<"Enter biology marks : ";
 cin>>b;
 cout<<"Enter computer science marks : ";
 cin>>cs;

 per=(p+m+b+c+cs)*100/500;
 if(per >= 90)
 {
 cout << "grade is A";
 } 
 else if(per >= 80)
 { 
 cout << "grade is B";
 }
 else if(per >= 70)
 {
 cout << "grade is C";
 }
 else if(per >= 60)
 {
 cout << "grade is D";
 }
 else if(per >= 40)
 {
 cout << "grade is E";
 }
 else
 {cout << "grade is F";
 }
 return 0;
}
