#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"input 2 numbers"<<endl;
    cin>>a>>b;
    char op;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Result  ="<<a+b<<endl;
        break;
    case '-':
        cout<<"Result  ="<<a-b<<endl;
        break;
    case '/':
        cout<<"Result  ="<<a/b<<endl;
        break;
    case '*':
        cout<<"Result  ="<<a*b<<endl;
        break;
    case '%':
        cout<<"Result  ="<<a%b<<endl;
        break;
    
    
    default:
        cout<<"do some action"<<endl;
        break;
    }
}
