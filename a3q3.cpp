# cs-assignment-3
#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"enter a number\n"<<endl;
    cin>>a;
    if(a>0)
    { 
      cout<<a<<" the number is positive"<<endl;
    }
    else if(a<0)
    {
      cout<<a<<" the number is negative"<<endl;
    }
    else
    {
      cout<<a<<" is zero"<<endl;
    }
    return 0;
}
