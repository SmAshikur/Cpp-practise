#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int j;
        for(j=2;j<num;j++){
             if(num%j==0){
                    break;
                }
       }
       if(j==num){
           cout<<num<<endl;
       }
       
    }
    
    return 0;
     
}