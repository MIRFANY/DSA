#include<iostream>
using namespace std;
int freq(int number,int arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
         if(arr[i]==number){
            cnt++;
        }
    }
    return cnt;

}
int main(){
    int arr[5]={1,4,1,1,4};
    int n=5;
    cout<<freq(1,arr,5);
    
    cout<<endl<<"program executed successfully!";
    return 0;
}