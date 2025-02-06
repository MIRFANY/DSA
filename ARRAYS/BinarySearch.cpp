#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,3,6,8,9};
    int n=5;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int key=6;
    while(s<=e){
        
        if(key=arr[mid]){
            cout<< key<<" found the key at index "<<mid;
            return 0;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    
        mid=(s+e) /2;

    }
    cout<<key <<" not found!";
    return 0;
}