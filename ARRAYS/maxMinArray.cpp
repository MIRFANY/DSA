#include <iostream>
#include<climits>
using namespace std;

int main() {
    // your code here
    int arr[5]={2,-3,9,6,3};
    int n=5;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;

}