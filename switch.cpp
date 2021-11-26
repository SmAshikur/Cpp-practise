#include<iostream>
using namespace std;
int main(){
   char key;
    cin>>key;
   /*  if(key=='a'){
        cout<<"the key you press is 'A'"<<endl;
    }
    else if(key=='b'){
        cout<<"the key you press is 'b'"<<endl;
    }
    else if(key=='c'){
        cout<<"the key you press is 'c'"<<endl;
    }
    else if(key=='d'){
        cout<<"the key you press is 'd'"<<endl;
    }
    else if(key=='e'){
        cout<<"the key you press is 'e'"<<endl;
    }
    else if(key=='f'){
        cout<<"the key you press is 'f'"<<endl;
    }
    else if(key=='g'){
        cout<<"the key you press is 'g'"<<endl;
    }
    else{
        cout<<"press a to g"<<endl;
    }*/
    switch (key)
    {
    case 'a':
        cout<<"the key you press is 'A'"<<endl;
        break;
    case 'b':
        cout<<"the key you press is 'b'"<<endl;
        break;
    case 'c':
        cout<<"the key you press is 'c'"<<endl;
        break;
    case 'd':
        cout<<"the key you press is 'd'"<<endl;
        break;
    case 'e':
        cout<<"the key you press is 'e'"<<endl;
        break;
    
    default:
         cout<<"press a to f"<<endl;
        break;
    }


}
