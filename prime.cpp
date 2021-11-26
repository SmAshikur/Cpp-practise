#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for(int i=2;i<p;i++){
        if(p%i==0){
            cout<<p<<" is prime number na";
            break;
        }
    }
    cout<<p<<" is a prime number!";
}