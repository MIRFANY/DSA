#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void unionOfTwo(int arr[], int brr[],int n){
    set<int> res;
    for(int i=0;i<n;i++){
        res.insert(arr[i]);
    }

    for(int i=0;i<n;i++){
        res.insert(brr[i]);
    }


    cout<<"The union of the two arrays is: "<<endl;

    for(auto it=res.begin();it!=res.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    int arr[5]={1,2,8,4,5};
    int brr[5]={9,8,7,0,5};
    int n=5;

    unionOfTwo(arr, brr, n);

}