#include <iostream>
using namespace std;
int main() {
    int arr[6]={2,5,3,7,9,4};
    int n=6;
    int s=0;
    int end=n-1;
    while(s<end){
        swap(arr[s],arr[end]);
        s++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    } 
    return 0;
}