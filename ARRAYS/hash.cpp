#include <iostream>
using namespace std;

int main() {
    // your code here
    int arr[5]={1,4,1,1,4};
    int n=5;
    
    int q=3;
    int num[q];
    cout<<"Enter the queries:"<<endl;
    for(int i=0;i<q;i++){
        cin>>num[i];
    }
    
    int hash[13]={0};
    for(int i=0;i<n;i++){    
        hash[arr[i]] =hash[arr[i]]+1;
    }

    for(int i=0;i<n;i++){
        cout<<hash[num[i]]<<" "<<endl;
    }
    
    return 0;
}