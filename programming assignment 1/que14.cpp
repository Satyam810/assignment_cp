#include <iostream>
using namespace std;

void Count(string str){
    int u = 0,l = 0,n = 0,s = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            u++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            l++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            n++;
        }
        else
        {
            s++;
        }
        cout<<"uppercase letter: "<<u<<endl;
        cout<<"lowercase letter: "<<l<<endl;
        cout<<"number: "<<n<<endl;
        cout<<"special character: "<<s<<endl;
    }
    
}
int main(){
    string str;
    cout<<"enter any string";
    cin>>str;
    Count(str);
    return 0;
}
