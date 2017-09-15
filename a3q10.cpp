# cs-assignment-
#include<iostream>
using namespace std;
int main()
{
   char b;
   cout<<"enter an alphabet\n";
   cin>>b;
   if(b>='a'&&b<='z')
   {
     cout<<b<<" Is in lowercase"<<endl;
   }
   else
   { 
     cout<<b<<" Is in uppercase"<<endl;
   }
   return 0;
}
