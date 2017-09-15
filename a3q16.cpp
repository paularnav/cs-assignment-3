# cs-assignment-3
#include<iostream>
using namespace std;
int main()
{
   float a,b,c;
   cout<<"enter three sides of a triangle\n";
   cin>>a>>b>>c;
   if(a==b&&b==c)
     cout<<"the given triangle is equilateral"<<endl;
   else if(a==b||b==c||a==c)
     cout<<"the given triangle is isoceles"<<endl;
   else
     cout<<"the given triangle is scalene"<<endl;
   return 0;
}
