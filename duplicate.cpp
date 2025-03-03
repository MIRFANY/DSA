#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,4,1,4};
    int n =5;
    int j=0;
    // for(int i=j+1;i<5;i++){
    //     if(arr[i]==arr[j]){
    //         cout<<"duplicate found at indices"<< i<< " "<<j<<endl;
    //     }
    //     j++;
    // }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate found at indices" << i <<" " <<j<<endl;
            }
        }
    }

    cout<<"Program executed successfully!";
    
}