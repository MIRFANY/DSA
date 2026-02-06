#include<iostream>
using namespace std;
void print1toN(int i, int n){
    //base condition
    if(i==0) return ;
    // work
    cout<<i<<endl;
    // recursive call
    print1toN(i-1,n);
    
}
int main(){
    int n ;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<endl;
    print1toN(6,n);


}