#include<iostream>
using namespace std;

int findCount(int arr[], int n, int num, int diff){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(abs(arr[i]-num) <= diff){
            cnt++;
        }
    }
    return cnt;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    // taking arr input
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int num, diff;
    cin>> num >> diff;
    cout<<findCount(arr, n, num, diff);
}