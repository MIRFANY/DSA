#include <iostream>
using namespace std;

int firstOccu(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int lastOccu(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+ (e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        else if(k>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main() {
    // your code here
    int n=6;
    int arr[6]={2,3,3,5,6,9};
    int k=3;
    cout<<"The first occurence of "<<k<<"is at index "<<firstOccu(arr,6,3)<<endl;
    cout<<"The last occurence of "<<k<<"is at index "<<lastOccu(arr,6,3);
    

    
    
    
    return 0;
}