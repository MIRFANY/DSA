#include<iostream>
using namespace std;
int reachHome(int src, int des){
    if(src == des){
        return 0;
    }

    src++;
    reachHome(src, des);
}

int main(){
    int src=1;
    int des=10;
    cout<<"The scr now is:"<< src <<" and the destination is "<<des <<endl;

    reachHome(src,des);

    cout<<"The src after is : "<<src <<"and the destination is "<< des;
}