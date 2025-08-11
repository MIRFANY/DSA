#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,4,2,1};
    int n=5;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                cnt=1;
            }
        }
    }
    cout<<"unique elt found at index:"<<i<<endl;
    cout<<"Program executed successfully!";
    // your code here
    return 0;
}