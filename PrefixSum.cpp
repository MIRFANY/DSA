//array can be partitioned into 2 continuous subarrays.
#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    
    int arr[9]={1,2,3,4,5,6,7,8,9};
    // int n= arr.size();
    // vector<int> pre;


    // for(int i=0;i<n;i++){
    //     if(2*pre[i]=pre[n-1]){
    //         return true;
    //     };

    // }

    // 

    int n = sizeof (arr)/sizeof (arr[0]);
    int left;
    cout<<"Ente the value of left: "<<" ";
    cin>>left;
    int right ;
    cout<<"Enter the value of right: "<<" ";
    cin>>right;
    int sum=0;
    while(left<= right){
        sum+=arr[left];
        left++;
    }

    cout<<"The sum of the elts from indices left to right is : "<<sum;
    

}


