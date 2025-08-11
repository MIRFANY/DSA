#include <iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main() {

    char name[10];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    // or
    // for(int i=0;i <'\0';i++){
    //     cin>>name[i];
    // }
    cout<<"Your name is :"<<name<<endl;

    cout<<"Length:"<<getLength(name)<< endl;



    // your code here
    return 0;
}