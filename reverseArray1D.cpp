#include <iostream>
using namespace std;

int main() {
    // your code here
    int arr[5]={2,5,3,7,8};
    int size=5;
    int s=0;
    int e=size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i< size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}