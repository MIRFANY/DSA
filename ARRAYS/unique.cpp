#include <iostream>
using namespace std;
int uniqElmt(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main() {
    // your code 
    int arr[5]={1,4,1,5,5};
    cout<<uniqElmt(arr,5);
}