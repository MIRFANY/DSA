#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    private:
    char level;

    void print(){
        cout<<  level << endl;

    }


};




int main(){
    Hero irfan;
    cout<< "Health is:" << irfan.health << endl;

    cout<< "Level is: "<< irfan.level << endl;
    

}