//Write a program to allocate memory dynamically for an array of integers and compute the sum of its elements.

#include<iostream>
using namespace std;

int arraySum(int arr[],int n){
    cout<<"The elements of array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sum of array elts
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<<"The sum of the elements of array is :"<<sum;

}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int* arr= new int[n];
    cout<<"Enter the elts of array:"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The elements of array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    arraySum(arr,n);

    
}