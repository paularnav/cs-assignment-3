# cs-assignment-3
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main()
{
    int i=0,b,dec,c;
    char a,hex[100];
    cout<<"Enter the hexadecimal number ";
    cin>>hex;
    c=strlen(hex);
    c=c-1;
    while(c>=0)
    {a=hex[i];
    switch(a)
{       case '1':b=1;break;
    	case '2':b=2;break;
    	case '3':b=3;break;
    	case '4':b=4;break;
    	case '5':b=5;break;
    	case '6':b=6;break;
    	case '7':b=7;break;
    	case '8':b=8;break;
    	case '9':b=9;break;
    	case 'A':b=10;break;
    	case 'B':b=11;break;
    	case 'C':b=12;break;
    	case 'D':b=13;break;
    	case 'E':b=14;break;
        case 'F':b=15;break;
    	default:break;
}
i++;
dec=dec+b*pow(16,c);
c--;
}
cout<<"\nThe decimal equivalent is "<<dec;
	return 0;
}
