#include<iostream>
using namespace std;
int peakElt(int arr[],int size,int k){
    int s=0,e=size-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
}
int binarySearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;

    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }


    return -1;
}



int main(){
    int even[6]={2,3,5,6,7,8};
    int odd[5]={1,2,3,4,5};

    cout<<"The key is found at index:"<<binarySearch(even,6,7);

    



}