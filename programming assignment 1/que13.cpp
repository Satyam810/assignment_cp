#include <iostream>
using namespace std;
int main(){
   // Post increment
    int a = 1;
    cout << "a value: " << a << endl;
    int b = a++;
    cout << "b value after a++ : " << b << endl;
    cout << "a value after a++ : " << a << endl;
  
    // Pre increment
    a = 1;
    cout << "a value:" << a << endl;
    b = ++a;
    cout << "b value after ++a : " << b << endl;
    cout << "a value after ++a : "<< a << endl;
  
    // Post decrement
    a = 5;
    cout << "a value before decrement: " << a << endl;
    b = a--;
    cout << "b value after a-- : " << b << endl;
    cout << "a value after a-- : " << a << endl;
  
    // Pre decrement
    a = 5;
    cout << "a value: "<< a<<endl;
    b = --a;
    cout << "b value after --a : " << b << endl;
    cout << "a value after --a : " << a << endl;

    // ternary operator 
    int c, d;
    cout<<"for ternary operator give two input"<<endl;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    cout<<"enter the value of d"<<endl;
    cin>>d;
   string result = (a>=b)?"c is greater":"d is greater";
   cout<<result<<endl;

   
    return 0;
}
