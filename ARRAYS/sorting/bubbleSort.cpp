#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}
int main(){
    int arr[6]={1,2,3,6,4,1};
    int n=6;
    cout<<"The array before sorting is: "<<endl;
    printArray(arr,n);

    cout<<"The array after sorting is :"<<" ";

    bubbleSort(arr, n);
    printArray(arr,n);


}