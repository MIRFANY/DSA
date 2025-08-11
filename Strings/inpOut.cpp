#include<iostream>
using namespace std;

int main(){
    char name[10];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    for(int i=0;i<10;i++){
        cin>>name[i];
    }
    cout<<"Here is your name coming!";
    for(int i=0;i<10;i++){
        cout<<"Your name is:"<<name[i];
    }


}