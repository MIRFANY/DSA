#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for( ; j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    // your code here
    int arr[5]={2,5,1,6,3};
    int n=5;

    cout<<"The array before insertion sort is: "<<" ";
    printArray(arr,n);

    cout<<endl;
    cout<<"The array after insertion sort is :"<<" ";

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}













// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // your code here
//     int arr[6]={3,5,2,6,1,9};
//     int n=6;
//     for(int i=0;i< n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }
    
    
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     // your code here
    
//     int arr[6]={2,6,3,8,1,4};
//     int n=6;
//     for(int start=0;start<n-1;start++){
//         int minInd=start;
//         for(int j=start+1;j<n;j++){
//             if(arr[j]< arr[minInd]){
//                 minInd=j;
//             }
//         }
//         swap(arr[start],arr[minInd]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
