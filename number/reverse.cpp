#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Give the Number =  ";
    cin>>n;
    int reverse = 0;
    while (n>0)
    {
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }
    cout<<"The the Reverse of Given NUmber is = "<<reverse<<endl;
     return 0;     
}