#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

void printArray(int arr[], int n){  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,4,2,7,3};
    int n=5;

    selectionSort(arr, n);

    printArray(arr,n);
}