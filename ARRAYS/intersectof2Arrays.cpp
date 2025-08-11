#include <iostream>
using namespace std;

int main() {
    int arr[5]={2,5,0,7,8};
    int brr[5]={4,5,7,3,2};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]){
                cout<<brr[j]<<" ";
            }
        }
    }
    cout<<"Program executed successfully.!";
    
    return 0;
}