#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Give the Number =  ";
    cin>>n;
    bool flag;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            flag=1;
             cout<<"Opps it not a Prime number! ):";
        }
    }

    if(flag==0){       
        cout<<"Congo its a Prime Number";
    }
}