#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter first value"<<endl; 
cin>>a;
cout<<"enter second value"<<endl; 
cin>>b;

cout<<"enter operation(+,-,*,/,%)"<<endl; 
cin>>c;

if (c=='+')
{
 cout<<"a+b"<<a+b<<endl;
}
else if (c=='-')
{
 cout<<"a-b"<<a-b<<endl;
}
if (c=='*')
{
 cout<<"a*b"<<a*b<<endl;
}
if (c=='/')
{
 cout<<"a/b"<<a/b<<endl;
}
if (c=='%')
{
 cout<<"a%b"<<a%b<<endl;
}
else
{
    cout<<"invalid operation";
}
return 0;
}
