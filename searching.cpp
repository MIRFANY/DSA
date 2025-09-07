#include<iostream>
using namespace std;

// linear search
void linearSearch(int* arr, int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key found at index"<<i<<endl;
            break;
        }
    }
}


void binarySearch(int* arr, int n, int k){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(mid==k){
            cout<<"key found at index"<<mid;
            return;
        }

        if(mid> k){
            end=mid-1;
        }

        if(mid<k){
            start= mid+1;
        }

        start++;
        end--;
    }

}
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];

    cout<<"Enter the elts:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter the value of k:"<<endl;
    cin>>k;
    // linearSearch(arr,n,k);

    binarySearch(arr, n,k);

    
    // delete[] arr;

}