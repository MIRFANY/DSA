#include<iostream>
#include<vector>
using namespace std;

// recursive code
int iterAd(int* arr()){
    int n= arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
            cout<<arr[i]+arr[i+1]<<" ";
    }

}
int addCons(int* arr()){
    int n= arr.size();
    if(arr[n-1]==NULL){
        return;
    }
    vector<int> v;
    
    for(int i=0;i<n;i++){
        int sum=arr[i]+arr[i+1];
        v.push_back(sum);
    }
    addCons(v);

}
int main(){
    int arr[5]={1,2,3,4,5};
    addCons(arr);
    retur
}